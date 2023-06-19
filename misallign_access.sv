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

    

    assign pc_is_2 = inst_in[1];
    assign full_32Concat = {{inst_in[15:0]}, {lower_16}};




    always_ff @( clk ) begin // a regester in which we store the upper 16 bit of the maybe missalligned accessed instruction
        if (reset) lower_16 <= 16'b0; 
        else  begin 
            if (pc_is_2 & is_missaligned) lower_16 <= inst_in[31:16];   // if we have a pc+2 save the upper 16 bits of the instruction to a register 
            else if ( ~pc_is_2 & is_missaligned) lower_16<=lower_16;    // and if we are at pc+4 but missalligned, just save ther previous lower_16 bits
            else lower_16<=inst_in[15:0];                               // else just take the lower 16 bits of the instrucion and pass it along
            end
    end

    always_ff @(clk) begin // this is a register in which we ask if the upper 16 bits is not a compressed intertuciton 
        
    end
endmodule