module pre_fetch (input logic clk, reset, flush,inst_pc,fetch_pc  valid, misalign_fetch, input logic [31:0] inst_in, output logic [31:0] inst_out, inst_pc_out, output logic inst_request);

    logic [31:0] buffer_1, buffer_2;
  

    typedef enum logic[1:0] {s0 = 2'b00, s1= 2'b01, s2=2'b10} states;
    states current_state, next_state;

    always_comb begin       //      this is the next state generation block
    next_state =s0;
    case (current_state)
    s0  :  begin            //      the reset stage, the buffers are reset and in this stage we send a request for the first inst
           
            if (inst_pc) next_state=s2;
            else next_state=s1;

            end

    s1  : begin             //      the first buffer filling state , in this state, we wait for the buffer to be filled after which we shift to the second buffer. We can call the second inst but only after the valid signal is asserrted
                if (flush) next_state=s0;
                else begin
                    if (~valid) next_state = s1;
                    else if (valid & ~inst_pc) next_state =s2;
                end         
            end

    s2  : begin             //      the second buffer handler, in this state we wait for the second buffer the be filled after which we jump back to the first buffer and refill it with the third inst. we can call for fetch of the third inst only after the valid signal is asserted
            if (flush)  next_state =s0;
            else begin
                if (valid & inst_pc) next_state =s1;
                else next_state =s2;
            end
    end

    endcase
    end

    always_comb begin           // this is the output instruction from the buffers
        inst_out=32'h0000_0033;         //change this afterwards
        case (current_state)
            s0  :   inst_out = 32'h0000_0013;

            s1  :   begin
                    if (misalign_fetch) inst_out = buffer_2;
                    else inst_out = buffer_1; 
                end

            s2  :   begin
                    if (misalign_fetch)inst_out=buffer_1;
                    else inst_out = buffer_2;  
            end


        endcase
    end



endmodule