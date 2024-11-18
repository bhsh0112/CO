`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:21:08 12/18/2023 
// Design Name: 
// Module Name:    F_ExcCoder 
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
module F_ExcCoder(
    input [31:0] F_pc,
    output [4:0] F_ExcCode
    );
	assign F_ExcCode=((F_pc[1:0]!=2'b0||F_pc<32'h3000||F_pc>32'h6ffc)&&(F_pc!=32'b0))?5'd4:
														 5'd0;

endmodule
