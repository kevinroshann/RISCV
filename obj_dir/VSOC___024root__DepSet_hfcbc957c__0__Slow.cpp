// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"
#include "VSOC___024root.h"

VL_ATTR_COLD void VSOC___024root___eval_static__TOP(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_static(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static\n"); );
    // Body
    VSOC___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void VSOC___024root___eval_static__TOP(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->SOC__DOT__CPU__DOT__PC = 0U;
    vlSelf->SOC__DOT__CPU__DOT__state = 0U;
    vlSelf->SOC__DOT__UART__DOT__cnt = 0U;
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = 0U;
    vlSelf->SOC__DOT__SERVOS__DOT__clk_counter = 0U;
}

VL_ATTR_COLD void VSOC___024root___eval_initial__TOP(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_initial(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial\n"); );
    // Body
    VSOC___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__RESET__0 = vlSelf->RESET;
}

VL_ATTR_COLD void VSOC___024root___eval_initial__TOP(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[1U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[2U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[3U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[4U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[5U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[6U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[7U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[8U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[9U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xaU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xbU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xcU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xdU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xeU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0xfU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x10U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x11U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x12U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x13U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x14U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x15U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x16U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x17U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x18U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x19U] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1aU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1bU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1cU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1dU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1eU] = 0U;
    vlSelf->SOC__DOT__CPU__DOT__RegisterBank[0x1fU] = 0U;
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x77617265U;
    __Vtemp_1[2U] = 0x6669726dU;
    VL_READMEM_N(true, 32, 1536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_1)
                 ,  &(vlSelf->SOC__DOT__RAM__DOT__MEM)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSOC___024root___eval_final(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(VSOC___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf);

VL_ATTR_COLD void VSOC___024root___eval_settle(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSOC___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("step20.v", 313, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSOC___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ vlSelf->__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*0:0*/, 512> VSOC__ConstPool__TABLE_h01624aed_0;

VL_ATTR_COLD void VSOC___024root___stl_sequent__TOP__0(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___stl_sequent__TOP__0\n"); );
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
    // Body
    vlSelf->TXD = (1U & ((~ (IData)((0U != (IData)(vlSelf->SOC__DOT__UART__DOT__data)))) 
                         | (IData)(vlSelf->SOC__DOT__UART__DOT__data)));
    vlSelf->SERVO_PWM1 = (1U & (IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm));
    vlSelf->SERVO_PWM2 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 1U));
    vlSelf->SERVO_PWM3 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 2U));
    vlSelf->SERVO_PWM4 = (1U & ((IData)(vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm) 
                                >> 3U));
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
    vlSelf->SOC__DOT__resetn = (0xffffU == (IData)(vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt));
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

VL_ATTR_COLD void VSOC___024root___eval_stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSOC___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VSOC___024root___eval_triggers__stl(VSOC___024root* vlSelf);

VL_ATTR_COLD bool VSOC___024root___eval_phase__stl(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSOC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSOC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ vlSelf->__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge CLK or posedge RESET)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__nba(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ vlSelf->__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge CLK or posedge RESET)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSOC___024root___ctor_var_reset(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->RESET = VL_RAND_RESET_I(1);
    vlSelf->LEDS = VL_RAND_RESET_I(5);
    vlSelf->RXD = VL_RAND_RESET_I(1);
    vlSelf->TXD = VL_RAND_RESET_I(1);
    vlSelf->SERVO_PWM1 = VL_RAND_RESET_I(1);
    vlSelf->SERVO_PWM2 = VL_RAND_RESET_I(1);
    vlSelf->SERVO_PWM3 = VL_RAND_RESET_I(1);
    vlSelf->SERVO_PWM4 = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__resetn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__mem_addr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__RAM_rdata = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT____Vcellinp__RAM__mem_wmask = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__uart_valid = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__uart_ready = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT____Vcellout__SERVOS__servo_pwm = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT____Vcellinp__SERVOS__write_en = VL_RAND_RESET_I(4);
    vlSelf->SOC__DOT__CPU__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__instr = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__isLoad = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__isSYSTEM = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__rs1Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rs2Id = VL_RAND_RESET_I(5);
    vlSelf->SOC__DOT__CPU__DOT__rdId = VL_RAND_RESET_I(5);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SOC__DOT__CPU__DOT__RegisterBank[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__CPU__DOT__rs1 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__rs2 = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackData = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__writeBackEn = VL_RAND_RESET_I(1);
    vlSelf->SOC__DOT__CPU__DOT__nextPC = VL_RAND_RESET_I(32);
    vlSelf->SOC__DOT__CPU__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->SOC__DOT__CPU__DOT____VdfgTmp_h7bd74d72__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1536; ++__Vi0) {
        vlSelf->SOC__DOT__RAM__DOT__MEM[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee29b58d__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd25638__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hedd1d91c__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__RAM__DOT____Vlvbound_hee286227__0 = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__UART__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->SOC__DOT__UART__DOT__data = VL_RAND_RESET_I(10);
    vlSelf->SOC__DOT__CW__DOT__genblk1__DOT__reset_cnt = VL_RAND_RESET_I(16);
    vlSelf->SOC__DOT__SERVOS__DOT__clk_counter = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->SOC__DOT__SERVOS__DOT__target_duty[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_SOC__DOT__CPU__DOT__flip32__0__x = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__RESET__0 = VL_RAND_RESET_I(1);
}
