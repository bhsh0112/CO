`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:59:15 09/05/2023 
// Design Name: 
// Module Name:    id_fsm 
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
module id_fsm(
    input [7:0] char,
    input clk,
    output reg out
    );
	 reg pre_is_alpha=1'b0;
	 reg pre_is_one=1'b0;
	 always @(posedge clk) begin
		if(char>=8'd48 && char<=8'd57) begin
			if(pre_is_alpha==1'b1||pre_is_one==1'b1) begin
				out<=1'b1;
				pre_is_one<=1'b1;
			end
			else begin
				out<=1'b0;
			end
		end
		else if((char>=8'd65&&char<=8'd90)||(char>=8'd97&&char<=8'd122)) begin
			out<=1'b0;
			pre_is_alpha<=1'b1;
			pre_is_one<=1'b0;
			//if(pre_is_alpha==0) begin
				//pre_is_alpha<=1'b1;
				//pre_is_one<=1'b0;
			//end
			//else if(pre_is_one==1'b1) begin
				//pre_is_alpha<=1'b1;
				//pre_is_one<=1'b0;
			//end
			//else begin
				//pre_is_alpha<=1'b1;
			//end
		end
		else begin
			out<=1'b0;
			pre_is_alpha<=1'b0;
			pre_is_one<=1'b0;
		end
	 end


endmodule
