`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:31:40 11/14/2023 
// Design Name: 
// Module Name:    GRF 
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
`define ODATA 3'b000
`define EDATA 3'b001
`define MDATA 3'b010
`define WDATA 3'b011
`define WWDATA 3'b100
module GRF(
    input clk,
    input rst,
	 input [31:0] D_pc,
    input [4:0] D_Rreg1,
    input [4:0] D_Rreg2,
    input [4:0] W_Wreg,
    input [31:0] W_Wdata,
    input W_WE,
	 input [2:0] s_D_rs_data,
	 input [2:0] s_D_rt_data,
    output [31:0] D_Rdata1,
    output [31:0] D_Rdata2
    );
	 reg [31:0] regs [31:0];
	always @(posedge clk ) begin
		
		if (rst) begin:name
			integer i;
			for(i=0;i<32;i=i+1) begin
				regs[i]<=32'h00000000;
			end
		end
		else begin
			if(W_WE&&W_Wreg!=5'b0) begin
				regs[W_Wreg]<=W_Wdata;
				//$display("@%h: $%d <= %h",pc+32'h3000, Wreg,Wdata);
			end
		end
	end
	assign D_Rdata1=regs[D_Rreg1];
	assign D_Rdata2=regs[D_Rreg2];

endmodule
