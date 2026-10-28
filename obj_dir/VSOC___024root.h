// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSOC.h for the primary calling header

#ifndef VERILATED_VSOC___024ROOT_H_
#define VERILATED_VSOC___024ROOT_H_  // guard

#include "verilated.h"


class VSOC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSOC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(RESET,0,0);
    VL_OUT8(LEDS,4,0);
    VL_IN8(RXD,0,0);
    VL_OUT8(TXD,0,0);
    VL_OUT8(SERVO_PWM1,0,0);
    VL_OUT8(SERVO_PWM2,0,0);
    VL_OUT8(SERVO_PWM3,0,0);
    VL_OUT8(SERVO_PWM4,0,0);
    CData/*0:0*/ SOC__DOT__resetn;
    CData/*3:0*/ SOC__DOT__mem_wmask;
    CData/*3:0*/ SOC__DOT____Vcellinp__RAM__mem_wmask;
    CData/*0:0*/ SOC__DOT__uart_valid;
    CData/*0:0*/ SOC__DOT__uart_ready;
    CData/*3:0*/ SOC__DOT____Vcellout__SERVOS__servo_pwm;
    CData/*3:0*/ SOC__DOT____Vcellinp__SERVOS__write_en;
    CData/*0:0*/ SOC__DOT__CPU__DOT__isLoad;
    CData/*0:0*/ SOC__DOT__CPU__DOT__isSYSTEM;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rs1Id;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rs2Id;
    CData/*4:0*/ SOC__DOT__CPU__DOT__rdId;
    CData/*0:0*/ SOC__DOT__CPU__DOT__writeBackEn;
    CData/*2:0*/ SOC__DOT__CPU__DOT__state;
    CData/*6:0*/ SOC__DOT__CPU__DOT____VdfgTmp_h7bd74d72__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hee29b58d__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hedd25638__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hedd1d91c__0;
    CData/*7:0*/ SOC__DOT__RAM__DOT____Vlvbound_hee286227__0;
    CData/*7:0*/ SOC__DOT__UART__DOT__cnt;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__RESET__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ SOC__DOT__UART__DOT__data;
    SData/*15:0*/ SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt;
    IData/*31:0*/ SOC__DOT__mem_addr;
    IData/*31:0*/ SOC__DOT__mem_rdata;
    IData/*31:0*/ SOC__DOT__mem_wdata;
    IData/*31:0*/ SOC__DOT__RAM_rdata;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PC;
    IData/*31:0*/ SOC__DOT__CPU__DOT__instr;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs1;
    IData/*31:0*/ SOC__DOT__CPU__DOT__rs2;
    IData/*31:0*/ SOC__DOT__CPU__DOT__writeBackData;
    IData/*31:0*/ SOC__DOT__CPU__DOT__nextPC;
    IData/*31:0*/ SOC__DOT__SERVOS__DOT__clk_counter;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__0__x;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> SOC__DOT__CPU__DOT__RegisterBank;
    VlUnpacked<IData/*31:0*/, 1536> SOC__DOT__RAM__DOT__MEM;
    VlUnpacked<IData/*31:0*/, 4> SOC__DOT__SERVOS__DOT__target_duty;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSOC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSOC___024root(VSOC__Syms* symsp, const char* v__name);
    ~VSOC___024root();
    VL_UNCOPYABLE(VSOC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
