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
`define SLT 3'b100
`define SLTU 3'b101
`define AND 3'b110
module E_ALU(
    input [31:0] E_data1,
    input [31:0] E_data2,
    input [2:0] E_op,
	 input E_is_m,
    output [31:0] E_ans,
	 output E_overflow,
	 output E_overflow_m
    );
	assign E_ans=(E_op==`ADD)?E_data1+E_data2:
											(E_op==`SUB)?E_data1-E_data2:
											(E_op==`OR)?E_data1|E_data2:
											(E_op==`LUI)?E_data2<<6'd16:
											(E_op==`SLT)?{31'b0,($signed(E_data1)<$signed(E_data2))}:
											(E_op==`SLTU)?{31'b0,({1'b0,E_data1}<{1'b0,E_data2})}:
											(E_op==`AND)?E_data1&E_data2:
											E_data1+E_data2;
	assign E_overflow=(E_op==`ADD&&!E_is_m&&ov_add)||(E_op==`SUB&&ov_sub);
	assign E_overflow_m=(E_op==`ADD&&E_is_m&&ov_add);
	
	reg ov_add,ov_sub;
	reg [32:0] tmp_add;
	reg [32:0] tmp_sub;
	always @(*) begin
		tmp_add={E_data1[31],E_data1}+{E_data2[31],E_data2};
		ov_add=(tmp_add[32]!=tmp_add[31]);
		tmp_sub={E_data1[31],E_data1}-{E_data2[31],E_data2};
		ov_sub=(tmp_sub[32]!=tmp_sub[31]);
	end

endmodule
