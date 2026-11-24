// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ResetFSM.h for the primary calling header

#include "Vtb_ResetFSM__pch.h"
#include "Vtb_ResetFSM__Syms.h"
#include "Vtb_ResetFSM___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ResetFSM___024root___dump_triggers__act(Vtb_ResetFSM___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ResetFSM___024root___eval_triggers__act(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_triggers__act\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.tb_ResetFSM__DOT__clock) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ResetFSM__DOT__clock__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.tb_ResetFSM__DOT__reset_b)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_ResetFSM__DOT__reset_b__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ResetFSM__DOT__clock__0 
        = vlSelfRef.tb_ResetFSM__DOT__clock;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_ResetFSM__DOT__reset_b__0 
        = vlSelfRef.tb_ResetFSM__DOT__reset_b;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_ResetFSM___024root___dump_triggers__act(vlSelf);
    }
#endif
}
