`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:14 11/14/2023 
// Design Name: 
// Module Name:    M_DM 
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
module M_DM(
	 input clk,
    input rst,
    input M_WE,
    input [31:0] M_adress,
    input [31:0] M_Wdata,
    output [31:0] M_Rdata
    );
	 reg [31:0] datas [8191:0];
	 wire [11:0] nadress;
	always @(posedge clk ) begin
		if(rst) begin :name
			integer i;
			for(i=0;i<8192;i=i+1) begin
				datas[i]<=32'h00000000;
			end
		end
		else begin
			
			if(M_WE) begin
				datas[nadress]=M_Wdata;
			end
		end
	end
	assign nadress=M_adress[13:2];
	assign M_Rdata=datas[nadress];
endmodule
