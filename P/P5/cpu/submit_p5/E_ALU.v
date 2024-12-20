`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:45:40 11/14/2023 
// Design Name: 
// Module Name:    ALU 
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
`define ADD 3'b000
`define SUB 3'b001
`define OR 3'b010
`define LUI 3'b011
`define GTB 3'b100
module E_ALU(
    input [31:0] E_data1,
    input [31:0] E_data2,
    input [2:0] E_op,
    output [31:0] E_ans
    );
	assign E_ans=(E_op==`ADD)?E_data1+E_data2:
									(E_op==`SUB)?E_data1-E_data2:
									(E_op==`OR)?E_data1|E_data2:
									(E_op==`LUI)?E_data2<<6'd16:
									(E_op==`GTB)?count:
									E_data1+E_data2;
	reg [31:0] count;
	always @(*) begin:name
		integer i;
		count=1'b0;
		for(i=0;i<32;i=i+1) begin
			if(E_data1[i]==1'b1&&E_data2[i]==1'b0) begin
				count=count+32'b1;
			end
		end
	end

endmodule
