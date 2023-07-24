module c_extention_unit(
    input   logic           clk,
    input   logic           reset,

    input   logic           pc_i,
    input   logic   [31:0]  instr_i,



    output  logic           fetch_compressed,
    output  logic           decode_compressed,
    output  logic   [31:0]  instr_o

);
    logic                   pc_misalign, pc_flip , sel_for_next_stage;
    logic           [31:0]  instruction,instruction_flip, secondary_inst;


    assign pc_misalign=1'b0;

ateeb_miss pre_compress_unit (
    //inputs
    .clk                    (clk), 
    .reset                  (reset), 
    .inst                (instr_i),

    //outputs
    .secondary_inst               (secondary_inst),
    .is_compressed                 (fetch_compressed),
    .next_compressed                (sel_for_next_stage)
);

always_comb begin 
    if (sel_for_next_stage) instruction=secondary_inst;
    else instruction=instr_i;
end


always_ff @(posedge clk) begin
    if (reset) begin 
        instruction_flip<=32'b0;
        pc_flip<=1'b0;
    end

    else begin 
        instruction_flip<=instruction;
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
