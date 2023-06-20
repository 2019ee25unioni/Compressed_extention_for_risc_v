module missalign_access (
    input logic clk, reset, 
    input logic [31:0] pc_in, inst_in,
    input logic ral_jmp, 
    output logic [31 : 0] pc_out , inst_out, 
    output logic stall_pc 
);
    typedef enum logic[1:0] {s0 = 2'b00, s1= 2'b01, s2=2'b10} states;
    states current_state, next_state;
    
    
    logic pc_is_2, pc4_sel, conc_sel , nop_sel, is_missaligned;
    logic [15:0] lower_16;
    logic [31:0] full_32Concat;

    

    assign pc_is_2 = pc_in[1];
    assign full_32Concat = {{inst_in[15:0]}, {lower_16}};




    always_ff @(posedge clk ) begin // a regester in which we store the upper 16 bit of the maybe missalligned accessed instruction
        if (reset) lower_16 <= 16'b0; 
        else  begin 
            if (pc_is_2 & is_missaligned) lower_16 <= inst_in[31:16];   // if we have a pc+2 save the upper 16 bits of the instruction to a register 
            else if ( ~pc_is_2 & is_missaligned) lower_16<=lower_16;    // and if we are at pc+4 but missalligned, just save ther previous lower_16 bits
            else lower_16<=inst_in[15:0];                               // else just take the lower 16 bits of the instrucion and pass it along
            end
    end

    always_ff @(posedge clk) begin // this is a register in which we ask if the upper 16 bits is not a compressed intertuciton 
        if (reset) is_missaligned =1'b0;
        else begin 
        if (pc_is_2) begin 
            if (inst_in[17:16] == 2'b11) begin 
                is_missaligned =1'b1;
            end
            else is_missaligned =1'b0;
            
            end
        end
    end



    always_comb begin // instruction outputs
    if (nop_sel) begin
        inst_out = 32'b0000_0013;
    end
    else begin
        if (conc_sel) inst_out = full_32Concat ;
        else inst_out = inst_in;
    end
        
    end

    always_comb begin // address output

        if(pc4_sel) pc_out = pc_in;
        else pc_out=pc_in+4;
    end

// below this is the fsm which only checks for the pc is 2 halts the pc to the instruction mem. it then waits till ral_jump returns false and then jumps to s2


    always_comb begin // this block generates the next state of the fsm
         if (reset) begin 
            current_state=s0;
            inst_out=32'b0;
            pc_out32'b0;
         end
         else   begin  
        if (current_state == s0) begin
            if (~pc_is_2) next_state = current_state;
            else next_state=s1;


            end
        if (current_state == s1) begin
            if (pc_is_2)begin
                if (ral_jmp) next_state= current_state;
                else next_state = s2;
            end

            else next_state = s0;

            end
        
        if (current_state == s2) begin
            if(pc_is_2) next_state = s1;
            else next_state = s0;
        end

         end 
    end



    always_ff @( posedge clk  ) begin //the next state flip flop
            if (reset) current_state <=s0;
            else current_state <=next_state;
    end

    always_comb begin // this is the output block of the fsm
        if (current_state == s1) stall_pc =1'b1;
        else stall_pc =1'b0;

        if ((current_state == s1)& pc_is_2 & ~ral_jmp) pc4_sel =1'b1;
        else pc4_sel =1'b0;

        if (current_state == s1 ) nop_sel =1'b1;
        else nop_sel =1'b0;

        if (current_state == s2) conc_sel =1'b1;
        else conc_sel =1'b0;
    end


endmodule