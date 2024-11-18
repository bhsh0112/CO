module top_module (
    input clk,
    input areset,
    input x,
    output z
); 
 
    parameter A = 3'b001;
    parameter B = 3'b010;
    parameter C = 3'b100;
 
    reg [2:0] state, next_state;
    
  
 
    always @ ( posedge clk or posedge areset ) begin
        if ( areset )
            state <= A;
        else
            state <= next_state;
    end
 
   always @(*) begin
		case ( state )
			A: begin
				next_state = x? B: A;
				end
            B: begin
				next_state = x? C: B;
				end
			C: begin
				next_state = x? C: B;
			end
			default: begin
				next_state = A;
			end
		endcase
	end
 
assign z = state==B;
 
endmodule