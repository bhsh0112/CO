`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:11:28 10/15/2023 
// Design Name: 
// Module Name:    gray 
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
module gray(
    input Clk,
    input Reset,
    input En,
    output reg [2:0] Output,
    output reg Overflow
	 
    );
	 reg [2:0] Num;
	 always @ (*) begin
	 case(Num)
		3'b000:assign Output=3'b000;
		3'b001:assign Output=3'b001;
		3'b010:assign Output=3'b011;
		3'b011:assign Output=3'b010;
		3'b100:assign Output=3'b110;
		3'b101:assign Output=3'b111;
		3'b110:assign Output=3'b101;
		3'b111:assign Output=3'b100;
		
	endcase
	Output<=3'b000;
	end
	always @ (posedge Clk)
	begin
		if(Reset==1'b1) Num=3'b000;
		else if (En==1'b1)begin
			if(Num==3'b111) begin
				Overflow=1'b1;
				Num=3'b000;
			end
			else begin
				Num=Num+3'b001;
				Overflow=1'b0;
			end
		end
	end

endmodule
