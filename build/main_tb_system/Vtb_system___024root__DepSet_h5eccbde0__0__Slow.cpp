// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system__Syms.h"
#include "Vtb_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__stl(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_system___024root___eval_triggers__stl(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_triggers__stl\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, ((IData)(vlSelfRef.__VassignWtmp_hae80fcb7__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__0)));
    vlSelfRef.__VstlTriggered.setBit(2U, (vlSelfRef.__VassignWgen_h41c115bb__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__0));
    vlSelfRef.__VstlTriggered.setBit(3U, ((IData)(vlSelfRef.__VassignWtmp_hc3e5c77d__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__0)));
    vlSelfRef.__VstlTriggered.setBit(4U, (vlSelfRef.__VassignWgen_hce3bab25__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__0));
    vlSelfRef.__VstlTriggered.setBit(5U, ((IData)(vlSelfRef.__VassignWtmp_h9ea43bac__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__0)));
    vlSelfRef.__VstlTriggered.setBit(6U, (vlSelfRef.__VassignWgen_hed2719dd__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__0));
    vlSelfRef.__VstlTriggered.setBit(7U, ((IData)(vlSelfRef.__VassignWtmp_h67a57512__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__0)));
    vlSelfRef.__VstlTriggered.setBit(8U, (vlSelfRef.__VassignWgen_hee47ec46__0 
                                          != vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__0));
    vlSelfRef.__VstlTriggered.setBit(9U, ((IData)(vlSelfRef.tb_system__DOT__isoAckA) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__0)));
    vlSelfRef.__VstlTriggered.setBit(0xaU, ((IData)(vlSelfRef.tb_system__DOT__clrAckA) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__0)));
    vlSelfRef.__VstlTriggered.setBit(0xbU, ((IData)(vlSelfRef.tb_system__DOT__isoAckB) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__0)));
    vlSelfRef.__VstlTriggered.setBit(0xcU, ((IData)(vlSelfRef.tb_system__DOT__clrAckB) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__0)));
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__0 
        = vlSelfRef.__VassignWtmp_hae80fcb7__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__0 
        = vlSelfRef.__VassignWgen_h41c115bb__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__0 
        = vlSelfRef.__VassignWtmp_hc3e5c77d__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__0 
        = vlSelfRef.__VassignWgen_hce3bab25__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__0 
        = vlSelfRef.__VassignWtmp_h9ea43bac__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__0 
        = vlSelfRef.__VassignWgen_hed2719dd__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__0 
        = vlSelfRef.__VassignWtmp_h67a57512__0;
    vlSelfRef.__Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__0 
        = vlSelfRef.__VassignWgen_hee47ec46__0;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__0 
        = vlSelfRef.tb_system__DOT__isoAckA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__0 
        = vlSelfRef.tb_system__DOT__clrAckA;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__0 
        = vlSelfRef.tb_system__DOT__isoAckB;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__0 
        = vlSelfRef.tb_system__DOT__clrAckB;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
        vlSelfRef.__VstlTriggered.setBit(3U, 1U);
        vlSelfRef.__VstlTriggered.setBit(4U, 1U);
        vlSelfRef.__VstlTriggered.setBit(5U, 1U);
        vlSelfRef.__VstlTriggered.setBit(6U, 1U);
        vlSelfRef.__VstlTriggered.setBit(7U, 1U);
        vlSelfRef.__VstlTriggered.setBit(8U, 1U);
        vlSelfRef.__VstlTriggered.setBit(9U, 1U);
        vlSelfRef.__VstlTriggered.setBit(0xaU, 1U);
        vlSelfRef.__VstlTriggered.setBit(0xbU, 1U);
        vlSelfRef.__VstlTriggered.setBit(0xcU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_system___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
