`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:33:30 11/14/2023 
// Design Name: 
// Module Name:    D_controller 
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

`define BEQ_CMP 2'b00

`define JUMP_ADDER 2'b00
`define JUMP_IMM16 2'b01
`define JUMP_IMM26 2'b10
`define JUMP_RDATA1 2'b11

module D_controller(
    input [31:0] D_instruction,
    output [4:0] D_rs,
    output [4:0] D_rt,
    output [15:0] D_imm16,
    output [25:0] D_imm26,
	 output [1:0] s_D_jump,
	 output [1:0] T_use_rs,
	 output [1:0] T_use_rt,
	 output [1:0] s_D_cmp
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=D_instruction[31:26];
	 assign funct=D_instruction[5:0];
	 
	assign D_rs=D_instruction[25:21];
	assign D_rt=D_instruction[20:16];
	assign D_imm16=D_instruction[15:0];
	assign D_imm26=D_instruction[25:0];
	
	//judge the type of instruction
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
	
	//signal for jump
	assign s_D_jump=(beq)?`JUMP_IMM16:
													(jal)?`JUMP_IMM26:
													(jr)?`JUMP_RDATA1:
													`JUMP_ADDER;
	//assign s_D_jump[1]=(jal||jr)?1'b1:1'b0;
	//assign s_D_jump[0]=(beq||jr)?1'b1:1'b0;
	
	//compute tuse
	 assign T_use_rs=(add||sub||ori||lw||sw||swc)?2'b01:
											(beq||jr)?2'b00:
											(lui||jal)?2'b11:
											2'b11;
	 assign T_use_rt=(add||sub||swc)?2'b01:
													(sw)?2'b10:
													(beq)?2'b0:
													(ori||lui||lw||jal||jr)?2'b11:
													2'b11;
											
	//siganl for the way to compare
	assign s_D_cmp=(beq)?`BEQ_CMP:
													`BEQ_CMP;
endmodule
