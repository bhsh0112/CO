`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:11:34 11/17/2022 
// Design Name: 
// Module Name:    IM 
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
module F_IM(
    input [31:0] PC_F,
	 input clear,
    output [31:0] instr_F
    );
    reg [31:0] ROM [4095:0];
	 wire [31:0] temp;
	 initial begin
	    $readmemh("code.txt",ROM);
	 end
	 assign temp = PC_F - 32'h0000_3000;
	 assign instr_F = clear ? 32'h0000_0000 : ROM[temp[31:2]];
endmodule
