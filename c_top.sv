module c_top(
    input   logic           clk,
    input   logic           reset_i,

    input   logic   [31:0]  pc_i,
    input   logic   [31:0]  instr_i,

    input   logic           br_taken_i,

    output  logic           misalign_fetch_to_adder,
    output  logic           pc_half_o,
    output  logic           stall_o,
    output  logic   [31:0]  instr_o

);
    logic                   pc_misalign;
    logic           [31:0]  instruction;



c_misalign misalign (
    //inputs
    .clk                    (clk), 
    .reset                  (reset_i), 

    .sel_for_branch         (br_taken_i),
    .inst_in                (instr_i),

    //outputs
    .stall_pc               (stall_o),
    .pc_misaligned_o        (pc_misalign),
    .misalign_fetch         (misalign_fetch_to_adder),
    .inst_out               (instruction)
);

c_decode decode (
    //inputs
    .inst                   (instruction),
    .pc                     (pc_i[1]),
    .pc_missallign        (pc_misalign),  
    
    //outputs
    .next_comp16            (pc_half_o), 
    .compressed_inst_out    (instr_o)
);


endmodule
