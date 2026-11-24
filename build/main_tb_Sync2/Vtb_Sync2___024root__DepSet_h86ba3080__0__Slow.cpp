// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Sync2.h for the primary calling header

#include "Vtb_Sync2__pch.h"
#include "Vtb_Sync2___024root.h"

VL_ATTR_COLD void Vtb_Sync2___024root___eval_static__TOP(Vtb_Sync2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Sync2___024root___eval_static(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_static\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_Sync2___024root___eval_static__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_Sync2__DOT__clock__0 = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_Sync2__DOT__reset_b__0 = 0U;
}

VL_ATTR_COLD void Vtb_Sync2___024root___eval_static__TOP(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_static__TOP\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_Sync2__DOT__clock = 0U;
    vlSelfRef.tb_Sync2__DOT__reset_b = 0U;
    vlSelfRef.tb_Sync2__DOT__In = 0U;
    vlSelfRef.tb_Sync2__DOT__errors = 0U;
    vlSelfRef.tb_Sync2__DOT__glitch_code = 0U;
    vlSelfRef.tb_Sync2__DOT__glitch_watch = 0U;
}

VL_ATTR_COLD void Vtb_Sync2___024root___eval_final(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_final\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_Sync2___024root___eval_settle(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_settle\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Sync2___024root___dump_triggers__act(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___dump_triggers__act\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_Sync2.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge tb_Sync2.reset_b)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Sync2___024root___dump_triggers__nba(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___dump_triggers__nba\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_Sync2.clock)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge tb_Sync2.reset_b)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_Sync2___024root___ctor_var_reset(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___ctor_var_reset\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->tb_Sync2__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->tb_Sync2__DOT__reset_b = VL_RAND_RESET_I(1);
    vlSelf->tb_Sync2__DOT__In = VL_RAND_RESET_I(2);
    vlSelf->tb_Sync2__DOT__Out = VL_RAND_RESET_I(2);
    vlSelf->tb_Sync2__DOT__errors = 0;
    vlSelf->tb_Sync2__DOT__glitch_code = VL_RAND_RESET_I(2);
    vlSelf->tb_Sync2__DOT__glitch_watch = VL_RAND_RESET_I(1);
    vlSelf->tb_Sync2__DOT__dut__DOT__s1 = VL_RAND_RESET_I(2);
    vlSelf->tb_Sync2__DOT__dut__DOT__s2 = VL_RAND_RESET_I(2);
    vlSelf->tb_Sync2__DOT__dut__DOT__prev = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__tb_Sync2__DOT__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_Sync2__DOT__reset_b__0 = VL_RAND_RESET_I(1);
}
