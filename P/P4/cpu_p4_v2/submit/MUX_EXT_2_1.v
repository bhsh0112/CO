`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:35:48 11/03/2023 
// Design Name: 
// Module Name:    MUX_EXT_2_1 
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
module MUX_EXT_2_1(
    input [15:0] imm16,
    input zero_EXT_s,
    output [31:0] EXT_ans
    );
	assign EXT_ans=(zero_EXT_s)?{16'h0000,imm16}
												  :{{16{imm16[15]}},imm16};

endmodule
