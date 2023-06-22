// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcompress_unit.h for the primary calling header

#include "verilated.h"

#include "Vcompress_unit__Syms.h"
#include "Vcompress_unit___024root.h"

VL_ATTR_COLD void Vcompress_unit___024root___eval_static(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vcompress_unit___024root___eval_initial(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_initial\n"); );
}

VL_ATTR_COLD void Vcompress_unit___024root___eval_final(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vcompress_unit___024root___eval_triggers__stl(Vcompress_unit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__stl(Vcompress_unit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___eval_stl(Vcompress_unit___024root* vlSelf);

VL_ATTR_COLD void Vcompress_unit___024root___eval_settle(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vcompress_unit___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vcompress_unit___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("compress_unit.sv", 2, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vcompress_unit___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__stl(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vcompress_unit___024root___ico_sequent__TOP__0(Vcompress_unit___024root* vlSelf);

VL_ATTR_COLD void Vcompress_unit___024root___eval_stl(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vcompress_unit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__ico(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__act(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcompress_unit___024root___dump_triggers__nba(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcompress_unit___024root___ctor_var_reset(Vcompress_unit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcompress_unit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(1);
    vlSelf->next_comp16 = VL_RAND_RESET_I(1);
    vlSelf->compressed_inst_out = VL_RAND_RESET_I(32);
    vlSelf->compress_unit__DOT__imm_Li = VL_RAND_RESET_I(12);
    vlSelf->compress_unit__DOT__imm_jump = VL_RAND_RESET_I(20);
    vlSelf->compress_unit__DOT__comp_inst = VL_RAND_RESET_I(16);
    vlSelf->compress_unit__DOT__comp_imm_branch = VL_RAND_RESET_I(12);
    vlSelf->compress_unit__DOT__inst_r_type = VL_RAND_RESET_I(32);
    vlSelf->compress_unit__DOT__inst_r_comp_type = VL_RAND_RESET_I(32);
    vlSelf->compress_unit__DOT__inst_nop = VL_RAND_RESET_I(32);
    vlSelf->compress_unit__DOT____VdfgTmp_h807e62e8__0 = 0;
    vlSelf->compress_unit__DOT____VdfgTmp_h0c33eaff__0 = 0;
    vlSelf->compress_unit__DOT____VdfgTmp_h6541bdc6__0 = 0;
    vlSelf->__VdfgTmp_h6bec7bf5__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
