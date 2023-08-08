module c_extention_unit(
    input   logic           clk,
    input   logic           reset,

    input   logic           pc_i,
    input   logic   [31:0]  instr_i,



    output  logic           fetch_compressed,
    output  logic           decode_compressed,
    output  logic   [31:0]  instr_o

);
    logic                   pc_misalign, pc_flip ;
    logic           [31:0]  instruction_flip;


    assign pc_misalign=1'b0;

ateeb_miss pre_compress_unit (
    //inputs
    .clk                    (clk), 
    .reset                  (reset), 
    .inst                (instr_i),

    //outputs
    
    .is_compressed                 (fetch_compressed),
    
);




always_ff @(posedge clk) begin
    if (reset) begin 
        instruction_flip<=32'b0;
        pc_flip<=1'b0;
    end

    else begin 
        instruction_flip<=instr_i;
        pc_flip<=pc_i;

    end

end

compress_unit decode (
    //inputs
    .inst                   (instruction_flip),
    .pc                     (pc_flip),
    .pc_missallign       (pc_misalign),  
    
    //outputs
    .next_comp16            (decode_compressed), 
    .compressed_inst_out    (instr_o)
);


endmodule
