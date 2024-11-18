`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:16:41 11/14/2023 
// Design Name: 
// Module Name:    M_controller 
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

`define M_ANS 2'b00//s_M_GRF_Wdata
`define M_RDATA 2'b01
`define M_ADDER 2'b10

module M_controller(
    input [31:0] M_instruction,
	 input M_equal,
    output M_DM_WE,
	 output [1:0] M_T_new,
	 output [4:0] M_Wreg,
	 output [1:0] s_M_GRF_Wdata,
	 output M_is_LW,
	 output M_is_SW,
	 output M_GRF_WE
    );
	 //judeg the type of instruction
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=M_instruction[31:26];
	 assign funct=M_instruction[5:0];
	 
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
	 assign M_is_LW=lw;
	 assign M_is_SW=sw;
	 
	 //DM_WE
	assign M_DM_WE=(sw)?1'b1:1'b0;
	
	//compute Tnew
	assign M_T_new=(add||sub||ori||lui||sw||beq||jal||jr||swc)?2'b00:
													(lw)?2'b01:
													2'b00;
	
	//Wreg	
	wire [4:0] rt;
	wire [4:0] rd;
	assign rt=M_instruction[20:16];
	assign rd=M_instruction[15:11];
	assign M_Wreg=(add||sub||swc)?rd:
												(ori||lui||lw)?rt:
												(jal)?5'd31:
												5'b0;
	
	//signal for choosing GRF_Wdata
	assign s_M_GRF_Wdata=(lw)?`M_RDATA:
																 (jal)?`M_ADDER:
																 `M_ANS;
	//assign s_M_GRF_Wdata[1]=(jal)?1'b1:1'b0;
	//assign s_M_GRF_Wdata[0]=(lw)?1'b1:1'b0;
	
	assign M_GRF_WE=(add||sub||ori||lw||jal||lui||swc)?1'b1:1'b0;
	
endmodule
