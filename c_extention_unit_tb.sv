`timescale 1ns/1ns
module c_extention_unit_tb();
    logic  reset, pc_in,fetch_compressed,decode_compressed;
    logic [31:0] inst_in, inst_out;

    logic clk =1'b0;
    initial begin
        
        forever begin
        #1 clk<=~clk;    
            
            end
    end


    c_extention_unit c_extend (.clk(clk),.reset(reset),.pc_i(pc_in),.instr_i(inst_in),.fetch_compressed(fetch_compressed),.decode_compressed(decode_compressed),.instr_o(inst_out));
    initial begin
        reset =1'b1;inst_in=32'h0;
            pc_in=1'b0;
        #1;
        reset =1'b0;
        #1;

        @(posedge clk) begin
            inst_in=32'h4104c104;
            pc_in=1'b0;

        end

        @(fetch_compressed) pc_in=1'b1;
        @(posedge clk) pc_in=pc_in;

        @(fetch_compressed) pc_in=1'b0;

        @(posedge clk) begin
            inst_in=32'h44a9c104;
        end
    end


endmodule
