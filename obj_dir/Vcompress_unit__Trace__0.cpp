// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcompress_unit__Syms.h"


void Vcompress_unit___024root__trace_chg_sub_0(Vcompress_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcompress_unit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_chg_top_0\n"); );
    // Init
    Vcompress_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompress_unit___024root*>(voidSelf);
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcompress_unit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vcompress_unit___024root__trace_chg_sub_0(Vcompress_unit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,((3U & (IData)(vlSelf->compress_unit__DOT__comp_inst))),2);
        bufp->chgSData(oldp+1,((0xfffU & ((0xc0U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            << 4U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 >> 7U)) 
                                             | (0x1cU 
                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   >> 2U)))))),12);
        bufp->chgSData(oldp+2,((0xfffU & ((0xc0U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            >> 1U)) 
                                          | (0x3cU 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                >> 7U))))),12);
        bufp->chgSData(oldp+3,((0xfffU & ((IData)(vlSelf->__VdfgTmp_h6bec7bf5__0) 
                                          << 2U))),12);
        bufp->chgSData(oldp+4,(vlSelf->compress_unit__DOT__imm_Li),12);
        bufp->chgCData(oldp+5,((0x1fU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                         >> 2U))),5);
        bufp->chgCData(oldp+6,((0x1fU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                         >> 7U))),5);
        bufp->chgIData(oldp+7,(vlSelf->compress_unit__DOT__imm_jump),20);
        bufp->chgIData(oldp+8,(((0xc0000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                            >> 0xcU)))) 
                                             << 0x12U)) 
                                | ((0x20000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                << 5U)) 
                                   | (0x1f000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0xaU))))),20);
        bufp->chgIData(oldp+9,(((0xffc00U & ((- (IData)(
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
                                         | ((0x20U 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                << 3U)) 
                                            | (0x10U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  >> 2U)))))))),20);
        bufp->chgCData(oldp+10,((7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                       >> 0xdU))),3);
        bufp->chgCData(oldp+11,((8U | (7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             >> 7U)))),5);
        bufp->chgCData(oldp+12,((8U | (7U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             >> 2U)))),5);
        bufp->chgSData(oldp+13,(vlSelf->compress_unit__DOT__comp_inst),16);
        bufp->chgBit(oldp+14,((0U != (IData)(vlSelf->compress_unit__DOT__comp_inst))));
        bufp->chgCData(oldp+15,((0xffU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                          >> 5U))),8);
        bufp->chgSData(oldp+16,(vlSelf->compress_unit__DOT__comp_imm_branch),12);
        bufp->chgSData(oldp+17,((0xfffU & ((0xf00U 
                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                               << 1U)) 
                                           | ((0xc0U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  >> 5U)) 
                                              | ((0x20U 
                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst)) 
                                                 | (0x10U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       >> 2U))))))),12);
        bufp->chgIData(oldp+18,((0x40403U | ((0xfff00000U 
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
        bufp->chgIData(oldp+19,((0x842023U | ((0xfe000000U 
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
        bufp->chgIData(oldp+20,((0x10003U | ((0xfff00000U 
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
        bufp->chgIData(oldp+21,((0x12023U | ((0xfe000000U 
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
        bufp->chgIData(oldp+22,((0xefU | ((0x80000000U 
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
        bufp->chgIData(oldp+23,((0x6fU | ((0x80000000U 
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
        bufp->chgIData(oldp+24,((0xe7U | (0xf8000U 
                                          & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             << 8U)))),32);
        bufp->chgIData(oldp+25,((0x67U | (0xf8000U 
                                          & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                             << 8U)))),32);
        bufp->chgIData(oldp+26,((0x41000U | ((0x80000000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x13U)) 
                                             | ((0x7e000000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                    << 0x15U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0)))))),32);
        bufp->chgIData(oldp+27,((0x40000U | ((0x80000000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 0x13U)) 
                                             | ((0x7e000000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                    << 0x15U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0)))))),32);
        bufp->chgIData(oldp+28,((0x13U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                           << 0x14U) 
                                          | (0xf80U 
                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+29,((0x37U | ((((- (IData)(
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
                                          | (0xf80U 
                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+30,((0x13U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                           << 0x14U) 
                                          | ((0xf8000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 8U)) 
                                             | ((0x7000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    >> 1U)) 
                                                | (0xf80U 
                                                   & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))),32);
        bufp->chgIData(oldp+31,((0x137U | (((- (IData)(
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
        bufp->chgIData(oldp+32,((0x10413U | ((0xfff00000U 
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
        bufp->chgIData(oldp+33,((0x1013U | ((0x1f00000U 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                << 0x12U)) 
                                            | ((0xf8000U 
                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   << 8U)) 
                                               | (0xf80U 
                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+34,(((0x1f00000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                << 0x12U)) 
                                 | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0)),32);
        bufp->chgIData(oldp+35,((0x40000000U | ((0x1f00000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0))),32);
        bufp->chgIData(oldp+36,((0x33U | ((0x1f00000U 
                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              << 0x12U)) 
                                          | ((0xf8000U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 8U)) 
                                             | (0xf80U 
                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+37,((0x47413U | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                              << 0x14U) 
                                             | ((0x38000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 8U)) 
                                                | (0x380U 
                                                   & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+38,((0x33U | ((0x1f00000U 
                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              << 0x12U)) 
                                          | (0xf80U 
                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst))))),32);
        bufp->chgIData(oldp+39,((0x847433U | ((0x700000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+40,((0x846433U | ((0x700000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+41,((0x844433U | ((0x700000U 
                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  << 0x12U)) 
                                              | ((0x38000U 
                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                     << 8U)) 
                                                 | (0x380U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
        bufp->chgIData(oldp+42,((0x40840433U | ((0x700000U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    << 0x12U)) 
                                                | ((0x38000U 
                                                    & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                       << 8U)) 
                                                   | (0x380U 
                                                      & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))),32);
    }
    bufp->chgIData(oldp+43,(vlSelf->inst),32);
    bufp->chgBit(oldp+44,(vlSelf->pc));
    bufp->chgBit(oldp+45,(vlSelf->next_comp16));
    bufp->chgIData(oldp+46,(vlSelf->compressed_inst_out),32);
}

void Vcompress_unit___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root__trace_cleanup\n"); );
    // Init
    Vcompress_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompress_unit___024root*>(voidSelf);
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
