`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:51:17 11/17/2023 
// Design Name: 
// Module Name:    M_MUX_Rdata2_3_1 
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
`define ODATA 2'b00
`define EDATA 2'b01
`define MDATA 2'b10
`define WDATA 2'b11
module M_MUX_Rdata2_3_1(
    input [1:0] s_M_rt_data,
    input [31:0] M_Rdata2,
    input [31:0] W_GRF_Wdata,
    output [31:0] M_FW_Rdata2
    );
	assign M_FW_Rdata2=(s_M_rt_data==`ODATA)?M_Rdata2:
																(s_M_rt_data==`WDATA)?W_GRF_Wdata:
																M_Rdata2;

endmodule
