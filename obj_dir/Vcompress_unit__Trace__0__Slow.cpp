// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcompress_unit__Syms.h"


VL_ATTR_COLD void Vcompress_unit___024root__trace_init_sub__TOP__0(Vcompress_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBit(c+45,"pc", false,-1);
    tracep->declBit(c+46,"next_comp16", false,-1);
    tracep->declBus(c+47,"compressed_inst_out", false,-1, 31,0);
    tracep->pushNamePrefix("compress_unit ");
    tracep->declBus(c+44,"inst", false,-1, 31,0);
    tracep->declBit(c+45,"pc", false,-1);
    tracep->declBit(c+46,"next_comp16", false,-1);
    tracep->declBus(c+47,"compressed_inst_out", false,-1, 31,0);
    tracep->declBus(c+1,"comp_opcode", false,-1, 1,0);
    tracep->declBus(c+2,"comp_load_i_type", false,-1, 11,0);
    tracep->declBus(c+3,"comp_imm_stack_store", false,-1, 11,0);
    tracep->declBus(c+4,"comp_imm_load_store", false,-1, 11,0);
    tracep->declBus(c+5,"imm_Li", false,-1, 11,0);
    tracep->declBus(c+5,"comp_i_tpye", false,-1, 11,0);
    tracep->declBus(c+6,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"rs1", false,-1, 4,0);
    tracep->declBus(c+7,"rd", false,-1, 4,0);
    tracep->declBus(c+8,"imm_jump", false,-1, 19,0);
    tracep->declBus(c+9,"imm_LUI", false,-1, 19,0);
    tracep->declBus(c+10,"imm_LUI_addi_16_sp", false,-1, 19,0);
    tracep->declBus(c+11,"comp_func3", false,-1, 2,0);
    tracep->declBus(c+12,"comp_rs1", false,-1, 4,0);
    tracep->declBus(c+13,"comp_rs2", false,-1, 4,0);
    tracep->declBus(c+13,"comp_rd", false,-1, 4,0);
    tracep->declBus(c+14,"comp_inst", false,-1, 15,0);
    tracep->declBit(c+15,"illegal", false,-1);
    tracep->declBus(c+6,"imm_sLLI", false,-1, 4,0);
    tracep->declBus(c+16,"imm", false,-1, 7,0);
    tracep->declBus(c+17,"comp_imm_branch", false,-1, 11,0);
    tracep->declBus(c+18,"comp_addi_14_sp", false,-1, 11,0);
    tracep->declBus(c+5,"imm_ANDI", false,-1, 11,0);
    tracep->declBus(c+19,"inst_load", false,-1, 31,0);
    tracep->declBus(c+20,"inst_store", false,-1, 31,0);
    tracep->declBus(c+21,"inst_load_stack", false,-1, 31,0);
    tracep->declBus(c+22,"inst_store_stack", false,-1, 31,0);
    tracep->declBus(c+23,"inst_jal", false,-1, 31,0);
    tracep->declBus(c+24,"inst_j", false,-1, 31,0);
    tracep->declBus(c+25,"inst_jalr", false,-1, 31,0);
    tracep->declBus(c+26,"inst_jr", false,-1, 31,0);
    tracep->declBus(c+27,"inst_branch_not", false,-1, 31,0);
    tracep->declBus(c+28,"inst_branch_equal", false,-1, 31,0);
    tracep->declBus(c+29,"inst_LI", false,-1, 31,0);
    tracep->declBus(c+30,"inst_LUI", false,-1, 31,0);
    tracep->declBus(c+48,"inst_r_type", false,-1, 31,0);
    tracep->declBus(c+49,"inst_r_comp_type", false,-1, 31,0);
    tracep->declBus(c+50,"inst_nop", false,-1, 31,0);
    tracep->declBus(c+31,"inst_i_type", false,-1, 31,0);
    tracep->declBus(c+32,"inst_addi_16_sp", false,-1, 31,0);
    tracep->declBus(c+33,"inst_addi_14_sp", false,-1, 31,0);
    tracep->declBus(c+34,"inst_SLLI", false,-1, 31,0);
    tracep->declBus(c+35,"inst_sRLI", false,-1, 31,0);
    tracep->declBus(c+36,"inst_sRAI", false,-1, 31,0);
    tracep->declBus(c+37,"inst_ADD", false,-1, 31,0);
    tracep->declBus(c+38,"inst_ANDI", false,-1, 31,0);
    tracep->declBus(c+39,"inst_MV", false,-1, 31,0);
    tracep->declBus(c+40,"inst_AND", false,-1, 31,0);
    tracep->declBus(c+41,"inst_OR", false,-1, 31,0);
    tracep->declBus(c+42,"inst_XOR", false,-1, 31,0);
    tracep->declBus(c+43,"inst_SUB", false,-1, 31,0);
    tracep->declBus(c+51,"inst_E_Break", false,-1, 31,0);
    tracep->declBus(c+52,"load_opcode", false,-1, 6,0);
    tracep->declBus(c+53,"store_opcode", false,-1, 6,0);
    tracep->declBus(c+54,"R_type_opcode", false,-1, 6,0);
    tracep->declBus(c+55,"I_type_opcode", false,-1, 6,0);
    tracep->declBus(c+56,"Jal_opcode", false,-1, 6,0);
    tracep->declBus(c+57,"B_type_opcode", false,-1, 6,0);
    tracep->declBus(c+58,"Jalr_opcode", false,-1, 6,0);
    tracep->declBus(c+59,"LUI_opcode", false,-1, 6,0);
    tracep->declBus(c+60,"AUIPC_opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vcompress_unit___024root__trace_init_top(Vcompress_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_init_top\n"); );
    // Body
    Vcompress_unit___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vcompress_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcompress_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vcompress_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vcompress_unit___024root__trace_register(Vcompress_unit___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vcompress_unit___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vcompress_unit___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vcompress_unit___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vcompress_unit___024root__trace_full_sub_0(Vcompress_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vcompress_unit___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_full_top_0\n"); );
    // Init
    Vcompress_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompress_unit___024root*>(voidSelf);
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vcompress_unit___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vcompress_unit___024root__trace_full_sub_0(Vcompress_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,((3U & (IData)(vlSelf->compress_unit__DOT__comp_inst))),2);
    bufp->fullSData(oldp+2,((0xfffU & ((0xc0U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 4U)) 
                                       | ((0x20U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (0x1cU 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                >> 2U)))))),12);
    bufp->fullSData(oldp+3,((0xfffU & ((0xc0U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 >> 1U)) 
                                       | (0x3cU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   >> 7U))))),12);
    bufp->fullSData(oldp+4,((0xfffU & ((IData)(vlSelf->__VdfgTmp_h6bec7bf5__0) 
                                       << 2U))),12);
    bufp->fullSData(oldp+5,(vlSelf->compress_unit__DOT__imm_Li),12);
    bufp->fullCData(oldp+6,((0x1fU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                      >> 2U))),5);
    bufp->fullCData(oldp+7,((0x1fU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                      >> 7U))),5);
    bufp->fullIData(oldp+8,(vlSelf->compress_unit__DOT__imm_jump),20);
    bufp->fullIData(oldp+9,(((0xc0000U & ((- (IData)(
                                                     (1U 
                                                      & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                         >> 0xcU)))) 
                                          << 0x12U)) 
                             | ((0x20000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             << 5U)) 
                                | (0x1f000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 0xaU))))),20);
    bufp->fullIData(oldp+10,(((0xffc00U & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          >> 0xcU)))) 
                                           << 0xaU)) 
                              | ((0x200U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            >> 3U)) 
                                 | ((0x180U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 4U)) 
                                    | ((0x40U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 1U)) 
                                       | ((0x20U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            << 3U)) 
                                          | (0x10U 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                >> 2U)))))))),20);
    bufp->fullCData(oldp+11,((7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                    >> 0xdU))),3);
    bufp->fullCData(oldp+12,((8U | (7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                          >> 7U)))),5);
    bufp->fullCData(oldp+13,((8U | (7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                          >> 2U)))),5);
    bufp->fullSData(oldp+14,(vlSelf->compress_unit__DOT__comp_inst),16);
    bufp->fullBit(oldp+15,((0U != (IData)(vlSelf->compress_unit__DOT__comp_inst))));
    bufp->fullCData(oldp+16,((0xffU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                       >> 5U))),8);
    bufp->fullSData(oldp+17,(vlSelf->compress_unit__DOT__comp_imm_branch),12);
    bufp->fullSData(oldp+18,((0xfffU & ((0xf00U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   << 1U)) 
                                        | ((0xc0U & 
                                            ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             >> 5U)) 
                                           | ((0x20U 
                                               & (IData)(vlSelf->compress_unit__DOT__comp_inst)) 
                                              | (0x10U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    >> 2U))))))),12);
    bufp->fullIData(oldp+19,((0x40403U | ((0xfff00000U 
                                           & ((IData)(vlSelf->__VdfgTmp_h6bec7bf5__0) 
                                              << 0x16U)) 
                                          | ((0x38000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 8U)) 
                                             | ((0x7000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    >> 1U)) 
                                                | (0x380U 
                                                   & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                      << 5U))))))),32);
    bufp->fullIData(oldp+20,((0x842023U | ((0xfe000000U 
                                            & ((IData)(vlSelf->__VdfgTmp_h6bec7bf5__0) 
                                               << 0x16U)) 
                                           | ((0x700000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0xf80U 
                                                    & ((IData)(vlSelf->__VdfgTmp_h6bec7bf5__0) 
                                                       << 9U))))))),32);
    bufp->fullIData(oldp+21,((0x10003U | ((0xfff00000U 
                                           & ((0xc000000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x18U)) 
                                              | ((0x2000000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 0xdU)) 
                                                 | (0x1c00000U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       << 0x12U))))) 
                                          | ((0x7000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 >> 1U)) 
                                             | (0xf80U 
                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+22,((0x12023U | ((0xfe000000U 
                                           & ((0xc000000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x13U)) 
                                              | (0x2000000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 0xdU)))) 
                                          | ((0x1f00000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | (0xf80U 
                                                & ((0x2000U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       << 6U)) 
                                                   | (0x1e00U 
                                                      & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))))),32);
    bufp->fullIData(oldp+23,((0xefU | ((0x80000000U 
                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           << 0x13U)) 
                                       | (((IData)(vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0) 
                                           << 0x15U) 
                                          | ((0x100000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0xcU)) 
                                             | (0xff000U 
                                                & (vlSelf->compress_unit__DOT__imm_jump 
                                                   << 1U))))))),32);
    bufp->fullIData(oldp+24,((0x6fU | ((0x80000000U 
                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           << 0x13U)) 
                                       | (((IData)(vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0) 
                                           << 0x15U) 
                                          | ((0x100000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0xcU)) 
                                             | (0xff000U 
                                                & (vlSelf->compress_unit__DOT__imm_jump 
                                                   << 1U))))))),32);
    bufp->fullIData(oldp+25,((0xe7U | (0xf8000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   << 8U)))),32);
    bufp->fullIData(oldp+26,((0x67U | (0xf8000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   << 8U)))),32);
    bufp->fullIData(oldp+27,((0x41000U | ((0x80000000U 
                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              << 0x13U)) 
                                          | ((0x7e000000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                 << 0x15U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0)))))),32);
    bufp->fullIData(oldp+28,((0x40000U | ((0x80000000U 
                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              << 0x13U)) 
                                          | ((0x7e000000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                 << 0x15U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0)))))),32);
    bufp->fullIData(oldp+29,((0x13U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                        << 0x14U) | 
                                       (0xf80U & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+30,((0x37U | ((((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                        >> 0xcU)))) 
                                         << 0x1eU) 
                                        | ((0x20000000U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 0x11U)) 
                                           | (0x1f000000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x16U)))) 
                                       | (0xf80U & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+31,((0x13U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                        << 0x14U) | 
                                       ((0xf8000U & 
                                         ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                          << 8U)) | 
                                        ((0x7000U & 
                                          ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           >> 1U)) 
                                         | (0xf80U 
                                            & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))),32);
    bufp->fullIData(oldp+32,((0x137U | (((- (IData)(
                                                    (1U 
                                                     & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                        >> 0xcU)))) 
                                         << 0x16U) 
                                        | ((0x200000U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 9U)) 
                                           | ((0x180000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x10U)) 
                                              | ((0x40000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 0xdU)) 
                                                 | ((0x20000U 
                                                     & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                        << 0xfU)) 
                                                    | (0x10000U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          << 0xaU))))))))),32);
    bufp->fullIData(oldp+33,((0x10413U | ((0xfff00000U 
                                           & ((0xf0000000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x15U)) 
                                              | ((0xc000000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 0xfU)) 
                                                 | ((0x2000000U 
                                                     & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                        << 0x14U)) 
                                                    | (0x1000000U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          << 0x12U)))))) 
                                          | ((0x7000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 >> 1U)) 
                                             | (0x380U 
                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   << 5U)))))),32);
    bufp->fullIData(oldp+34,((0x1013U | ((0x1f00000U 
                                          & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             << 0x12U)) 
                                         | ((0xf8000U 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                << 8U)) 
                                            | (0xf80U 
                                               & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+35,(((0x1f00000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             << 0x12U)) 
                              | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0)),32);
    bufp->fullIData(oldp+36,((0x40000000U | ((0x1f00000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0))),32);
    bufp->fullIData(oldp+37,((0x33U | ((0x1f00000U 
                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           << 0x12U)) 
                                       | ((0xf8000U 
                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              << 8U)) 
                                          | (0xf80U 
                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+38,((0x47413U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                           << 0x14U) 
                                          | ((0x38000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 8U)) 
                                             | (0x380U 
                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+39,((0x33U | ((0x1f00000U 
                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           << 0x12U)) 
                                       | (0xf80U & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
    bufp->fullIData(oldp+40,((0x847433U | ((0x700000U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+41,((0x846433U | ((0x700000U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+42,((0x844433U | ((0x700000U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 0x12U)) 
                                           | ((0x38000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 8U)) 
                                              | (0x380U 
                                                 & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+43,((0x40840433U | ((0x700000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x12U)) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    bufp->fullIData(oldp+44,(vlSelf->inst),32);
    bufp->fullBit(oldp+45,(vlSelf->pc));
    bufp->fullBit(oldp+46,(vlSelf->next_comp16));
    bufp->fullIData(oldp+47,(vlSelf->compressed_inst_out),32);
    bufp->fullIData(oldp+48,(vlSelf->compress_unit__DOT__inst_r_type),32);
    bufp->fullIData(oldp+49,(vlSelf->compress_unit__DOT__inst_r_comp_type),32);
    bufp->fullIData(oldp+50,(vlSelf->compress_unit__DOT__inst_nop),32);
    bufp->fullIData(oldp+51,(0x100073U),32);
    bufp->fullCData(oldp+52,(3U),7);
    bufp->fullCData(oldp+53,(0x23U),7);
    bufp->fullCData(oldp+54,(0x33U),7);
    bufp->fullCData(oldp+55,(0x13U),7);
    bufp->fullCData(oldp+56,(0x6fU),7);
    bufp->fullCData(oldp+57,(0x63U),7);
    bufp->fullCData(oldp+58,(0x67U),7);
    bufp->fullCData(oldp+59,(0x37U),7);
    bufp->fullCData(oldp+60,(0x17U),7);
}
