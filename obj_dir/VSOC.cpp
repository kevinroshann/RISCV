// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSOC__pch.h"

//============================================================
// Constructors

VSOC::VSOC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSOC__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , RESET{vlSymsp->TOP.RESET}
    , LEDS{vlSymsp->TOP.LEDS}
    , RXD{vlSymsp->TOP.RXD}
    , TXD{vlSymsp->TOP.TXD}
    , SERVO_PWM1{vlSymsp->TOP.SERVO_PWM1}
    , SERVO_PWM2{vlSymsp->TOP.SERVO_PWM2}
    , SERVO_PWM3{vlSymsp->TOP.SERVO_PWM3}
    , SERVO_PWM4{vlSymsp->TOP.SERVO_PWM4}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSOC::VSOC(const char* _vcname__)
    : VSOC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSOC::~VSOC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSOC___024root___eval_debug_assertions(VSOC___024root* vlSelf);
#endif  // VL_DEBUG
void VSOC___024root___eval_static(VSOC___024root* vlSelf);
void VSOC___024root___eval_initial(VSOC___024root* vlSelf);
void VSOC___024root___eval_settle(VSOC___024root* vlSelf);
void VSOC___024root___eval(VSOC___024root* vlSelf);

void VSOC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSOC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSOC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSOC___024root___eval_static(&(vlSymsp->TOP));
        VSOC___024root___eval_initial(&(vlSymsp->TOP));
        VSOC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSOC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSOC::eventsPending() { return false; }

uint64_t VSOC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSOC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSOC___024root___eval_final(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC::final() {
    VSOC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSOC::hierName() const { return vlSymsp->name(); }
const char* VSOC::modelName() const { return "VSOC"; }
unsigned VSOC::threads() const { return 1; }
void VSOC::prepareClone() const { contextp()->prepareClone(); }
void VSOC::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VSOC::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VSOC::trace()' called on model that was Verilated without --trace option");
}
