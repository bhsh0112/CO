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
	 input [3:0] M_data_byteen,
    output [31:0] M_pre_Rdata
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
				if(M_data_byteen[0]) datas[nadress][7:0]<=M_Wdata[7:0];
				if(M_data_byteen[1]) datas[nadress][15:8]<=M_Wdata[15:8];
				if(M_data_byteen[2]) datas[nadress][23:16]<=M_Wdata[23:16];
				if(M_data_byteen[3]) datas[nadress][31:24]<=M_Wdata[31:24];
			end
		end
	end
	assign nadress=M_adress[13:2];
	assign M_pre_Rdata=datas[nadress];
endmodule
