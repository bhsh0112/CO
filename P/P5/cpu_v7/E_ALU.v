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
`define SWC 3'b100

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
									(E_op==`SWC)?tmp_ans:
									E_data1+E_data2;
	
	reg [31:0] tmp_ans;
	reg [4:0] s;
	always @(*) begin
		s=E_data2[4:0];
		if(s==5'b0) begin
			tmp_ans=E_data1;
		end
		else if(s[0]==1'b0) begin:name
			integer i;
			for(i=0;i<32;i=i+1)begin
				if(i<32-s) tmp_ans[i]=E_data1[i+s];
				else tmp_ans[i]=E_data1[i+s-32];
			end
		end
		else if(s[0]==1'b1) begin:name2
			integer i;
			for(i=0;i<32;i=i+1)begin
				if(i<s) tmp_ans[i]=E_data1[i+32-s];
				else tmp_ans[i]=E_data1[i-s];
			end
		end
	end

endmodule
