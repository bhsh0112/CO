`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:24:04 11/03/2023 
// Design Name: 
// Module Name:    MUX_Wdata_3_1 
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
module MUX_Wdata_3_1(
    input [31:0] ans,
    input [31:0] Rdata,
    input [31:0] adder,
    input [1:0] s_Wdata,
    output [31:0] Wdata
    );
	assign Wdata=(s_Wdata==2'b00)?ans
											:(s_Wdata==2'b01)?Rdata
											:(s_Wdata==2'b10)?adder
											:ans;

endmodule
