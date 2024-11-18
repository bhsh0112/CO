`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:53:42 11/14/2023 
// Design Name: 
// Module Name:    E_MUX_data2_3_1 
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
`define RDATA2 2'b00
`define EXT 2'b01
`define ZERO_EXT 2'b10

module E_MUX_data2_3_1(
	input [31:0] E_Rdata2,
    input [15:0] E_imm16,
    input [1:0] s_E_data2,
	 output [31:0] E_data2
    );
	assign E_data2=(s_E_data2==`RDATA2)?E_Rdata2:
												(s_E_data2==`EXT)?{{16{E_imm16[15]}},E_imm16}:
												(s_E_data2==`ZERO_EXT)?{16'b0,E_imm16}:
												E_Rdata2;

endmodule
