`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:44:52 11/14/2023 
// Design Name: 
// Module Name:    F_D_register 
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
module F_D_register(
    input clk,
	 input rst,
    input [31:0] F_instruction,
    input [31:0] F_adder,
	 input [31:0] F_pc,
	 input F_rst,
	 input F_is_delay,
	 input stall,
	 input M_REQ,
	 input D_is_eret,
	 input [4:0] F_ExcCode,
    output reg [31:0] D_instruction,
    output reg [31:0] D_adder,
	 output reg [31:0] D_pc,
	 output reg D_rst,
	 output reg D_is_delay,
	 output reg [4:0] D_old_ExcCode
    );
	always @(posedge clk) begin
			if(rst||M_REQ) begin
				D_instruction<=32'b0;
				D_adder<=32'b0;
				D_pc<=32'b0;
				D_rst<=1'b0;
				D_is_delay<=1'b0;
				D_old_ExcCode<=5'b0;
			end
			else if(stall)begin
			end
			else if(D_is_eret)begin
				D_instruction<=32'b0;
				D_adder<=32'b0;
				D_pc<=32'b0;
				D_rst<=1'b0;
				D_is_delay<=1'b0;
				D_old_ExcCode<=5'b0;
			end
			else begin
				D_instruction<=F_instruction;
				D_adder<=F_adder;
				D_pc<=F_pc;
				D_rst<=F_rst;
				D_is_delay<=F_is_delay;
				D_old_ExcCode<=F_ExcCode;
			end
	end

endmodule

