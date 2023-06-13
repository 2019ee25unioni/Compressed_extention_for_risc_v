module compress_unit (
    input logic [31:0] inst,input logic  pc,  output logic next_comp16, output logic [31:0] compressed_inst_out
);
    logic [1:0] comp_opcode;
    logic [11:0] comp_load_i_type, comp_imm_stack_store,comp_imm_load_store, imm_Li, comp_i_tpye;
    logic [4:0] rs2, rs1 ;
    logic [19:0] imm_jump, imm_LUI, imm_LUI_addi_16_sp;
    logic [2:0] comp_func3;
    logic [4:0] comp_rs1, comp_rs2, comp_rd;
    
    logic [15:0] comp_inst;
    logic illegal;
    logic [11:0] comp_imm_branch, comp_addi_14_sp, imm_sLLI, imm_ANDI;
    logic [31:0] inst_load, inst_store, inst_load_stack, inst_store_stack, inst_jal , inst_j, inst_jalr,inst_jr, inst_branch,inst_LI, inst_LUI, inst_r_type, inst_r_comp_type,inst_nop, inst_i_type, inst_addi_16_sp, inst_addi_14_sp, inst_SLLI, inst_sRLI, inst_sRAI, inst_ADD, inst_ANDI, inst_MV, inst_AND, inst_OR, inst_XOR, inst_SUB;

    logic [6:0] load_opcode, store_opcode, R_type_opcode, I_type_opcode, Jal_opcode, B_type_opcode, Jalr_opcode,LUI_opcode, AUIPC_opcode ;

    assign illegal |= comp_inst;
    assign comp_opcode = comp_inst [1:0];
    assign comp_load_i_type = (({{6'b0},{comp_inst[3:2]},{comp_inst[12]}, {comp_inst[6:4]}}) << 2); //for i type instruction 
    assign comp_imm_stack_store = (({6'b0},{comp_inst[8:7]},{comp_inst[12:9]}) << 2);  //to to store with stack register as a refernce
    assign imm = comp_inst[12:5];   //wide immediate
    assign comp_imm_load_store = (({{comp_inst[5]},{comp_inst[12:10]}, {comp_inst[6]}}) << 2); //for load and store unit
    assign comp_imm_branch = {{3{comp_inst[12]}}, {comp_inst[12]},{comp_inst[6:5]},{comp_inst[2]}, {comp_inst[11:10]}, {comp_inst[4:3]}, {1'b0}}; //for branch immediate
    assign rs2 = comp_inst [6:2];   // normal 5 bit address for rs2 
    assign rs1 = comp_inst [11:7];  // nomeal 5 bit address for rs1 and rd 
    assign comp_rs1 = {{2'b01},{comp_inst[9:7]}};   // for accessing x8 -x15 registers
    assign comp_rs2 = {{2'b01},{comp_inst[4:2]}};   // for accessing x8 -x15 registers
    assign comp_rd = {{2'b01},{comp_inst[4:2]}};    // for accessing x8 -x15 registers
    assign imm_jump =  (({{8{comp_inst[12]}},{comp_inst[12]}, {comp_inst[8]},{comp_inst[10:9]} , {comp_inst[6]} , {comp_inst[7]} , {comp_inst[2]} , {comp_inst[11]} , {comp_inst[5:3]} , 1'b0 })); //immediate for jump
    assign imm_Li = {{6{comp_inst[12]}} , {comp_inst[12]} , {comp_inst[6:2]}};
    assign imm_LUI = { {2{comp_inst[12]} },{comp_inst[12]} , {comp_inst [6:2]}, {12'b0}};
    assign imm_LUI_addi_16_sp =  {{10{comp_inst[12]}} ,{comp_inst[12]}, {comp_inst [4:3]},{comp_inst[5]},{comp_inst[2]},{comp_inst[6]} ,{4'b0} } ;
    assign comp_addi_14_sp = (({{4'b0}, {comp_inst[10:7]} ,  {comp_inst[12:11]},{comp_inst[5]} , {comp_inst[6]}} ) << 4);
    assign imm_sLLI = { {1'b0} , {comp_inst[6:2]} }; // for RVC32 bit 4 of shamt shouold be zero
    assign imm_ANDI = {{6{comp_inst[12]}} , {comp_inst[12]} , {comp_inst[6:2]}};
    assign comp_i_tpye = {{6{comp_inst[12]} }  ,  {comp_inst[12]}, {comp_inst [6:2]}};
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
                    3'b000 :  compressed_inst_out = inst_addi_14_sp;
                    3'b010 :  compressed_inst_out = inst_load;
                    3'b110 :  compressed_inst_out = inst_store;
                    default compressed_inst_out = 32'b0000_0013;
                    endcase
                end 
            2'b01 : begin 
                    case(comp_func3)
                    3'b000 : begin 
                            if (comp_inst[11:7] == 5'b0) compressed_inst_out = 32'b0000_0013;
                            else compressed_inst_out = inst_i_type;
                            end
                    3'b001 : compressed_inst_out = inst_jal;
                    3'b010 : compressed_inst_out = inst_LI;
                    3'b011 : begin  if (rd == 5'h02 & rd!=5'h00)  compressed_inst_out = inst_addi_16_sp;
                                    else compressed_inst_out = inst_LUI;
                            end
                    3'b100 : begin 
                            case (comp_inst[11:10])
                            2'b00 : compressed_inst_out = inst_sRLI;
                            2'b01 : compressed_inst_out = inst_sRAI;
                            2'b10 : compressed_inst_out = inst_ANDI;
                            2'b11 : begin 
                                    case (comp_inst[6:5])
                                    2'b00 : compressed_inst_out = inst_SUB;
                                    2'b01 : compressed_inst_out = inst_XOR;
                                    2'b10 : compressed_inst_out = inst_OR;
                                    2'b11 : compressed_inst_out = inst_AND;

                                    endcase
                                    end
                            default compressed_inst_out = 32'h0000_0013;
                            endcase
                            end
                    3'b101 : compressed_inst_out = inst_j;
                    3'b110 : compressed_inst_out = inst_branch;
                    3'b111 : compressed_inst_out = inst_branch;
                    endcase

                    end
            2'b10 : begin 
                    case (comp_func3)
                    3'b000 : compressed_inst_out = inst_SLLI;
                    3'b010 : compressed_inst_out =inst_load_stack;
                    3'b100 :  begin
                        case(comp_inst[12])
                        1'b0 : begin 
                            if((rs2 == 5'h00) & (rs1!=5'h00)) compressed_inst_out = inst_jr;
                            else compressed_inst_out = inst_MV;
                                end
                        1'b1 : begin
                            if ((rs1==5'h00) & (rs2 == 5'h00)) compressed_inst_out = E_Break;
                            else if ((rs1!=5'h00) & (rs2 == 5'h00))compressed_inst_out= inst_jalr;
                            else compressed_inst_out = inst_ADD;
                        end
                        endcase
                                end 
                    3'b110 : compressed_inst_out = inst_store_stack;
                    default compressed_inst_out = 32'h0000_0013;
                    endcase
                    end
            2'b11 : compressed_inst_out = inst;
            endcase
        end


    end


    always_comb begin  // this is the block in which we make extend the compressed to whole instructions
        inst_load_stack = { {comp_load_i_type}, {5'h02} , {comp_func3} , {rs1}, {load_opcode}};
        inst_store_stack = {{comp_imm_stack_store[11:5]} , {rs2}, {5'h02}, {comp_imm_stack_store[4:0]}, {store_opcode}};
        inst_load = {{comp_imm_load_store}, {comp_rs1}, {comp_func3}, {comp_rd}, {load_opcode}};
        inst_store = {{comp_imm_load_store[11:5]}, {comp_rs2},{comp_rs1}, {comp_func3}, {comp_imm_load_store[4:0]}, {store_opcode}};
        inst_jal = {  {{imm_jump[20]},{imm_jump[10:1]},{imm_jump[11]},{imm_jump[19:12]}} , {5'h01}, {Jal_opcode}};
        inst_j = {  {{imm_jump[20]},{imm_jump[10:1]},{imm_jump[11]},{imm_jump[19:12]}} , {5'h00}, {Jal_opcode}};
        inst_jr = {{12'h0} , {rs1} , {3'b0}, {5'h00}, {Jalr_opcode}};
        inst_jalr= {{12'h0} , {rs1} , {3'b0}, {5'h01}, {Jalr_opcode}};
        inst_branch = {{{comp_imm_branch[12]} , {comp_imm_branch [10:5]}} , {comp_rs1} , {comp_func3} , {{comp_imm_branch[4:1]},{comp_imm_branch[11]}} , {5'h00} , {B_type_opcode}};
        inst_LI = {{imm_Li}, {5'h00} , {comp_func3} , {rd} , {I_type_opcode}};
        inst_LUI = { {imm_LUI} , {rd} , {LUI_opcode}};
        inst_i_type = { {comp_i_tpye} , {rs1} , {comp_func3} , {rs1} , {I_type_opcode}}  ; 
        inst_addi_16_sp = {{imm_LUI_addi_16_sp} , {5'h02} , {LUI_opcode}};
        inst_addi_14_sp = {{comp_addi_14_sp}, {5'h02} , {comp_func3} , {comp_rd} , {I_type_opcode}};
        inst_SLLI = {{7'b0} , {imm_sLLI} ,{rs1} , {comp_func3}, {rs1}, {I_type_opcode}};
        inst_sRLI = {{7'b0} , {imm_sLLI} ,{comp_rs1} , {comp_func3}, {comp_rs1}, {I_type_opcode}};
        inst_sRAI = {{7'b0} , {imm_sLLI} ,{comp_rs1} , {comp_func3}, {comp_rs1}, {I_type_opcode}};
        inst_ANDI = {{imm_ANDI} ,{comp_rs1}, {3'b111}, {comp_rs1}, {I_type_opcode}};
        inst_ADD = {{7'b0}, {rs2}, {rs1}, {3'b0} , {rs1} , {R_type_opcode} };
        inst_MV ={{7'b0}, {rs2}, {5'b0}, {3'b0} , {rs1} , {R_type_opcode} };
        inst_AND = {{7'b0}, {comp_rs2}, {comp_rs1}, {3'b111} , {comp_rd} , {R_type_opcode} };
        inst_OR = {{7'b0}, {comp_rs2}, {comp_rs1}, {3'b110} , {comp_rd} , {R_type_opcode} };
        inst_XOR = {{7'b0}, {comp_rs2}, {comp_rs1}, {3'b100} , {comp_rd} , {R_type_opcode} };
        inst_AND = {{7'b0100000}, {comp_rs2}, {comp_rs1}, {3'b000} , {comp_rd} , {R_type_opcode} };
    end
endmodule
