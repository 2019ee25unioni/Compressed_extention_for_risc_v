module compress_unit (
    input logic [31:0] inst,input logic  pc,  output logic next_comp16, output logic [31:0] compressed_inst_out
);
    logic [1:0] comp_opcode;
    logic [11:0] comp_imm_i_type, comp_imm_stack_store,comp_imm_load_store,imm_jump;
    logic [4:0] rs2, rs1 ;
    logic [2:0] comp_func3;
    logic [2:0] comp_rs1, comp_rs2, comp_rd;
   
    logic [15:0] comp_inst;
    logic illegal;
    logic [7:0] comp_imm_branch;
    logic [31:0] inst_load, inst_store, inst_load_stack, inst_store_stack, inst_jal , inst_jalr, inst_branch,inst_LI, inst_LUI, inst_r_type, inst_r_comp_type,inst_nop;

    logic [6:0] load_opcode, store_opcode, R_type_opcode, I_type_opcode, Jal_opcode, B_type_opcode, Jalr_opcode,LUI_opcode, AUIPC_opcode ;

    assign illegal |= comp_inst;
    assign comp_opcode = comp_inst [1:0];
    assign comp_imm_i_type = (({{6'b0},{comp_inst[3:2]},{comp_inst[12]}, {comp_inst[6:4]}}) << 2); //for i type instruction 
    assign comp_imm_stack_store = (({6'b0},{comp_inst[8:7]},{comp_inst[12:9]}) << 2);  //to to store with stack register as a refernce
    assign imm = comp_inst[12:5];   //wide immediate
    assign comp_imm_load_store = (({{comp_inst[5]},{comp_inst[12:10]}, {comp_inst[6]}}) << 2); //for load and store unit
    assign comp_imm_branch = {{3{comp_inst[12]}}, {comp_inst[12]},{comp_inst[6:5]},{comp_inst[2]}, {comp_inst[11:10]}, {comp_inst[4:3]}, {1'b0}}; //for branch immediate
    assign rs2 = comp_inst [6:2];   // normal 5 bit address for rs2 
    assign rs1 = comp_inst [11:7];  // nomeal 5 bit address for rs1 and rd 
    assign comp_rs1 = comp_inst[9:7];   // for accessing x8 -x15 registers
    assign comp_rs2 = comp_inst[4:2];   // for accessing x8 -x15 registers
    assign comp_rd = comp_inst[4:2];    // for accessing x8 -x15 registers
    assign imm_jump =  (({{comp_inst[12]}, {comp_inst[8]},{comp_inst[10:9]} , {comp_inst[6]} , {comp_inst[7]} , {comp_inst[2]} , {comp_inst[11]} , {comp_inst[5:3]} , 1'b0 })); //immediate for jump
    assign comp_func3 = comp_inst[15:13];
    assign load_opcode = 7'b0000011;
    assign store_opcode =7'b0100011;
    assign R_type_opcode =7'b0110011;
    assign I_type_opcode = 7'b0010011;
    assign B_type_opcode = 7'b1100011;
    assign Jal_opcode =7'b1101111;
    assign Jalr_opcode = 7'b1100111;
    assign LUI_opcode =7'b0110111;
    assign AUIPC_opcode= 7'b0010111;


    always_comb begin // a sel that we use to isolate the compressed instruction , we read the LSD of pc bit 1 and find if we are at 0x2 or 0x4

        if(pc) comp_inst = inst[31:16];
        else if (~pc) comp_inst = inst[15:0];
        
    end

    always_comb begin // this is the sel which tells the pc to do +2 and inst_mem to to address>>1
    if (illegal) begin //check for illegal inst all zeros
    case (comp_opcode)
       2'b00 : next_comp16 =1'b1;
       2'b01 : next_comp16=1'b1;
       2'b10 : next_comp16=1'b1;
       2'b11 : next_comp16 =1'b0; 
        default: next_comp16 =1'b0;
    
    endcase
    end
    
    else next_comp16= 1'b0;
    end

    always_comb begin // this is to select what output the instruction is according to the compressed opcode 
        if (~next_comp16) compressed_inst_out = inst;
        else begin 
            case (comp_opcode)
            2'b00 : begin 
                    case (comp_func3)

                    endcase
            end 
            endcase
        end


    end


    always_comb begin  // this is the block in which we make extend the compressed to whole instructions
        inst_load_stack = {{{3'b0 }, {(comp_imm_i_type)<< 2}}, {5'h02} , {comp_func3} , {rs1}, {load_opcode}};
        inst_store_stack = {};
    end
endmodule
