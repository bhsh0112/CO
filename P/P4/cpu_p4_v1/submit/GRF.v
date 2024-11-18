`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:21:49 10/31/2023 
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
module GRF(
    input clk,
    input rst,
	 input [31:0] pc,
    input [4:0] Rreg1,
    input [4:0] Rreg2,
    input [4:0] Wreg,
    input [31:0] Wdata,
    input WE,
    output [31:0] Rdata1,
    output [31:0] Rdata2
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
			if(WE&&Wreg!=5'b0) begin
				regs[Wreg]<=Wdata;
				//$display("@%h: $%d <= %h",pc+32'h3000, Wreg,Wdata);
			end
		end
	end
	assign Rdata1=regs[Rreg1];
	assign Rdata2=regs[Rreg2];

endmodule
