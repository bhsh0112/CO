`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:20 10/10/2023 
// Design Name: 
// Module Name:    splitter 
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
module splitter(
    input [31:0] A,
    input [7:0] O1,
    input [7:0] O2,
    input [7:0] O3,
    input [7:0] O4
    );
	assign O1[7:0]=A[31:24];
	assign O2[7:0]=A[23:16];
	assign O3[7:0]=A[15:8];
	assign O4[7:0]=A[7:0];
endmodule
