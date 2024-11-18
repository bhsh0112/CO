`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:17:29 11/17/2022 
// Design Name: 
// Module Name:    CMP 
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
module D_CMP(
    input [31:0] A,
    input [31:0] B,
	 input [2:0] BranchType,
    output OK
    );
    assign OK = (BranchType == 3'd1 && A == B); 
							
endmodule
