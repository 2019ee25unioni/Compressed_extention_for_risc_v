module c_extention_unit(
    input   logic           clk,
    input   logic           reset,

    input   logic   [31:0]  pc_i,
    input   logic   [31:0]  instr_i,

    input   logic           br_taken_i,
    input   logic           i_cache_valid,

    output  logic   [31:0]  pc_realigned_o,
    output  logic           i_cache_flush,
    output  logic           i_cache_request,
    output  logic           i_cache_req_kill,
    output  logic           pc_half_o,
    output  logic           stall_o,
    output  logic   [31:0]  instr_o

);
    logic                   pc_misalign;
    logic           [31:0]  instruction;



c_misalign misalign (
    //inputs
    .clk                    (clk), 
    .reset                  (reset), 

    .sel_for_branch         (br_taken_i),
    .i_cache_valid          (i_cache_valid),
    .pc_in                  (pc_i), 
    .inst_in                (instr_i),

    //outputs
    .stall_pc               (stall_o),
    .i_cache_flush          (i_cache_flush),
    .i_cache_request        (i_cache_request),
    .i_cache_req_kill       (i_cache_req_kill),
    .pc_misaligned_o        (pc_misalign),
    .pc_out                 (pc_realigned_o), 
    .inst_out               (instruction)
);

compress_unit decode (
    //inputs
    .inst                   (instruction),
    .pc                     (pc_i[1]),
    .pc_missallign       (pc_misalign),  
    
    //outputs
    .next_comp16            (pc_half_o), 
    .compressed_inst_out    (instr_o)
);


endmodule