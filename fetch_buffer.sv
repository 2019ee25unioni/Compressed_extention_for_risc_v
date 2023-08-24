module fetch_buffer (
    input logic clk, reset, flush,
    input logic [31:0] inst_in, fetch_pc_in, inst_pc_in
    input logic inst_valid, misalign_fetch,fetch_ack, fetch_req,

    output logic [31:0] inst_out,fetch_pc_out


    
    
    );

    logic [31:0] data_buffer_1, data_buffer_2, pc_buffer_1, pc_buffer_2;


    always_ff @( negedge clk ) begin    ///     the two buffers write proccess
        if(reset |flush) begin
            data_buffer_1<=32'h0;
            data_buffer_2<=32'h0;
            pc_buffer_1<=32'h0;
            pc_buffer_2<=32'h0;
        end
        else begin
          if (~misalign_fetch & fetch_ack & inst_valid) begin 
                data_buffer_1<=inst_in;
                data_buffer_2<=data_buffer_2;
                pc_buffer_1<=fetch_pc_in;
                pc_buffer_2<=pc_buffer_1;
            end


        end
        
    end


    always_comb begin   //   reading from the buffers
        if()
        
    end




endmodule