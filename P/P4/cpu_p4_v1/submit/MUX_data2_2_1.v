`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:53:41 11/04/2023 
// Design Name: 
// Module Name:    MUX_data2_2_1 
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
module MUX_data2_2_1(
    input [31:0] EXT_ans,
    input [31:0] Rdata2,
    input EXT_s,
    output [31:0] data2
    );
	assign data2=(EXT_s)?EXT_ans:Rdata2;

endmodule
