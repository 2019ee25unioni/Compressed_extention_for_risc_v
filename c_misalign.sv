module c_misalign (
    input   logic           clk, 
    input   logic           reset, 

    input   logic           sel_for_branch,
    input   logic           i_cache_valid,              // this is the type defined in cache difines, 
    input   logic   [31:0]  inst_in,                    // it includes an acknowledged and the instruction
    input   logic   [31:0]  pc_in, 
    

    output  logic           stall_pc,
    output  logic           pc_misaligned_o,
    output  logic           i_cache_request,            // this is a the data type elements defined for cache
    output  logic           i_cache_req_kill,           //  it is made of a request, resquest_kill, flush_cache, 
    output  logic           i_cache_flush,              //  address for the instruction
    output  logic   [31:0]  pc_out,                     //
    output  logic   [31:0]  inst_out
);

    logic [15:0] upper_16;
    logic is_missaligned;
    typedef enum logic[1:0] {s0 = 2'b00, s1= 2'b01, s2=2'b10} states;
    states current_state, next_state;

    always_comb begin // missallignment check
        if((inst_in[17:16] == 2'b11) &  (inst_in[1:0] != 2'b11))begin
             is_missaligned =1'b1;
        end
        else is_missaligned =1'b0;
    end

    always_ff @( posedge clk ) begin // a register that hold the upper 16 bits of the previous instruction that will be concatinated with the current instruction and sent forwards
        if (reset) upper_16 <=16'b0;
        else begin
        if (current_state != s0) upper_16 <=upper_16;
        else if (is_missaligned & (current_state == s0)) upper_16<= inst_in[31:16];
        end
    end


    always_ff @( posedge clk ) begin //the fsm's flipflop
        if (reset) current_state<=s0;
        else current_state<=next_state;
    end


    always_comb begin  // the fsm's combinations states and outputs of the module
        stall_pc = 1'b0;
        pc_out=pc_in;
        inst_out=inst_in;
        pc_misaligned_o =1'b0;
        i_cache_flush=1'b0;
        i_cache_req_kill=1'b0;
        i_cache_request=1'b0;

        case(current_state)
        s0 : begin // checking for missalligned instruction
                pc_out=pc_in;
                inst_out=inst_in;
                stall_pc=1'b0;
                pc_misaligned_o =1'b0;
                
                if (is_missaligned) next_state = s1;
                else begin 
                    next_state =s0;
                end
        end
        s1 : begin //missalligned confirmed now fetch the next instruction, while feeding a nop thorugh the pipeline
            pc_out = pc_in+32'd2;
            inst_out =32'h0000_0013;
            stall_pc =1'b1;
            pc_misaligned_o =1'b1;
            i_cache_req_kill =1'b1;     // send a kill request to any previous fetch
            i_cache_request =1'b1;      // make a request simultanously for the next instruction
            if (sel_for_branch) next_state = s0;  // if a brach or jump occurs, priotize the jump. thus resetting the realligner
            else if (i_cache_valid) next_state =s2;    //if a valid signal is recieved from cache, then jump to next state
            else next_state= s1;        

        end
        s2 : begin  // instruction fetched and concatinated, turn off the stall signal and keep the pc as it is
            inst_out = {{inst_in[15:0]}, {upper_16}};
            pc_out = pc_in; 
            pc_misaligned_o =1'b1;
            stall_pc = 1'b0;
            i_cache_req_kill=1'b0;
            i_cache_request=1'b0;
            next_state =s0;
        end

        default next_state =s0;
        endcase
    end
endmodule
