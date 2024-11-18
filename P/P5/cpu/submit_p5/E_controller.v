`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:19:39 11/14/2023 
// Design Name: 
// Module Name:    E_controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`define R 6'b000000//special
`define ORI 6'b001101
`define LUI  6'b001111
`define LW 6'b100011
`define SW 6'b101011
`define BEQ 6'b000100
`define JAL 6'b000011

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000

`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011


module E_controller(
    input [31:0] E_instruction,
    output [15:0] E_imm16,
    output [1:0] s_E_data2,
    output [2:0] E_op,
	 output [1:0] E_T_new,
	 output [4:0] E_Wreg,
	 output E_is_LW,
	 output E_is_SW,
	 output  [1:0] s_E_GRF_Wdata,
	 output E_is_jal
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=E_instruction[31:26];
	 assign funct=E_instruction[5:0];
	 
	 wire add;
	 wire sub;
	 wire ori;
	 wire lui;
	 wire lw;
	 wire sw;
	 wire beq;
	 wire jal;
	 wire jr;
	 assign add=(special==`R&&funct==`ADD_FUN)?1'b1:1'b0;
	 assign sub=(special==`R&&funct==`SUB_FUN)?1'b1:1'b0;
	 assign ori=(special==`ORI)?1'b1:1'b0;
	 assign lui=(special==`LUI)?1'b1:1'b0;
	 assign lw=(special==`LW)?1'b1:1'b0;
	 assign sw=(special==`SW)?1'b1:1'b0;
	 assign beq=(special==`BEQ)?1'b1:1'b0;
	 assign jal=(special==`JAL)?1'b1:1'b0;
	 assign jr=(special==`R&&funct==`JR_FUN)?1'b1:1'b0;
	 
	 assign E_is_SW=sw;
	 assign E_is_LW=lw;
	 assign E_is_jal=jal;
	 
	
	assign E_imm16=E_instruction[15:0];
	assign s_E_data2[1]=(ori)?1'b1:1'b0;
	assign s_E_data2[0]=(lui||lw||sw)?1'b1:1'b0;
	assign E_op=(add||lw||sw)?`ADD_OP:
										(sub)?`SUB_OP:
										(ori)?`OR_OP:
										(lui)?`LUI_OP:
										`ADD_OP;
		

	assign E_T_new=(add||sub||ori)?2'b01:
													(lw)?2'b10:
													(sw||beq||jal||jr)?2'b00:
													2'b00;
	
	wire [4:0] rt;
	wire [4:0] rd;
	assign rt=E_instruction[20:16];
	assign rd=E_instruction[15:11];
	
	assign E_Wreg=(add||sub)?rd:
												(ori||lui||lw)?rt:
												(jal)?5'd31:
												5'b0;
					
	assign s_E_GRF_Wdata[1]=(jal)?1'b1:1'b0;
	assign s_E_GRF_Wdata[0]=(lw)?1'b1:1'b0;

endmodule
