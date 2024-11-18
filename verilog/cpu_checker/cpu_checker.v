`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:10:51 09/06/2023 
// Design Name: 
// Module Name:    cpu_checker 
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
module cpu_checker(
    input clk,
    input reset,
    input [7:0] char,
    output [1:0] format_type
    );
	reg [1:0] status=2'b00;//00不满足，01寄存器，10数据存储器，11两者都满足
	reg [3:0] num=4'b0001;
	reg [3:0] goal_num=4'b0100;//为0时可以是十进制数，为9时可以是十进制也可以是十六进制
	reg [3:0] step=2'd01;
	reg end_s=1'b0;
	reg sig_3=1'b0;
	reg sig_8=1'b0;
	
	wire is_h_digit=((char>="0"&&char<="9")||(char>="a"&&char<="f"))?1'b1:1'b0;
	wire is_d_digit=(char>="0"&&char<="9")?1'b1:1'b0;
	
	assign format_type=(end_s==1'b1)?status:2'b00;
	
	always @(posedge clk) begin
		if(reset==1'b1) begin
			status<=2'b00;
			num<=4'b0001;
			goal_num<=4'b0100;
			step<=2'd01;
			end_s<=1'b0;
			sig_3<=1'b0;
			sig_8<=1'b0;
			
		end
		else if(char==" ") begin
		
		end
		else begin
			if(step==2'd10&&char=="#") begin//读到最后
				end_s<=1'b1;
				step<=1'd1;
			end
			//step1
			else if(step==1'd1&&char=="^")begin
				step<=step+1'd1;
				status=2'b11;
			end
			//step2
			else if(step==1'd2) begin
				//不是十进制数判断是否是@
				if(is_d_digit==1'b0)begin
					//若是继续
					if(char=="@") begin
						step<=1'd4;
						sig_3<=1'b1;
					end
					//若不是从头来
					else begin
						status<=2'b00;
						step<=1'd1;
						num<=1'd1;
						end_s<=1'b0;
					end
				end
				//是十进制数
				else begin
					//数量+1
					num<=num+1'd1;
					//到4位了自动进下一步
					if(num==1'd5) begin
						step<=step+1'd1;
					end
				end
			end
			//step3
			else if(step==1'd3) begin
				//如果之前没读过@则这里读并判断
				if(sig_3==1'b0&&char=="@") begin
					step<=step+1'd1;
				end
				//否则从头来————如果读过@则直接进入step4不进入此步骤
				else begin
					status<=2'b00;
					step<=1'd1;
					end_s<=1'b0;
				end
			end
			//step4
			else if(step==1'd4) begin
				if(is_h_digit==1'b1) begin
					num<=num+1'd1;
					//如果够8位了直接进下一步
					if(num==1'd9) begin
						step<=step+1'd1;
						num<=1'd1;
					end
				end
				//不是十六进制数直接从头来
				else begin
					status<=2'b00;
					step<=1'd1;
					num<=1'd1;
					end_s<=1'b0;
				end
			end
			//step5
			else if(step==1'd5&&char==":") begin
				step<=step+1'd1;
			end
			//step6
			else if(step==1'd6) begin
				//是￥则只能是寄存器
				if(char=="$") begin
					step<=step+1'd1;
					status=2'b01;
					goal_num=1'd8;
				end
				//是*则只能是数据存储器
				else if(char=="*") begin
					step<=step+1'd1;
					status=2'b10;
					goal_num=1'd0;
				end
				//两者都不是从头来
				else begin
					status<=2'b00;
					step<=1'd1;
					end_s<=1'b0;
				end
			end
			//step7
			else if(step==1'd7) begin
					if(status==2'b01) begin
						if(is_d_digit==1) begin
							num<=num+1'd1;
							//到了4位直接进下一步
							if(num==1'd5) begin
								step<=step+1'd1;
								num<=1'd1;
							end
						end
						//是空格进下一步
						else if(char==" ") begin
							sig_8<=1'b0;
							step<=step+1'd1;
							num<=1'd1;
						end
						//是<标记一下进下一步
						else if(char =="<") begin
							sig_8<=1'b1;
							step<=step+1'd1;
							num<=1'd1;
						end
						//从头来
						else begin
							status<=2'b00;
							step<=1'd1;
							num<=1'd1;
							end_s<=1'b0;
						end
					end
					//这里status只能是01或10
					else begin
							if(is_h_digit==1'b1) begin
								num<=num+1;
								//到8位进下一步
								if(num==1'd9) begin
									step<=step+1;
								end
							end
							else begin
								status<=2'b00;
								step<=1'd1;
								num<=1'd1;
							end
							
						end
				end
				//step8
				else if(step==1'd8) begin
					//没读到过<则这里读
					if(sig_8==1'b0&&char=="<") begin
						sig_8<=1'b1;
					end
					//读到过<若又读到=则进下一步
					else if(sig_8==1'b1&&char=="=") begin
						step<=step+1'd1;
					end
					//从头来
					else begin
								status<=2'b00;
								step<=1'd1;
								num<=1'd1;
								end_s<=1'b0;
					end
				end
				//step9
				else if(step==1'd9&&is_h_digit==1'b1) begin
					num<=num+1'd1;
					if(num==1'd9) begin
						step<=step+1;
					end
				end
				else begin
							status<=2'b00;
							step<=1'd1;
							num<=1'd1;
							end_s<=1'b0;
				end
			//更新num(setp已加)
			/*if(step==3'b100) begin
				goal_num<=1'd8;
			end
			else if(step==1'd6) begin
				if(status==2'b01) begin 
					goal_num<=1'd0;
				end
				else if(status==2'b10) begin
					goal_num<=1'd8;
				end
				else if(status==2'b11) begin
					goal_num<=1'd9;
				end
			end*/
		end
	end
	
endmodule
