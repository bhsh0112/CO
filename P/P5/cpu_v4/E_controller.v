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
`define SWC 6'b101010

`define ADD_FUN 6'b100000 //funct
`define SUB_FUN 6'b100010
`define JR_FUN 6'b001000
`define SWC_FUN 6'b101110

`define ADD_OP 3'b000  //op
`define SUB_OP 3'b001
`define OR_OP 3'b010
`define LUI_OP 3'b011
`define SWC_OP 3'b100

`define DATA2_RDATA2 2'b00//s_E_data2
`define DATA2_EXT 2'b01
`define DATA2_ZERO_EXT 2'b10

`define E_ANS 2'b00//s_E_GRF_Wdata
`define E_RDATA 2'b01
`define E_ADDER 2'b10

module E_controller(
    input [31:0] E_instruction,
	 input E_equal,
    output [15:0] E_imm16,
    output [1:0] s_E_data2,
    output [2:0] E_op,
	 output [1:0] E_T_new,
	 output [4:0] E_Wreg,
	 output E_is_LW,
	 output E_is_SW,
	 output  [1:0] s_E_GRF_Wdata,
	 output E_GRF_WE
    );
	 //judge the type of instruction
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=E_instruction[31:26];
	 assign funct=E_instruction[5:0];
	 
	 wire add,sub,ori,lui,lw,sw,beq,jal,jr,swc;
	 assign add=(special==`R&&funct==`ADD_FUN);
	 assign sub=(special==`R&&funct==`SUB_FUN);
	 assign ori=(special==`ORI);
	 assign lui=(special==`LUI);
	 assign lw=(special==`LW);
	 assign sw=(special==`SW);
	 assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign swc=(special==`SWC&&funct==`SWC_FUN);
	 
	 //special signal for trans
	 assign E_is_SW=sw;
	 assign E_is_LW=lw;
	 
	 
	//imm16
	assign E_imm16=E_instruction[15:0];
	
	//signal for choosing s_E_data2
	assign s_E_data2=(lui||sw||lw)?`DATA2_EXT:
														(ori)?`DATA2_ZERO_EXT:
														`DATA2_RDATA2;
	//assign s_E_data2[1]=(ori)?1'b1:1'b0;
	//assign s_E_data2[0]=(lui||lw||sw)?1'b1:1'b0;
	
	//op for ALU
	assign E_op=(add||lw||sw)?`ADD_OP:
										(sub)?`SUB_OP:
										(ori)?`OR_OP:
										(lui)?`LUI_OP:
										(swc)?`SWC_OP:
										`ADD_OP;
		
	//compute Tnew
	assign E_T_new=(add||sub||ori||lui||swc)?2'b01:
													(lw)?2'b10:
													(sw||beq||jal||jr)?2'b00:
													2'b00;
	
	//Wreg
	wire [4:0] rt;
	wire [4:0] rd;
	assign rt=E_instruction[20:16];
	assign rd=E_instruction[15:11];
	
	assign E_Wreg=(add||sub||swc)?rd:
												(ori||lui||lw)?rt:
												(jal)?5'd31:
												5'b0;
	
//signal for choosing GRF_Wdata	
	assign s_E_GRF_Wdata=(lw)?`E_RDATA:
																		(jal)?`E_ADDER:
																		`E_ANS;
	//assign s_E_GRF_Wdata[1]=(jal)?1'b1:1'b0;
	//assign s_E_GRF_Wdata[0]=(lw)?1'b1:1'b0;
	
	assign E_GRF_WE=(add||sub||ori||lw||jal||lui||swc)?1'b1:1'b0;

endmodule
