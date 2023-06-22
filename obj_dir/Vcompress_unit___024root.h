// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcompress_unit.h for the primary calling header

#ifndef VERILATED_VCOMPRESS_UNIT___024ROOT_H_
#define VERILATED_VCOMPRESS_UNIT___024ROOT_H_  // guard

#include "verilated.h"

class Vcompress_unit__Syms;

class Vcompress_unit___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(pc,0,0);
    VL_OUT8(next_comp16,0,0);
    CData/*4:0*/ __VdfgTmp_h6bec7bf5__0;
    CData/*0:0*/ __VactContinue;
    SData/*11:0*/ compress_unit__DOT__imm_Li;
    SData/*15:0*/ compress_unit__DOT__comp_inst;
    SData/*11:0*/ compress_unit__DOT__comp_imm_branch;
    SData/*9:0*/ compress_unit__DOT____VdfgTmp_h807e62e8__0;
    SData/*11:0*/ compress_unit__DOT____VdfgTmp_h0c33eaff__0;
    VL_IN(inst,31,0);
    VL_OUT(compressed_inst_out,31,0);
    IData/*19:0*/ compress_unit__DOT__imm_jump;
    IData/*31:0*/ compress_unit__DOT__inst_r_type;
    IData/*31:0*/ compress_unit__DOT__inst_r_comp_type;
    IData/*31:0*/ compress_unit__DOT__inst_nop;
    IData/*19:0*/ compress_unit__DOT____VdfgTmp_h6541bdc6__0;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcompress_unit__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcompress_unit___024root(Vcompress_unit__Syms* symsp, const char* v__name);
    ~Vcompress_unit___024root();
    VL_UNCOPYABLE(Vcompress_unit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
