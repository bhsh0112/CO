`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:57:18 11/14/2023 
// Design Name: 
// Module Name:    D_CMP 
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
`define BEQ_CMP 2'b00
`define BGEZAL_CMP 2'b01
module D_CMP(
    input [31:0] D_Rdata1,
    input [31:0] D_Rdata2,
	 input [1:0] s_D_cmp,
    output D_equal
    );
	 wire beq_cmp,bgezal_cmp;
	 
	 assign beq_cmp=(D_Rdata1==D_Rdata2);
	assign bgezal_cmp=(D_Rdata1[31]==1'b0);

	assign D_equal=(s_D_cmp==`BEQ_CMP)?beq_cmp:
													(s_D_cmp==`BGEZAL_CMP)?bgezal_cmp:
													beq_cmp;

endmodule
