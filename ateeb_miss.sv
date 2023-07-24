module ateeb_miss (input logic clk, reset,input logic [31:0] inst, output logic is_compressed, next_compressed, output logic [31:0] secondary_inst);
    
    logic [15:0] store_comp_comp;


    always_comb begin 
        case (inst[1:0])
        2'b00 : is_compressed =1'b1; 
        2'b01 : is_compressed =1'b1;
        2'b10 : is_compressed =1'b1;
        2'b11 : is_compressed =1'b0;
        endcase 
    end

    always_comb begin 
        if (~is_compressed) next_compressed=1'b0;
        else if (is_compressed)begin 
            case (inst[17:16])
            2'b00 : next_compressed =1'b1; 
            2'b01 : next_compressed =1'b1;
            2'b10 : next_compressed =1'b1;
            2'b11 : next_compressed =1'b0;
        endcase
        end
    end

    always_ff @( negedge clk  ) begin : blockName
        if (reset) store_comp_comp <= 16'b0;
        else if (next_compressed) store_comp_comp<= inst[31:16];
        else store_comp_comp<= 16'b0;
    end

    assign secondary_inst= {{store_comp_comp}, {16'b0}};

endmodule
