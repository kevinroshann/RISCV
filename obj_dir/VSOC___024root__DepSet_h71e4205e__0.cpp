// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSOC.h for the primary calling header

#include "VSOC__pch.h"
#include "VSOC__Syms.h"
#include "VSOC___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VSOC___024root___dump_triggers__act(VSOC___024root* vlSelf);
#endif  // VL_DEBUG

void VSOC___024root___eval_triggers__act(VSOC___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    VSOC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSOC___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->CLK) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSelf->CLK) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__CLK__0))) 
                                     | ((IData)(vlSelf->RESET) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__RESET__0)))));
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
    vlSelf->__Vtrigprevexpr___TOP__RESET__0 = vlSelf->RESET;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VSOC___024root___dump_triggers__act(vlSelf);
    }
#endif
}
