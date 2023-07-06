`timescale 1ns/1ns
module c_misalign_tb ();

    logic  reset, sel_for_branch;
    logic [31:0] pc_in, inst_in, inst_out, pc_out;
    logic stall_pc, pc_misaligned_o;

    logic clk =1'b0;
    initial begin
        
        forever begin
        #1 clk<=~clk;    
            
            end
    end

    c_misalign missalligned (clk, reset, sel_for_branch, pc_in, inst_in, stall_pc, pc_misaligned_o, pc_out, inst_out);
    initial begin 
        reset =1'b1;
        #1;
        reset =1'b0;
        #1;

        @(posedge clk) begin 
            sel_for_branch=1'b0;
            pc_in=32'b0;
            inst_in = 32'h006fc104;

        end

        @(stall_pc) begin
            inst_in = 32'h41040040;

        end
        


    end



endmodule