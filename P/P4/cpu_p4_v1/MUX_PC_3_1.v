`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:43:00 11/04/2023 
// Design Name: 
// Module Name:    MUX_PC_3_1 
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
module MUX_PC_3_1(
    input [31:0] pc,
	 input [25:0] imm26,
	 input [31:0] Rdata1,
	 input [15:0] imm16,
    input brunch,
    input equal,
    input jump,
    input is_jr,
    output reg [31:0] adder,
    output [31:0] npc
    );
	 
	reg [31:0] brunch_ans;
	reg [31:0] jump_ans;
	reg [31:0] adress_al;
	reg [31:0] EXT;
	always @ (*)begin 
		EXT={{16{imm16[15]}},imm16};
		adress_al={{pc[31:28]},imm26,2'b00};
		adder=pc+32'h4;
		brunch_ans=(brunch && equal )?adder+(EXT<<2'd2):adder;
		jump_ans=(jump)?adress_al:brunch_ans;
	end

	assign npc=(is_jr)?Rdata1:jump_ans;
	
endmodule
