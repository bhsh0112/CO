`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:19:30 10/31/2023 
// Design Name: 
// Module Name:    DM 
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
module DM(
	 input clk,
    input rst,
	 input [31:0] pc,
    input WE,
    input [31:0] adress,
    input [31:0] Wdata,
    output [31:0] Rdata
    );
	 reg [31:0] datas [8192:0];
	 reg [11:0] nadress;
	always @(posedge clk ) begin
		if(rst) begin :name
			integer i;
			for(i=0;i<8192;i=i+1) begin
				datas[i]<=32'h00000000;
			end
		end
		else begin
			nadress=adress[13:2];
			if(WE) begin
				datas[nadress]=Wdata;
				//$display("@%h: *%h <= %h", pc+32'h3000, adress, Wdata);
			end
			//else begin
				//Rdata<=datas[nadress];
			//end
		end
	end
	assign Rdata=datas[nadress];
endmodule
