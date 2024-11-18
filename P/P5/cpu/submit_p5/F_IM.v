`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:13:30 11/14/2023 
// Design Name: 
// Module Name:    F_IM 
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
 module F_IM(
    input [31:0] F_pc,
    output [31:0] F_instruction
    );
	reg [31:0] ins [8191:0];
	initial begin
	$readmemh("code.txt", ins, 0, 8191);
	end
	wire [11:0] new_pc;
	wire [31:0] n_pc;
	//always @(*) begin
		assign n_pc=F_pc-32'h3000;
		assign new_pc=n_pc[13:2];
		assign F_instruction=ins[new_pc];
	//end

endmodule