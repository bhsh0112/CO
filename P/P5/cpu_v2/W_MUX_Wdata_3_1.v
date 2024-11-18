`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:45:05 11/14/2023 
// Design Name: 
// Module Name:    W_MUX_Wdata_3_1 
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
`define W_ANS 2'b00
`define W_RDATA 2'b01
`define W_ADDER 2'b10
module W_MUX_Wdata_3_1(
    input [31:0] W_ans,
    input [31:0] W_Rdata,
    input [31:0] W_adder,
    input [1:0] s_W_Wdata,
    output [31:0] W_Wdata
    );
	
	assign W_Wdata=(s_W_Wdata==`W_ANS)?W_ans:
											(s_W_Wdata==`W_RDATA)?W_Rdata:
											(s_W_Wdata==`W_ADDER)?W_adder+32'd4:
											W_ans;

endmodule
