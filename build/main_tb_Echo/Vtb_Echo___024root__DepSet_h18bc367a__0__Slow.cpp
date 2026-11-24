// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Echo.h for the primary calling header

#include "Vtb_Echo__pch.h"
#include "Vtb_Echo___024root.h"

VL_ATTR_COLD void Vtb_Echo___024root___eval_static__TOP(Vtb_Echo___024root* vlSelf);

VL_ATTR_COLD void Vtb_Echo___024root___eval_static(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_static\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_Echo___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_Echo__DOT__clock__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_Echo__DOT__reset_b__0 = 0U;
}

VL_ATTR_COLD void Vtb_Echo___024root___eval_static__TOP(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_static__TOP\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_Echo__DOT__clock = 0U;
    vlSelfRef.tb_Echo__DOT__reset_b = 0U;
    vlSelfRef.tb_Echo__DOT__Phase = 0U;
    vlSelfRef.tb_Echo__DOT__IsoAck = 0U;
    vlSelfRef.tb_Echo__DOT__ClrAck = 0U;
    vlSelfRef.tb_Echo__DOT__errors = 0U;
}

VL_ATTR_COLD void Vtb_Echo___024root___eval_final(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_final\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__stl(Vtb_Echo___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_Echo___024root___eval_phase__stl(Vtb_Echo___024root* vlSelf);

VL_ATTR_COLD void Vtb_Echo___024root___eval_settle(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_settle\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtb_Echo___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_Echo.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_Echo___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__stl(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___dump_triggers__stl\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_Echo___024root___act_comb__TOP__0(Vtb_Echo___024root* vlSelf);

VL_ATTR_COLD void Vtb_Echo___024root___eval_stl(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_stl\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vtb_Echo___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_Echo___024root___eval_triggers__stl(Vtb_Echo___024root* vlSelf);

VL_ATTR_COLD bool Vtb_Echo___024root___eval_phase__stl(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_phase__stl\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_Echo___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_Echo___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__act(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___dump_triggers__act\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_Echo.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_Echo.reset_b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__nba(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___dump_triggers__nba\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_Echo.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_Echo.reset_b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Echo___024root___ctor_var_reset(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___ctor_var_reset\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_Echo__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__reset_b = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__Phase = VL_RAND_RESET_I(2);
    vlSelf->tb_Echo__DOT__IsoAck = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__ClrAck = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__EchoOut = VL_RAND_RESET_I(2);
    vlSelf->tb_Echo__DOT__Isolate = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__Clear = VL_RAND_RESET_I(1);
    vlSelf->tb_Echo__DOT__errors = 0;
    vlSelf->tb_Echo__DOT__dut__DOT__Done = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Echo__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Echo__DOT__reset_b__0 = VL_RAND_RESET_I(1);
}
