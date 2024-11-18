`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:41:45 11/16/2023 
// Design Name: 
// Module Name:    F_controller 
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
module F_controller(
	input [31:0] F_instruction,
	output [1:0] T_use_rs,
	output [1:0] T_use_rt
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=F_instruction[31:26];
	 assign funct=F_instruction[5:0];
	 
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
	 assign jal=(special==`JAL)?1'b1:1'b0;
	 assign jr=(special==`R&&funct==`JR_FUN)?1'b1:1'b0;
	 

	 assign T_use_rs=(add||sub||ori||lw||sw)?2'b01:
											(beq)?2'b00:
											(lui||jal||jr)?2'b11:
											2'b11;
	 assign T_use_rt=(add||sub)?2'b01:
													(sw)?2'b10:
													(beq)?2'b0:
													(ori||lui||lw||jal||jr)?2'b11:
													2'b11;
											
	
	


endmodule
