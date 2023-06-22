// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcompress_unit.h"
#include "Vcompress_unit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vcompress_unit::Vcompress_unit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcompress_unit__Syms(contextp(), _vcname__, this)}
    , pc{vlSymsp->TOP.pc}
    , next_comp16{vlSymsp->TOP.next_comp16}
    , inst{vlSymsp->TOP.inst}
    , compressed_inst_out{vlSymsp->TOP.compressed_inst_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcompress_unit::Vcompress_unit(const char* _vcname__)
    : Vcompress_unit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcompress_unit::~Vcompress_unit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcompress_unit___024root___eval_debug_assertions(Vcompress_unit___024root* vlSelf);
#endif  // VL_DEBUG
void Vcompress_unit___024root___eval_static(Vcompress_unit___024root* vlSelf);
void Vcompress_unit___024root___eval_initial(Vcompress_unit___024root* vlSelf);
void Vcompress_unit___024root___eval_settle(Vcompress_unit___024root* vlSelf);
void Vcompress_unit___024root___eval(Vcompress_unit___024root* vlSelf);

void Vcompress_unit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcompress_unit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcompress_unit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcompress_unit___024root___eval_static(&(vlSymsp->TOP));
        Vcompress_unit___024root___eval_initial(&(vlSymsp->TOP));
        Vcompress_unit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcompress_unit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcompress_unit::eventsPending() { return false; }

uint64_t Vcompress_unit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcompress_unit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcompress_unit___024root___eval_final(Vcompress_unit___024root* vlSelf);

VL_ATTR_COLD void Vcompress_unit::final() {
    Vcompress_unit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcompress_unit::hierName() const { return vlSymsp->name(); }
const char* Vcompress_unit::modelName() const { return "Vcompress_unit"; }
unsigned Vcompress_unit::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vcompress_unit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vcompress_unit___024root__trace_init_top(Vcompress_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vcompress_unit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcompress_unit___024root*>(voidSelf);
    Vcompress_unit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vcompress_unit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vcompress_unit___024root__trace_register(Vcompress_unit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vcompress_unit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vcompress_unit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vcompress_unit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
