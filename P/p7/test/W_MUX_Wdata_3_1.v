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
`define W_ANS 3'b000
`define W_RDATA 3'b001
`define W_ADDER 3'b010
`define W_HL 3'b011
`define W_RDATA2 3'b100
`define W_CP0 3'b101
module W_MUX_Wdata_3_1(
    input [31:0] W_ans,
    input [31:0] W_Rdata,
    input [31:0] W_adder,
	 input [31:0] W_HL_data,
	 input [31:0] W_Rdata2,
	 input [31:0] W_CP0_Rdata,
	 input W_is_jal,
    input [2:0] s_W_Wdata,
    output [31:0] W_Wdata
    );

	assign W_Wdata=(s_W_Wdata==`W_ANS)?W_ans:
											(s_W_Wdata==`W_RDATA)?W_Rdata:
											(s_W_Wdata==`W_ADDER)?W_adder+32'd4:
											(s_W_Wdata==`W_HL)?W_HL_data:
											(s_W_Wdata==`W_RDATA2)?W_Rdata2:
											(s_W_Wdata==`W_CP0)?W_CP0_Rdata:
											W_ans;

endmodule
