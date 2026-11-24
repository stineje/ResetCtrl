// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system__Syms.h"
#include "Vtb_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_system___024root___eval_triggers__act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_triggers__act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.__VassignWtmp_hae80fcb7__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__1)));
    vlSelfRef.__VactTriggered.setBit(1U, (vlSelfRef.__VassignWgen_h41c115bb__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__1));
    vlSelfRef.__VactTriggered.setBit(2U, ((IData)(vlSelfRef.__VassignWtmp_hc3e5c77d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__1)));
    vlSelfRef.__VactTriggered.setBit(3U, (vlSelfRef.__VassignWgen_hce3bab25__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__1));
    vlSelfRef.__VactTriggered.setBit(4U, ((IData)(vlSelfRef.__VassignWtmp_h9ea43bac__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__1)));
    vlSelfRef.__VactTriggered.setBit(5U, (vlSelfRef.__VassignWgen_hed2719dd__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__1));
    vlSelfRef.__VactTriggered.setBit(6U, ((IData)(vlSelfRef.__VassignWtmp_h67a57512__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__1)));
    vlSelfRef.__VactTriggered.setBit(7U, (vlSelfRef.__VassignWgen_hee47ec46__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__1));
    vlSelfRef.__VactTriggered.setBit(8U, ((IData)(vlSelfRef.tb_system__DOT__isoAckA) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__1)));
    vlSelfRef.__VactTriggered.setBit(9U, ((IData)(vlSelfRef.tb_system__DOT__clrAckA) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__1)));
    vlSelfRef.__VactTriggered.setBit(0xaU, ((IData)(vlSelfRef.tb_system__DOT__isoAckB) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__1)));
    vlSelfRef.__VactTriggered.setBit(0xbU, ((IData)(vlSelfRef.tb_system__DOT__clrAckB) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__1)));
    vlSelfRef.__VactTriggered.setBit(0xcU, ((IData)(vlSelfRef.tb_system__DOT__clkA) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clkA__0))));
    vlSelfRef.__VactTriggered.setBit(0xdU, ((~ (IData)(vlSelfRef.tb_system__DOT__rstA)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__rstA__0)));
    vlSelfRef.__VactTriggered.setBit(0xeU, ((IData)(vlSelfRef.tb_system__DOT__clkB) 
                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clkB__0))));
    vlSelfRef.__VactTriggered.setBit(0xfU, ((~ (IData)(vlSelfRef.tb_system__DOT__rstB)) 
                                            & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__rstB__0)));
    vlSelfRef.__VactTriggered.setBit(0x10U, ((IData)(vlSelfRef.tb_system__DOT__busyA) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__busyA__0))));
    vlSelfRef.__VactTriggered.setBit(0x11U, ((IData)(vlSelfRef.tb_system__DOT__busyB) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__busyB__0))));
    vlSelfRef.__VactTriggered.setBit(0x12U, ((~ (IData)(vlSelfRef.tb_system__DOT__A__DOT__FsmIsolate)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__A__DOT__FsmIsolate__0)));
    vlSelfRef.__VactTriggered.setBit(0x13U, ((~ (IData)(vlSelfRef.tb_system__DOT__B__DOT__FsmIsolate)) 
                                             & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__B__DOT__FsmIsolate__0)));
    vlSelfRef.__VactTriggered.setBit(0x14U, ((IData)(vlSelfRef.tb_system__DOT__clrA) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrA__0))));
    vlSelfRef.__VactTriggered.setBit(0x15U, ((IData)(vlSelfRef.tb_system__DOT__clrB) 
                                             & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrB__0))));
    vlSelfRef.__VactTriggered.setBit(0x16U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__1 
        = vlSelfRef.__VassignWtmp_hae80fcb7__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__1 
        = vlSelfRef.__VassignWgen_h41c115bb__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__1 
        = vlSelfRef.__VassignWtmp_hc3e5c77d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__1 
        = vlSelfRef.__VassignWgen_hce3bab25__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__1 
        = vlSelfRef.__VassignWtmp_h9ea43bac__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__1 
        = vlSelfRef.__VassignWgen_hed2719dd__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__1 
        = vlSelfRef.__VassignWtmp_h67a57512__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__1 
        = vlSelfRef.__VassignWgen_hee47ec46__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__1 
        = vlSelfRef.tb_system__DOT__isoAckA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__1 
        = vlSelfRef.tb_system__DOT__clrAckA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__1 
        = vlSelfRef.tb_system__DOT__isoAckB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__1 
        = vlSelfRef.tb_system__DOT__clrAckB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clkA__0 
        = vlSelfRef.tb_system__DOT__clkA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__rstA__0 
        = vlSelfRef.tb_system__DOT__rstA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clkB__0 
        = vlSelfRef.tb_system__DOT__clkB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__rstB__0 
        = vlSelfRef.tb_system__DOT__rstB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__busyA__0 
        = vlSelfRef.tb_system__DOT__busyA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__busyB__0 
        = vlSelfRef.tb_system__DOT__busyB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__A__DOT__FsmIsolate__0 
        = vlSelfRef.tb_system__DOT__A__DOT__FsmIsolate;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__B__DOT__FsmIsolate__0 
        = vlSelfRef.tb_system__DOT__B__DOT__FsmIsolate;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrA__0 
        = vlSelfRef.tb_system__DOT__clrA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrB__0 
        = vlSelfRef.tb_system__DOT__clrB;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.setBit(0U, 1U);
        vlSelfRef.__VactTriggered.setBit(1U, 1U);
        vlSelfRef.__VactTriggered.setBit(2U, 1U);
        vlSelfRef.__VactTriggered.setBit(3U, 1U);
        vlSelfRef.__VactTriggered.setBit(4U, 1U);
        vlSelfRef.__VactTriggered.setBit(5U, 1U);
        vlSelfRef.__VactTriggered.setBit(6U, 1U);
        vlSelfRef.__VactTriggered.setBit(7U, 1U);
        vlSelfRef.__VactTriggered.setBit(8U, 1U);
        vlSelfRef.__VactTriggered.setBit(9U, 1U);
        vlSelfRef.__VactTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VactTriggered.setBit(0xbU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__act(vlSelf);
    }
#endif
}
