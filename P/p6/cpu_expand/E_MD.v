`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:32 11/21/2023 
// Design Name: 
// Module Name:    E_MD 
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
`define R 6'b000000//special
`define MADD 6'b011100

`define MULT_FUN 6'b011000//funct
`define DIV_FUN 6'b011010
`define MULTU_FUN 6'b011001
`define DIVU_FUN 6'b011011
`define MFHI_FUN 6'b010000
`define MFLO_FUN 6'b010010
`define MTHI_FUN 6'b010001
`define MTLO_FUN 6'b010011
`define MADD_FUN 6'b000000
`define MSUB_FUN 6'b000100
module E_MD(
	input clk,
	input rst,
	input [31:0] E_instruction,
	input [31:0] E_data1,
	input [31:0] E_data2,
	output [31:0] E_HL_data,
	output E_MD_stall
    );
	 
	wire [5:0] special;
	wire [5:0] funct;
	assign special=E_instruction[31:26];
	assign funct=E_instruction[5:0];
	
	 wire mult,div,multu,divu,mfhi,mflo,mthi,mtlo,madd,msub;
	 assign mult=(special==`R&&funct==`MULT_FUN);
	 assign div=(special==`R&&funct==`DIV_FUN);
	 assign multu=(special==`R&&funct==`MULTU_FUN);
	 assign divu=(special==`R&&funct==`DIVU_FUN);
	 assign mfhi=(special==`R&&funct==`MFHI_FUN);
	 assign mflo=(special==`R&&funct==`MFLO_FUN);
	 assign mthi=(special==`R&&funct==`MTHI_FUN);
	 assign mtlo=(special==`R&&funct==`MTLO_FUN);
	 assign madd=(special==`MADD&&funct==`MADD_FUN);
	 assign msub=(special==`MADD&&funct==`MSUB_FUN);
	 
	 reg [3:0] busy;
	 reg [31:0] hi;
	 reg [31:0] lo;
	 reg [31:0] HI;
	reg [31:0] LO;
	 always @(posedge clk) begin
		if(rst) begin
			hi<=32'b0;
			lo<=32'b0;
			HI<=32'b0;
			LO<=32'b0;
			busy<=4'b0;
		end
		else begin
			if(busy==4'b0) begin
				if(mult) begin
					{hi,lo}<=$signed(E_data1)*$signed(E_data2);
					busy<=4'd5;
				end
				else if(div)begin
					lo<=$signed(E_data1)/$signed(E_data2);
					hi<=$signed(E_data1)%$signed(E_data2);
					busy<=4'd10;
				end
				else if(multu) begin
					{hi,lo}<=E_data1*E_data2;
					busy<=4'd5;
				end
				else if(divu) begin
					lo<=E_data1/E_data2;
					hi<=E_data1%E_data2;
					busy<=4'd10;
				end
				else if(madd) begin
					{hi,lo}=$signed({HI,LO})+$signed(E_data1)*$signed(E_data2);
					busy<=4'd5;
				end
				else if(msub) begin
					{hi,lo}=$signed({HI,LO})-$signed(E_data1)*$signed(E_data2);
					busy<=4'd5;
				end
				else if(mthi) begin
					HI<=E_data1;
				end
				else if(mtlo) begin
					LO<=E_data1;
				end
			end
			else begin
				busy<=busy-4'b1;
				if(busy==4'b1)begin
					HI<=hi;
					LO<=lo;
				end
			end
		end
	 end
	 
	 assign E_MD_stall=((busy!=4'b0)||mult||multu||div||divu||madd||msub);
	 
	 assign E_HL_data=(mfhi)?HI:
														(mflo)?LO:
														32'b0;
	 


endmodule
