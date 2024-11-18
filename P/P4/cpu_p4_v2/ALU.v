`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:53 10/31/2023 
// Design Name: 
// Module Name:    ALU 
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
`define ADD 3'b000
`define SUB 3'b001
`define OR 3'b010
`define LUI 3'b011
`define SLLV 3'b100
module ALU(
    input [31:0] data1,
    input [31:0] data2,
    input [2:0] op,
    output [31:0] ans,
    output zero,
	 output bgez
    );
	 assign zero=(data1==data2)?1'b1:1'b0;
	assign ans=(op==`ADD)?data1+data2:
									(op==`SUB)?data1-data2:
									(op==`OR)?data1|data2:
									(op==`LUI)?data2<<6'd16:
									(op==`SLLV)?data2<<data1:
									data1+data2;

	assign bgez=(data1[31]==1'b0)?1'b1:1'b0;
endmodule
