`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:10:31 10/31/2023 
// Design Name: 
// Module Name:    divider 
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
module divider(
    input [31:0] instruction,
    output [5:0] special,
    output [4:0] rs,
    output [4:0] rt,
    output [4:0] rd,
    output [5:0] funct,
    output [15:0] imm16,
    output [25:0] imm26
    );

		assign special=instruction[31:26];
		assign rs=instruction[25:21];
		assign rt=instruction[20:16];
		assign rd=instruction[15:11];
		assign funct=instruction[5:0];
		assign imm16=instruction[15:0];
		assign imm26=instruction[25:0];


endmodule
