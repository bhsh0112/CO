`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:11 12/18/2023 
// Design Name: 
// Module Name:    E_ExcCoder 
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
module E_ExcCoder(
    input E_overflow,
    input [4:0] E_old_ExcCode,
    output [4:0] E_ExcCode
    );
	 assign E_ExcCode=(E_old_ExcCode!=5'b0)?E_old_ExcCode:
															(E_overflow)?5'd12:
															5'd0;


endmodule
