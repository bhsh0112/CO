`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:31:08 11/15/2023 
// Design Name: 
// Module Name:    W_MUX_Wreg_3_1 
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
`define RD 2'b00
`define RT 2'b01
`define RA 2'b10
module W_MUX_Wreg_3_1(
    input [1:0] s_W_Wreg,
    input [4:0] W_rd,
    input [4:0] W_rt,
    output [4:0] W_Wreg
    );
	assign W_Wreg=(s_W_Wreg==`RD)?W_rd:
												(s_W_Wreg==`RT)?W_rt:
												(s_W_Wreg==`RA)?5'b11111:
												W_rd;

endmodule
