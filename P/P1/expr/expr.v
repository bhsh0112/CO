`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:27:21 10/15/2023 
// Design Name: 
// Module Name:    extr 
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
//0-----48
//A------65
//Z------90
//a------97
//z-------122
module expr(
    input clk,
    input clr,
    input [7:0] in,
    output out
    );
	reg [2:0] status=2'b00;
	assign out=(status==2'b01)?1'b1:1'b0;
	always @ (posedge clk or posedge clr)
	begin
		if(clr) begin
			status=2'b00;
			//out=1'b0;
		end
		else begin
			if(status==2'b00) begin
				if(in>=7'd48&&in<=7'd57) begin
					status=2'b01;
					//out=1'b0;
				end
				else if(in=="+"||in=="*") begin
					status=2'b11;
					//out=1'b0;
				end
				else begin
					status=2'b00;
					//out=1'b0;
				end
				
			end
			else if(status==2'b01) begin
				if(in=="+"||in=="*") begin
					status=2'b10;
					//out=1'b0;
				end
				else if(in>=7'd48&&in<=7'd57) begin
					status=2'b11;
					//out=1'b0;
				end
				else begin
					//out=1'b0;
					status=2'b00;
				end
			end
			else if(status==2'b10) begin
				if(in=="+"||in=="*") begin
					status=2'b11;
					//out=1'b0;
				end
				else if(in>=7'd48&&in<=7'd57) begin
					status=2'b01;
					//out=1'b1;
				end
				else begin
					//out=1'b0;
					status=2'b00;
				end
			end
		end
	end

endmodule
