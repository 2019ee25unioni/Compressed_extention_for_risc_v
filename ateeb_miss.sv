module ateeb_miss (input logic clk, reset,input logic [31:0] inst, output logic is_compressed);
    
    

    always_comb begin 
        case (inst[1:0])
        2'b00 : is_compressed =1'b1; 
        2'b01 : is_compressed =1'b1;
        2'b10 : is_compressed =1'b1;
        2'b11 : is_compressed =1'b0;
        endcase 
    end


   
    

endmodule
