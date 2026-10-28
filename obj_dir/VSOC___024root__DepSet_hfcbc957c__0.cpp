// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"
#include "VSOC___024root.h"

void VSOC___024root___eval_act(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*0:0*/, 512> VSOC__ConstPool__TABLE_h01624aed_0;

VL_INLINE_OPT void VSOC___024root___nba_sequent__TOP__0(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ SOC__DOT____VdfgTmp_h29b8cd80__0;
    SOC__DOT____VdfgTmp_h29b8cd80__0 = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__Iimm;
    SOC__DOT__CPU__DOT__Iimm = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluIn2;
    SOC__DOT__CPU__DOT__aluIn2 = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__aluPlus;
    SOC__DOT__CPU__DOT__aluPlus = 0;
    QData/*32:0*/ SOC__DOT__CPU__DOT__aluMinus;
    SOC__DOT__CPU__DOT__aluMinus = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LT;
    SOC__DOT__CPU__DOT__LT = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter_in;
    SOC__DOT__CPU__DOT__shifter_in = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__shifter;
    SOC__DOT__CPU__DOT__shifter = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__leftshift;
    SOC__DOT__CPU__DOT__leftshift = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__takeBranch;
    SOC__DOT__CPU__DOT__takeBranch = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__PCplusImm;
    SOC__DOT__CPU__DOT__PCplusImm = 0;
    IData/*31:0*/ SOC__DOT__CPU__DOT__loadstore_addr;
    SOC__DOT__CPU__DOT__loadstore_addr = 0;
    SData/*15:0*/ SOC__DOT__CPU__DOT__LOAD_halfword;
    SOC__DOT__CPU__DOT__LOAD_halfword = 0;
    CData/*7:0*/ SOC__DOT__CPU__DOT__LOAD_byte;
    SOC__DOT__CPU__DOT__LOAD_byte = 0;
    CData/*0:0*/ SOC__DOT__CPU__DOT__LOAD_sign;
    SOC__DOT__CPU__DOT__LOAD_sign = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x = 0;
    SData/*8:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vdly__SOC__DOT__CPU__DOT__state;
    __Vdly__SOC__DOT__CPU__DOT__state = 0;
    CData/*4:0*/ __Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0;
    __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0;
    __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0;
    __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0;
    __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0 = 0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1;
    __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1;
    __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1;
    __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1 = 0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2;
    __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2;
    __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2;
    __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2 = 0;
    SData/*10:0*/ __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3;
    __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3;
    __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    CData/*7:0*/ __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3;
    __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3 = 0;
    CData/*0:0*/ __Vdly__SOC__DOT__uart_ready;
    __Vdly__SOC__DOT__uart_ready = 0;
    CData/*7:0*/ __Vdly__SOC__DOT__UART__DOT__cnt;
    __Vdly__SOC__DOT__UART__DOT__cnt = 0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v0;
    __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v0;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v1;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v1 = 0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v2;
    __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v2 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v2;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v2 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v3;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v3 = 0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v4;
    __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v4 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v4;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v4 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v5;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v5 = 0;
    IData/*31:0*/ __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v6;
    __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v6 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v6;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v6 = 0;
    CData/*0:0*/ __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v7;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v7 = 0;
    IData/*31:0*/ __Vdly__SOC__DOT__SERVOS__DOT__clk_counter;
    __Vdly__SOC__DOT__SERVOS__DOT__clk_counter = 0;
    // Body
    if (VL_UNLIKELY(vlSelf->SOC__DOT__uart_valid)) {
        VL_WRITEF_NX("%c",0,8,(0xffU & vlSelf->SOC__DOT__mem_wdata));
        if (0x80000001U) { VL_FFLUSH_I(0x80000001U); }
    }
    __Vdly__SOC__DOT__SERVOS__DOT__clk_counter = vlSelf->SOC__DOT__SERVOS__DOT__clk_counter;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v0 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v1 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v2 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v3 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v4 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v5 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v6 = 0U;
    __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v7 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2 = 0U;
    __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3 = 0U;
    __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0 = 0U;
    __Vdly__SOC__DOT__CPU__DOT__state = vlSelf->SOC__DOT__CPU__DOT__state;
    __Vdly__SOC__DOT__UART__DOT__cnt = vlSelf->SOC__DOT__UART__DOT__cnt;
    __Vdly__SOC__DOT__uart_ready = vlSelf->SOC__DOT__uart_ready;
    __Vdly__SOC__DOT__SERVOS__DOT__clk_counter = ((1U 
                                                   & ((~ (IData)(
                                                                 (0xffffU 
                                                                  == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt)))) 
                                                      | (0x30d3fU 
                                                         <= vlSelf->SOC__DOT__SERVOS__DOT__clk_counter)))
                                                   ? 0U
                                                   : 
                                                  ((IData)(1U) 
                                                   + vlSelf->SOC__DOT__SERVOS__DOT__clk_counter));
    if ((1U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee29b58d__0 
            = (0xffU & vlSelf->SOC__DOT__mem_wdata);
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee29b58d__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0 = 0U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((2U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd25638__0 
            = (0xffU & (vlSelf->SOC__DOT__mem_wdata 
                        >> 8U));
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd25638__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1 = 8U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((4U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd1d91c__0 
            = (0xffU & (vlSelf->SOC__DOT__mem_wdata 
                        >> 0x10U));
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd1d91c__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2 = 0x10U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((8U & (IData)(vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask))) {
        vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee286227__0 
            = (vlSelf->SOC__DOT__mem_wdata >> 0x18U);
        if ((0x5ffU >= (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                  >> 2U)))) {
            __Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3 
                = vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee286227__0;
            __Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3 = 1U;
            __Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3 = 0x18U;
            __Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3 
                = (0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                             >> 2U));
        }
    }
    if ((IData)((((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                  >> 7U) & (~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data))))))) {
        __Vdly__SOC__DOT__uart_ready = 1U;
    } else if (((IData)(vlSelf->SOC__DOT__uart_valid) 
                & (IData)(vlSelf->SOC__DOT__uart_ready))) {
        __Vdly__SOC__DOT__uart_ready = 0U;
    }
    __Vdly__SOC__DOT__UART__DOT__cnt = (((IData)(vlSelf->SOC__DOT__uart_ready) 
                                         | ((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                                            >> 7U))
                                         ? 0x56U : 
                                        (0xffU & ((IData)(vlSelf->SOC__DOT__UART__DOT__cnt) 
                                                  - (IData)(1U))));
    if ((0x80U & (IData)(vlSelf->SOC__DOT__UART__DOT__cnt))) {
        vlSelf->SOC__DOT__UART__DOT__data = (0x1ffU 
                                             & ((IData)(vlSelf->SOC__DOT__UART__DOT__data) 
                                                >> 1U));
    } else if (((IData)(vlSelf->SOC__DOT__uart_valid) 
                & (IData)(vlSelf->SOC__DOT__uart_ready))) {
        vlSelf->SOC__DOT__UART__DOT__data = (0x200U 
                                             | (0x1feU 
                                                & (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                   << 1U)));
    }
    if ((IData)(((0x400004U == (0x400004U & vlSelf->SOC__DOT__mem_addr)) 
                 & (0U != (IData)(vlSelf->SOC__DOT__mem_wmask))))) {
        vlSelf->LEDS = (0x1fU & vlSelf->SOC__DOT__mem_wdata);
    }
    vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm 
        = ((0xeU & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm)) 
           | ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt)) 
              && (vlSelf->SOC__DOT__SERVOS__DOT__clk_counter 
                  < vlSelf->SOC__DOT__SERVOS__DOT__target_duty
                  [0U])));
    vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm 
        = ((0xdU & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm)) 
           | (((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt)) 
               && (vlSelf->SOC__DOT__SERVOS__DOT__clk_counter 
                   < vlSelf->SOC__DOT__SERVOS__DOT__target_duty
                   [1U])) << 1U));
    vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm 
        = ((0xbU & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm)) 
           | (((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt)) 
               && (vlSelf->SOC__DOT__SERVOS__DOT__clk_counter 
                   < vlSelf->SOC__DOT__SERVOS__DOT__target_duty
                   [2U])) << 2U));
    vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm 
        = ((7U & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm)) 
           | (((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt)) 
               && (vlSelf->SOC__DOT__SERVOS__DOT__clk_counter 
                   < vlSelf->SOC__DOT__SERVOS__DOT__target_duty
                   [3U])) << 3U));
    if (((~ (vlSelf->SOC__DOT__mem_addr >> 0x16U)) 
         & ((0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
            | (4U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))))) {
        vlSelf->SOC__DOT__RAM_rdata = ((0x5ffU >= (0x7ffU 
                                                   & (vlSelf->SOC__DOT__mem_addr 
                                                      >> 2U)))
                                        ? vlSelf->SOC__DOT__RAM__DOT__MEM
                                       [(0x7ffU & (vlSelf->SOC__DOT__mem_addr 
                                                   >> 2U))]
                                        : 0U);
    }
    vlSelf->SOC__DOT__UART__DOT__cnt = __Vdly__SOC__DOT__UART__DOT__cnt;
    vlSelf->SOC__DOT__uart_ready = __Vdly__SOC__DOT__uart_ready;
    vlSelf->SOC__DOT__SERVOS__DOT__clk_counter = __Vdly__SOC__DOT__SERVOS__DOT__clk_counter;
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((1U & (IData)(vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en))) {
            __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v0 
                = vlSelf->SOC__DOT__mem_wdata;
            __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v0 = 1U;
        }
    } else {
        __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v1 = 1U;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v0) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[0U] 
            = __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v0;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v1) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[0U] = 0x2710U;
    }
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((2U & (IData)(vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en))) {
            __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v2 
                = vlSelf->SOC__DOT__mem_wdata;
            __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v2 = 1U;
        }
    } else {
        __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v3 = 1U;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v2) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[1U] 
            = __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v2;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v3) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[1U] = 0x2710U;
    }
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((4U & (IData)(vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en))) {
            __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v4 
                = vlSelf->SOC__DOT__mem_wdata;
            __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v4 = 1U;
        }
    } else {
        __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v5 = 1U;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v4) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[2U] 
            = __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v4;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v5) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[2U] = 0x2710U;
    }
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((8U & (IData)(vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en))) {
            __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v6 
                = vlSelf->SOC__DOT__mem_wdata;
            __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v6 = 1U;
        }
    } else {
        __Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v7 = 1U;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v6) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[3U] 
            = __Vdlyvval__SOC__DOT__SERVOS__DOT__target_duty__v6;
    }
    if (__Vdlyvset__SOC__DOT__SERVOS__DOT__target_duty__v7) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[3U] = 0x2710U;
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v0) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v0))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v1) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v1) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v1))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v2) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v2) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v2))));
    }
    if (__Vdlyvset__SOC__DOT__RAM__DOT__MEM__v3) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3))) 
                & vlSelf->SOC__DOT__RAM__DOT__MEM[__Vdlyvdim0__SOC__DOT__RAM__DOT__MEM__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__SOC__DOT__RAM__DOT__MEM__v3) 
                                   << (IData)(__Vdlyvlsb__SOC__DOT__RAM__DOT__MEM__v3))));
    }
    vlSelf->TXD = (1U & ((~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data)))) 
                         | (IData)(vlSelf->SOC__DOT__UART__DOT__data)));
    if ((0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt))) {
        if ((0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 1U;
        } else if ((1U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            vlSelf->SOC__DOT__CPU__DOT__instr = vlSelf->SOC__DOT__mem_rdata;
            __Vdly__SOC__DOT__CPU__DOT__state = 2U;
        } else if ((2U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            vlSelf->SOC__DOT__CPU__DOT__rs1 = vlSelf->SOC__DOT__CPU__DOT__RegisterBank
                [vlSelf->SOC__DOT__CPU__DOT__rs1Id];
            __Vdly__SOC__DOT__CPU__DOT__state = 3U;
            vlSelf->SOC__DOT__CPU__DOT__rs2 = vlSelf->SOC__DOT__CPU__DOT__RegisterBank
                [vlSelf->SOC__DOT__CPU__DOT__rs2Id];
        } else if ((3U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            if (VL_UNLIKELY(vlSelf->SOC__DOT__CPU__DOT__isSYSTEM)) {
                VL_FINISH_MT("step20.v", 286, "");
            }
            if ((1U & (~ (IData)(vlSelf->SOC__DOT__CPU__DOT__isSYSTEM)))) {
                vlSelf->SOC__DOT__CPU__DOT__PC = vlSelf->SOC__DOT__CPU__DOT__nextPC;
            }
            __Vdly__SOC__DOT__CPU__DOT__state = ((IData)(vlSelf->SOC__DOT__CPU__DOT__isLoad)
                                                  ? 4U
                                                  : 
                                                 ((0x23U 
                                                   == (IData)(vlSelf->SOC__DOT__CPU__DOT____VdfgTmp_h7bd74d72__0))
                                                   ? 6U
                                                   : 0U));
        } else if ((4U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 5U;
        } else if ((5U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        } else if ((6U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) {
            __Vdly__SOC__DOT__CPU__DOT__state = 0U;
        }
        if (((IData)(vlSelf->SOC__DOT__CPU__DOT__writeBackEn) 
             & (0U != (IData)(vlSelf->SOC__DOT__CPU__DOT__rdId)))) {
            __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->SOC__DOT__CPU__DOT__writeBackData;
            __Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0 = 1U;
            __Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0 
                = vlSelf->SOC__DOT__CPU__DOT__rdId;
        }
    } else {
        vlSelf->SOC__DOT__CPU__DOT__PC = 0U;
        __Vdly__SOC__DOT__CPU__DOT__state = 0U;
    }
    vlSelf->SERVO_PWM1 = (1U & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm));
    vlSelf->SERVO_PWM2 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 1U));
    vlSelf->SERVO_PWM3 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 2U));
    vlSelf->SERVO_PWM4 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 3U));
    if (__Vdlyvset__SOC__DOT__CPU__DOT__RegisterBank__v0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vdlyvdim0__SOC__DOT__CPU__DOT__RegisterBank__v0] 
            = __Vdlyvval__SOC__DOT__CPU__DOT__RegisterBank__v0;
    }
    vlSelf->SOC__DOT__CPU__DOT__state = __Vdly__SOC__DOT__CPU__DOT__state;
    vlSelf->SOC__DOT__CPU__DOT__rdId = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                 >> 7U));
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0xfU));
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = (0x1fU & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                  >> 0x14U));
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = (0x73U == 
                                            (0x7fU 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT__isLoad = (3U == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr));
    vlSelf->SOC__DOT__CPU__DOT____VdfgTmp_h7bd74d72__0 
        = (0x7fU & vlSelf->SOC__DOT__CPU__DOT__instr);
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = (((~ 
                                                 ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                                  | (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)))) 
                                                & (3U 
                                                   == (IData)(vlSelf->SOC__DOT__CPU__DOT__state))) 
                                               | (5U 
                                                  == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)));
    SOC__DOT__CPU__DOT__PCplusImm = (vlSelf->SOC__DOT__CPU__DOT__PC 
                                     + ((8U & vlSelf->SOC__DOT__CPU__DOT__instr)
                                         ? (((- (IData)(
                                                        (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                         >> 0x1fU))) 
                                             << 0x14U) 
                                            | ((0xff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr) 
                                               | ((0x800U 
                                                   & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)))))
                                         : ((0x10U 
                                             & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             ? (0xfffff000U 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)
                                             : (((- (IData)(
                                                            (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                             >> 0x1fU))) 
                                                 << 0xcU) 
                                                | ((0x800U 
                                                    & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                            >> 7U))))))));
    SOC__DOT__CPU__DOT__shifter_in = ((1U == (7U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ([&]() {
                vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                    = vlSelf->SOC__DOT__CPU__DOT__rs1;
                vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout 
                    = ((vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                        << 0x1fU) | ((0x40000000U & 
                                      (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                       << 0x1dU)) | 
                                     ((0x20000000U 
                                       & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                          << 0x1bU)) 
                                      | ((0x10000000U 
                                          & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                             << 0x19U)) 
                                         | ((0x8000000U 
                                             & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                << 0x17U)) 
                                            | ((0x4000000U 
                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                   << 0x15U)) 
                                               | ((0x2000000U 
                                                   & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                      << 0x13U)) 
                                                  | ((0x1000000U 
                                                      & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                         << 0x11U)) 
                                                     | ((0x800000U 
                                                         & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                            << 0xfU)) 
                                                        | ((0x400000U 
                                                            & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                               << 0xdU)) 
                                                           | ((0x200000U 
                                                               & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                  << 0xbU)) 
                                                              | ((0x100000U 
                                                                  & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                     << 9U)) 
                                                                 | ((0x80000U 
                                                                     & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                        << 7U)) 
                                                                    | ((0x40000U 
                                                                        & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                           << 5U)) 
                                                                       | ((0x20000U 
                                                                           & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                              << 3U)) 
                                                                          | ((0x10000U 
                                                                              & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                << 1U)) 
                                                                             | ((0x8000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1dU)) 
                                                                                | (vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
            }(), vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout)
                                       : vlSelf->SOC__DOT__CPU__DOT__rs1);
    SOC__DOT__CPU__DOT__Iimm = (((- (IData)((vlSelf->SOC__DOT__CPU__DOT__instr 
                                             >> 0x1fU))) 
                                 << 0xbU) | (0x7ffU 
                                             & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                >> 0x14U)));
    SOC__DOT__CPU__DOT__aluIn2 = (((0x33U == (0x7fU 
                                              & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                   | (0x63U == (0x7fU 
                                                & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                   : SOC__DOT__CPU__DOT__Iimm);
    SOC__DOT__CPU__DOT__loadstore_addr = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                          + ((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr))
                                              ? (((- (IData)(
                                                             (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                              >> 0x1fU))) 
                                                  << 0xbU) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 7U))))
                                              : SOC__DOT__CPU__DOT__Iimm));
    SOC__DOT__CPU__DOT__aluPlus = (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                   + SOC__DOT__CPU__DOT__aluIn2);
    SOC__DOT__CPU__DOT__shifter = (IData)((0x1ffffffffULL 
                                           & VL_SHIFTRS_QQI(33,33,5, 
                                                            (((QData)((IData)(
                                                                              ((vlSelf->SOC__DOT__CPU__DOT__instr 
                                                                                >> 0x1eU) 
                                                                               & (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                                                >> 0x1fU)))) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(SOC__DOT__CPU__DOT__shifter_in))), 
                                                            (0x1fU 
                                                             & SOC__DOT__CPU__DOT__aluIn2))));
    SOC__DOT__CPU__DOT__aluMinus = (0x1ffffffffULL 
                                    & (1ULL + ((0x100000000ULL 
                                                | (QData)((IData)(
                                                                  (~ SOC__DOT__CPU__DOT__aluIn2)))) 
                                               + (QData)((IData)(vlSelf->SOC__DOT__CPU__DOT__rs1)))));
    vlSelf->SOC__DOT__mem_wdata = ((((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                      ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                      : ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                          ? (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                             >> 8U)
                                          : (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                             >> 0x18U))) 
                                    << 0x18U) | ((0xff0000U 
                                                  & (((2U 
                                                       & SOC__DOT__CPU__DOT__loadstore_addr)
                                                       ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                       : 
                                                      (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                       >> 0x10U)) 
                                                     << 0x10U)) 
                                                 | ((0xff00U 
                                                     & (((1U 
                                                          & SOC__DOT__CPU__DOT__loadstore_addr)
                                                          ? vlSelf->SOC__DOT__CPU__DOT__rs2
                                                          : 
                                                         (vlSelf->SOC__DOT__CPU__DOT__rs2 
                                                          >> 8U)) 
                                                        << 8U)) 
                                                    | (0xffU 
                                                       & vlSelf->SOC__DOT__CPU__DOT__rs2))));
    vlSelf->SOC__DOT__mem_wmask = ((- (IData)((6U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))) 
                                   & ((0U == (3U & 
                                              (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xcU)))
                                       ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 8U
                                               : 4U)
                                           : ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 2U
                                               : 1U))
                                       : ((1U == (3U 
                                                  & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                     >> 0xcU)))
                                           ? ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? 0xcU
                                               : 3U)
                                           : 0xfU)));
    vlSelf->SOC__DOT__mem_addr = (((1U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)) 
                                   | (0U == (IData)(vlSelf->SOC__DOT__CPU__DOT__state)))
                                   ? vlSelf->SOC__DOT__CPU__DOT__PC
                                   : SOC__DOT__CPU__DOT__loadstore_addr);
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__x = SOC__DOT__CPU__DOT__shifter;
    __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout 
        = ((__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
            << 0x1fU) | ((0x40000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                         << 0x1dU)) 
                         | ((0x20000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                            << 0x1bU)) 
                            | ((0x10000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                               << 0x19U)) 
                               | ((0x8000000U & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1dU)) 
                                                                                | (__Vfunc_SOC__DOT__CPU__DOT__flip32__1__x 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    SOC__DOT__CPU__DOT__leftshift = __Vfunc_SOC__DOT__CPU__DOT__flip32__1__Vfuncout;
    SOC__DOT__CPU__DOT__LT = (1U & (((vlSelf->SOC__DOT__CPU__DOT__rs1 
                                      ^ SOC__DOT__CPU__DOT__aluIn2) 
                                     >> 0x1fU) ? (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                  >> 0x1fU)
                                     : (IData)((SOC__DOT__CPU__DOT__aluMinus 
                                                >> 0x20U))));
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = 
        ((- (IData)((1U & (~ (vlSelf->SOC__DOT__mem_addr 
                              >> 0x16U))))) & (IData)(vlSelf->SOC__DOT__mem_wmask));
    SOC__DOT____VdfgTmp_h29b8cd80__0 = ((vlSelf->SOC__DOT__mem_addr 
                                         >> 0x16U) 
                                        & (0U != (IData)(vlSelf->SOC__DOT__mem_wmask)));
    vlSelf->SOC__DOT__mem_rdata = ((0x400000U & vlSelf->SOC__DOT__mem_addr)
                                    ? ((0x10U & vlSelf->SOC__DOT__mem_addr)
                                        ? (0x200U & 
                                           ((~ (IData)(vlSelf->SOC__DOT__uart_ready)) 
                                            << 9U))
                                        : 0U) : vlSelf->SOC__DOT__RAM_rdata);
    __Vtableidx1 = (((0U == (IData)(SOC__DOT__CPU__DOT__aluMinus)) 
                     << 8U) | (((0U != (IData)(SOC__DOT__CPU__DOT__aluMinus)) 
                                << 7U) | (((IData)(SOC__DOT__CPU__DOT__LT) 
                                           << 6U) | 
                                          ((0x20U & 
                                            ((~ (IData)(SOC__DOT__CPU__DOT__LT)) 
                                             << 5U)) 
                                           | ((0x10U 
                                               & ((IData)(
                                                          (SOC__DOT__CPU__DOT__aluMinus 
                                                           >> 0x20U)) 
                                                  << 4U)) 
                                              | ((8U 
                                                  & ((~ (IData)(
                                                                (SOC__DOT__CPU__DOT__aluMinus 
                                                                 >> 0x20U))) 
                                                     << 3U)) 
                                                 | (7U 
                                                    & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                       >> 0xcU))))))));
    SOC__DOT__CPU__DOT__takeBranch = VSOC__ConstPool__TABLE_h01624aed_0
        [__Vtableidx1];
    vlSelf->SOC__DOT__uart_valid = ((IData)(SOC__DOT____VdfgTmp_h29b8cd80__0) 
                                    & (vlSelf->SOC__DOT__mem_addr 
                                       >> 3U));
    vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en 
        = ((0x7fffff8U & (((IData)(SOC__DOT____VdfgTmp_h29b8cd80__0) 
                           << 3U) & (vlSelf->SOC__DOT__mem_addr 
                                     >> 5U))) | ((0x7fffffcU 
                                                  & (((IData)(SOC__DOT____VdfgTmp_h29b8cd80__0) 
                                                      << 2U) 
                                                     & (vlSelf->SOC__DOT__mem_addr 
                                                        >> 5U))) 
                                                 | (3U 
                                                    & ((- (IData)((IData)(SOC__DOT____VdfgTmp_h29b8cd80__0))) 
                                                       & (vlSelf->SOC__DOT__mem_addr 
                                                          >> 5U)))));
    SOC__DOT__CPU__DOT__LOAD_halfword = (0xffffU & 
                                         ((2U & SOC__DOT__CPU__DOT__loadstore_addr)
                                           ? (vlSelf->SOC__DOT__mem_rdata 
                                              >> 0x10U)
                                           : vlSelf->SOC__DOT__mem_rdata));
    vlSelf->SOC__DOT__CPU__DOT__nextPC = ((((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                            & (IData)(SOC__DOT__CPU__DOT__takeBranch)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                           ? SOC__DOT__CPU__DOT__PCplusImm
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr))
                                               ? (0xfffffffeU 
                                                  & SOC__DOT__CPU__DOT__aluPlus)
                                               : ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)));
    SOC__DOT__CPU__DOT__LOAD_byte = (0xffU & ((1U & SOC__DOT__CPU__DOT__loadstore_addr)
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 8U)
                                               : (IData)(SOC__DOT__CPU__DOT__LOAD_halfword)));
    SOC__DOT__CPU__DOT__LOAD_sign = (1U & ((~ (vlSelf->SOC__DOT__CPU__DOT__instr 
                                               >> 0xeU)) 
                                           & ((0U == 
                                               (3U 
                                                & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                   >> 0xcU)))
                                               ? ((IData)(SOC__DOT__CPU__DOT__LOAD_byte) 
                                                  >> 7U)
                                               : ((IData)(SOC__DOT__CPU__DOT__LOAD_halfword) 
                                                  >> 0xfU))));
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                  ? 
                                                 ((IData)(4U) 
                                                  + vlSelf->SOC__DOT__CPU__DOT__PC)
                                                  : 
                                                 ((0x37U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                   ? 
                                                  (0xfffff000U 
                                                   & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                    ? SOC__DOT__CPU__DOT__PCplusImm
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr))
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                          >> 0xcU)))
                                                      ? 
                                                     (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                       << 8U) 
                                                      | (IData)(SOC__DOT__CPU__DOT__LOAD_byte))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (3U 
                                                        & (vlSelf->SOC__DOT__CPU__DOT__instr 
                                                           >> 0xcU)))
                                                       ? 
                                                      (((- (IData)((IData)(SOC__DOT__CPU__DOT__LOAD_sign))) 
                                                        << 0x10U) 
                                                       | (IData)(SOC__DOT__CPU__DOT__LOAD_halfword))
                                                       : vlSelf->SOC__DOT__mem_rdata))
                                                     : 
                                                    ((0x4000U 
                                                      & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                      ? 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        & SOC__DOT__CPU__DOT__aluIn2)
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        | SOC__DOT__CPU__DOT__aluIn2))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__shifter
                                                        : 
                                                       (vlSelf->SOC__DOT__CPU__DOT__rs1 
                                                        ^ SOC__DOT__CPU__DOT__aluIn2)))
                                                      : 
                                                     ((0x2000U 
                                                       & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                       ? 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? 
                                                       (1U 
                                                        & (IData)(
                                                                  (SOC__DOT__CPU__DOT__aluMinus 
                                                                   >> 0x20U)))
                                                        : (IData)(SOC__DOT__CPU__DOT__LT))
                                                       : 
                                                      ((0x1000U 
                                                        & vlSelf->SOC__DOT__CPU__DOT__instr)
                                                        ? SOC__DOT__CPU__DOT__leftshift
                                                        : 
                                                       ((IData)(
                                                                (0x40000020U 
                                                                 == 
                                                                 (0x40000020U 
                                                                  & vlSelf->SOC__DOT__CPU__DOT__instr)))
                                                         ? (IData)(SOC__DOT__CPU__DOT__aluMinus)
                                                         : SOC__DOT__CPU__DOT__aluPlus))))))));
}

VL_INLINE_OPT void VSOC___024root___nba_sequent__TOP__1(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt 
        = ((IData)(vlSelf->RESET) ? 0U : (0xffffU & 
                                          ((IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt) 
                                           + (1U & 
                                              (~ (IData)(vlSelf->SOC__DOT__resetn))))));
    vlSelf->SOC__DOT__resetn = (0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt));
}

void VSOC___024root___eval_nba(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSOC___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSOC___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VSOC___024root___eval_triggers__act(VSOC___024root* vlSelf);

bool VSOC___024root___eval_phase__act(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSOC___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSOC___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSOC___024root___eval_phase__nba(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSOC___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__nba(VSOC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(VSOC___024root* vlSelf);
#endif  // VL_DEBUG

void VSOC___024root___eval(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSOC___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("step20.v", 313, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSOC___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("step20.v", 313, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSOC___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSOC___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSOC___024root___eval_debug_assertions(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RESET & 0xfeU))) {
        Verilated::overWidthError("RESET");}
    if (VL_UNLIKELY((vlSelf->RXD & 0xfeU))) {
        Verilated::overWidthError("RXD");}
}
#endif  // VL_DEBUG
