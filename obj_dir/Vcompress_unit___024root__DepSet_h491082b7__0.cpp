// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompress_unit.h for the primary calling header

#include "verilated.h"

#include "Vcompress_unit__Syms.h"
#include "Vcompress_unit___024root.h"

VL_INLINE_OPT void Vcompress_unit___024root___ico_sequent__TOP__0(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->compress_unit__DOT__comp_inst = (0xffffU 
                                             & ((IData)(vlSelf->pc)
                                                 ? 
                                                (vlSelf->inst 
                                                 >> 0x10U)
                                                 : vlSelf->inst));
    vlSelf->next_comp16 = ((0U != (IData)(vlSelf->compress_unit__DOT__comp_inst)) 
                           & (IData)((3U != (3U & (IData)(vlSelf->compress_unit__DOT__comp_inst)))));
    vlSelf->compress_unit__DOT__comp_imm_branch = (
                                                   (0xe00U 
                                                    & ((- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                      >> 0xcU)))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          >> 4U)) 
                                                      | ((0xc0U 
                                                          & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                             << 1U)) 
                                                         | ((0x20U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 3U)) 
                                                            | ((0x18U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   >> 7U)) 
                                                               | (6U 
                                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                     >> 2U)))))));
    vlSelf->compress_unit__DOT__imm_Li = ((0xfc0U & 
                                           ((- (IData)(
                                                       (1U 
                                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                           >> 0xcU)))) 
                                            << 6U)) 
                                          | ((0x20U 
                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 >> 7U)) 
                                             | (0x1fU 
                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   >> 2U))));
    vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0 
        = (0x63U | ((0x800U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                               << 1U)) | ((0x600U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            << 6U)) 
                                          | (0x80U 
                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                >> 5U)))));
    vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0 
        = (0x45413U | ((0x38000U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                    << 8U)) | (0x380U 
                                               & (IData)(vlSelf->compress_unit__DOT__comp_inst))));
    vlSelf->__VdfgTmp_h6bec7bf5__0 = ((0x10U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                >> 1U)) 
                                      | ((0xeU & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  >> 9U)) 
                                         | (1U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                  >> 6U))));
    vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0 
        = ((0x300U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                      >> 1U)) | ((0x80U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                           << 1U)) 
                                 | ((0x40U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              >> 1U)) 
                                    | ((0x20U & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                 << 3U)) 
                                       | ((0x10U & 
                                           ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                            >> 7U)) 
                                          | (0xeU & 
                                             ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                              >> 2U)))))));
    vlSelf->compress_unit__DOT__imm_jump = ((0xff000U 
                                             & ((- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                               >> 0xcU)))) 
                                                << 0xcU)) 
                                            | ((0x800U 
                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                      << 2U)) 
                                                  | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0))));
    if (vlSelf->next_comp16) {
        if ((2U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
            if ((1U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                vlSelf->compressed_inst_out = vlSelf->inst;
            } else if ((0x8000U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                if ((0x4000U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                    vlSelf->compressed_inst_out = (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                    ? 0x13U
                                                    : 
                                                   (0x12023U 
                                                    | ((0xfe000000U 
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
                                                                   & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))));
                } else if ((0x2000U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                    vlSelf->compressed_inst_out = 0x13U;
                } else if ((0x1000U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                    if ((0x1000U & (IData)(vlSelf->compress_unit__DOT__comp_inst))) {
                        vlSelf->compressed_inst_out 
                            = ((IData)((0U == (0xffcU 
                                               & (IData)(vlSelf->compress_unit__DOT__comp_inst))))
                                ? 0x100073U : ((IData)(
                                                       ((0U 
                                                         == 
                                                         (0x7cU 
                                                          & (IData)(vlSelf->compress_unit__DOT__comp_inst))) 
                                                        & (0U 
                                                           != 
                                                           (0x1fU 
                                                            & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                               >> 7U)))))
                                                ? (0xe7U 
                                                   | (0xf8000U 
                                                      & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                         << 8U)))
                                                : (0x33U 
                                                   | ((0x1f00000U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          << 0x12U)) 
                                                      | ((0xf8000U 
                                                          & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                             << 8U)) 
                                                         | (0xf80U 
                                                            & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))));
                    }
                } else {
                    vlSelf->compressed_inst_out = ((IData)(
                                                           ((0U 
                                                             == 
                                                             (0x7cU 
                                                              & (IData)(vlSelf->compress_unit__DOT__comp_inst))) 
                                                            & (0U 
                                                               != 
                                                               (0x1fU 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   >> 7U)))))
                                                    ? 
                                                   (0x67U 
                                                    | (0xf8000U 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          << 8U)))
                                                    : 
                                                   (0x33U 
                                                    | ((0x1f00000U 
                                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | (0xf80U 
                                                          & (IData)(vlSelf->compress_unit__DOT__comp_inst)))));
                }
            } else {
                vlSelf->compressed_inst_out = ((0x4000U 
                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                ? (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                    ? 0x13U
                                                    : 
                                                   (0x10003U 
                                                    | ((0xfff00000U 
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
                                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))
                                                : (
                                                   (0x2000U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                    ? 0x13U
                                                    : 
                                                   (0x1013U 
                                                    | ((0x1f00000U 
                                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | ((0xf8000U 
                                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                              << 8U)) 
                                                          | (0xf80U 
                                                             & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))));
            }
        } else {
            vlSelf->compressed_inst_out = ((1U & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                            ? ((0x8000U 
                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                ? (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                    ? 
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                     ? 
                                                    (0x41000U 
                                                     | ((0x80000000U 
                                                         & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                            << 0x13U)) 
                                                        | ((0x7e000000U 
                                                            & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                               << 0x15U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                  << 8U)) 
                                                              | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0)))))
                                                     : 
                                                    (0x40000U 
                                                     | ((0x80000000U 
                                                         & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                            << 0x13U)) 
                                                        | ((0x7e000000U 
                                                            & ((IData)(vlSelf->compress_unit__DOT__comp_imm_branch) 
                                                               << 0x15U)) 
                                                           | ((0x38000U 
                                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                  << 8U)) 
                                                              | (IData)(vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0))))))
                                                    : 
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                     ? 
                                                    (0x6fU 
                                                     | ((0x80000000U 
                                                         & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                            << 0x13U)) 
                                                        | (((IData)(vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0) 
                                                            << 0x15U) 
                                                           | ((0x100000U 
                                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                  << 0xcU)) 
                                                              | (0xff000U 
                                                                 & (vlSelf->compress_unit__DOT__imm_jump 
                                                                    << 1U))))))
                                                     : 
                                                    ((0x800U 
                                                      & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                      ? 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                       ? 
                                                      ((0x40U 
                                                        & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                        ? 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                         ? 
                                                        (0x847433U 
                                                         | ((0x700000U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))
                                                         : 
                                                        (0x846433U 
                                                         | ((0x700000U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                         ? 
                                                        (0x844433U 
                                                         | ((0x700000U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))
                                                         : 
                                                        (0x40840433U 
                                                         | ((0x700000U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 0x12U)) 
                                                            | ((0x38000U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   << 8U)) 
                                                               | (0x380U 
                                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))))
                                                       : 
                                                      (0x47413U 
                                                       | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                                           << 0x14U) 
                                                          | ((0x38000U 
                                                              & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                 << 8U)) 
                                                             | (0x380U 
                                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))
                                                      : 
                                                     ((0x400U 
                                                       & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                       ? 
                                                      (0x40000000U 
                                                       | ((0x1f00000U 
                                                           & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                              << 0x12U)) 
                                                          | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0))
                                                       : 
                                                      ((0x1f00000U 
                                                        & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                           << 0x12U)) 
                                                       | vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0)))))
                                                : (
                                                   (0x4000U 
                                                    & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                    ? 
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                     ? 
                                                    ((IData)(
                                                             ((0x100U 
                                                               == 
                                                               (0xf80U 
                                                                & (IData)(vlSelf->compress_unit__DOT__comp_inst))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                     >> 7U)))))
                                                      ? 
                                                     (0x137U 
                                                      | (((- (IData)(
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
                                                                           << 0xaU))))))))
                                                      : 
                                                     (0x37U 
                                                      | ((((- (IData)(
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
                                                            & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))
                                                     : 
                                                    (0x13U 
                                                     | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                                         << 0x14U) 
                                                        | (0xf80U 
                                                           & (IData)(vlSelf->compress_unit__DOT__comp_inst)))))
                                                    : 
                                                   ((0x2000U 
                                                     & (IData)(vlSelf->compress_unit__DOT__comp_inst))
                                                     ? 
                                                    (0xefU 
                                                     | ((0x80000000U 
                                                         & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                            << 0x13U)) 
                                                        | (((IData)(vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0) 
                                                            << 0x15U) 
                                                           | ((0x100000U 
                                                               & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                  << 0xcU)) 
                                                              | (0xff000U 
                                                                 & (vlSelf->compress_unit__DOT__imm_jump 
                                                                    << 1U))))))
                                                     : 
                                                    ((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                          >> 7U)))
                                                      ? 0x13U
                                                      : 
                                                     (0x13U 
                                                      | (((IData)(vlSelf->compress_unit__DOT__imm_Li) 
                                                          << 0x14U) 
                                                         | ((0xf8000U 
                                                             & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                << 8U)) 
                                                            | ((0x7000U 
                                                                & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                                   >> 1U)) 
                                                               | (0xf80U 
                                                                  & (IData)(vlSelf->compress_unit__DOT__comp_inst))))))))))
                                            : ((0U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                    >> 0xdU)))
                                                ? (0x10413U 
                                                   | ((0xfff00000U 
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
                                                               << 5U)))))
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                        >> 0xdU)))
                                                    ? 
                                                   (0x40403U 
                                                    | ((0xfff00000U 
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
                                                                   << 5U))))))
                                                    : 
                                                   ((6U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->compress_unit__DOT__comp_inst) 
                                                         >> 0xdU)))
                                                     ? 
                                                    (0x842023U 
                                                     | ((0xfe000000U 
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
                                                                    << 9U))))))
                                                     : 0x13U))));
        }
    } else {
        vlSelf->compressed_inst_out = vlSelf->inst;
    }
}

void Vcompress_unit___024root___eval_ico(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vcompress_unit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vcompress_unit___024root___eval_act(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_act\n"); );
}

void Vcompress_unit___024root___eval_nba(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_nba\n"); );
}

void Vcompress_unit___024root___eval_triggers__ico(Vcompress_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__ico(Vcompress_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcompress_unit___024root___eval_triggers__act(Vcompress_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__act(Vcompress_unit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__nba(Vcompress_unit___024root* vlSelf);
#endif  // VL_DEBUG

void Vcompress_unit___024root___eval(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<0> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vcompress_unit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vcompress_unit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("compress_unit.sv", 2, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vcompress_unit___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vcompress_unit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vcompress_unit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("compress_unit.sv", 2, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vcompress_unit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vcompress_unit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("compress_unit.sv", 2, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vcompress_unit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vcompress_unit___024root___eval_debug_assertions(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->pc & 0xfeU))) {
        Verilated::overWidthError("pc");}
}
#endif  // VL_DEBUG
