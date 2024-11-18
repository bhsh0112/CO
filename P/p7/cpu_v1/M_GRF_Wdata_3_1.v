`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:03 11/18/2023 
// Design Name: 
// Module Name:    M_GRF_Wdata_3_1 
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
`define M_ANS 3'b000
`define M_RDATA 3'b001
`define M_ADDER 3'b010
`define M_HL 3'b011
`define M_RDATA2 3'b100
`define M_CP0 3'b101
module M_GRF_Wdata_3_1(
    input [31:0] M_ans,
    input [31:0] M_Rdata,
    input [31:0] M_adder,
	 input [31:0] M_HL_data,
	 input [31:0] M_Rdata2,
	 input [31:0] M_CP0_Rdata,
    input [2:0] s_M_GRF_Wdata,
	 input M_is_jal,
    output [31:0] M_GRF_Wdata
    );

	assign M_GRF_Wdata=(s_M_GRF_Wdata==`M_ANS)?M_ans:
											(s_M_GRF_Wdata==`M_RDATA)?M_Rdata:
											(s_M_GRF_Wdata==`M_ADDER)?M_adder+32'd4:
											(s_M_GRF_Wdata==`M_HL)?M_HL_data:
											(s_M_GRF_Wdata==`M_RDATA2)?M_Rdata2:
											(s_M_GRF_Wdata==`M_CP0)?M_CP0_Rdata:
											M_ans;

endmodule
