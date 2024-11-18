`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:32:44 12/05/2023 
// Design Name: 
// Module Name:    CP0_controller 
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
`define R 6'b000000
`define BEQ 6'b000100
`define JAL 6'b000011
`define BNE 6'b000101

`define JR_FUN 6'b001000
module CP0_controller(
	input [31:0] D_instruction,
	output F_BD
    );
	 wire [5:0] special;
	 wire [5:0] funct;
	 assign special=instruction[31:26];
	 assign funct=instruction[5:0];
	 
	 wire beq,bne,jal,jr;
	  assign beq=(special==`BEQ);
	 assign jal=(special==`JAL);
	 assign jr=(special==`R&&funct==`JR_FUN);
	 assign bne=(special==`BNE);
	 
	 assign F_BD=beq||jal||jr||bne;


endmodule
