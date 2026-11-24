// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_system.h for the primary calling header

#include "Vtb_system__pch.h"
#include "Vtb_system___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_10__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_10__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_10__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__996__cycles;
    __Vtask_tb_system__DOT__reset_b__996__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__996__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__996__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__996__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_10__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_10__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_10__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_10__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__995__cycles;
    __Vtask_tb_system__DOT__reset_a__995__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__995__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__995__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__995__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_10__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_9__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_9__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_9__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__905__cycles;
    __Vtask_tb_system__DOT__reset_b__905__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__905__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__905__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__905__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_9__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_9__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_9__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_9__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__904__cycles;
    __Vtask_tb_system__DOT__reset_a__904__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__904__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__904__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__904__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_9__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_8__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_8__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_8__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__814__cycles;
    __Vtask_tb_system__DOT__reset_b__814__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__814__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__814__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__814__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_8__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_8__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_8__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_8__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__813__cycles;
    __Vtask_tb_system__DOT__reset_a__813__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__813__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__813__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__813__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_8__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_7__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_7__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__723__cycles;
    __Vtask_tb_system__DOT__reset_b__723__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__723__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__723__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__723__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_7__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_7__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_7__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_7__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__722__cycles;
    __Vtask_tb_system__DOT__reset_a__722__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__722__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__722__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__722__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_7__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_6__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_6__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__632__cycles;
    __Vtask_tb_system__DOT__reset_b__632__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__632__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__632__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__632__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_6__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_6__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_6__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_6__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__631__cycles;
    __Vtask_tb_system__DOT__reset_a__631__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__631__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__631__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__631__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_6__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_5__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_5__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__541__cycles;
    __Vtask_tb_system__DOT__reset_b__541__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__541__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__541__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__541__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_5__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_5__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_5__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_5__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__540__cycles;
    __Vtask_tb_system__DOT__reset_a__540__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__540__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__540__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__540__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_5__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_4__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_4__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__450__cycles;
    __Vtask_tb_system__DOT__reset_b__450__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__450__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__450__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__450__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_4__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_4__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_4__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_4__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__449__cycles;
    __Vtask_tb_system__DOT__reset_a__449__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__449__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__449__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__449__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_4__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_3__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_3__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__359__cycles;
    __Vtask_tb_system__DOT__reset_b__359__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__359__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__359__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__359__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_3__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_3__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_3__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_3__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__358__cycles;
    __Vtask_tb_system__DOT__reset_a__358__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__358__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__358__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__358__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_3__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_2__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_2__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__268__cycles;
    __Vtask_tb_system__DOT__reset_b__268__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__268__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__268__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__268__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_2__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_2__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_2__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__267__cycles;
    __Vtask_tb_system__DOT__reset_a__267__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__267__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__267__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__267__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_2__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_1__1(Vtb_system___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_1__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__177__cycles;
    __Vtask_tb_system__DOT__reset_b__177__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_b__177__cycles = 6U;
    __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    vlSelfRef.tb_system__DOT__rstB = 0U;
    __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
        = __Vtask_tb_system__DOT__reset_b__177__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_h33a4bbd1__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkB)", 
                                                             "tb/tb_system.sv", 
                                                             124);
        __Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_tb_system__DOT__reset_b__177__tb_system__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         124);
    vlSelfRef.tb_system__DOT__rstB = 1U;
    __Vfork_1__sync.done("tb/tb_system.sv", 240);
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_1__0(Vtb_system___024root* vlSelf, VlForkSync __Vfork_1__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__1____Vfork_1__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__176__cycles;
    __Vtask_tb_system__DOT__reset_a__176__cycles = 0;
    IData/*31:0*/ __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    __Vtask_tb_system__DOT__reset_a__176__cycles = 4U;
    __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    vlSelfRef.tb_system__DOT__rstA = 0U;
    __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_system__DOT__reset_a__176__cycles;
    while (VL_LTS_III(32, 0U, __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hcdad19d4__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_system.clkA)", 
                                                             "tb/tb_system.sv", 
                                                             121);
        __Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_system__DOT__reset_a__176__tb_system__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x1f4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         121);
    vlSelfRef.tb_system__DOT__rstA = 1U;
    __Vfork_1__sync.done("tb/tb_system.sv", 240);
}

void Vtb_system___024root___eval_initial__TOP__Vtiming__0__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__0__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0U == vlSelfRef.tb_system__DOT__errors)) {
        VL_WRITEF_NX("PASS tb_system (%@): sequences A=%0d B=%0d\n",0,
                     -1,&(vlSelfRef.tb_system__DOT__test),
                     32,vlSelfRef.tb_system__DOT__seqA,
                     32,vlSelfRef.tb_system__DOT__seqB);
    } else {
        VL_WRITEF_NX("FAIL tb_system (%@): %0d errors\n",0,
                     -1,&(vlSelfRef.tb_system__DOT__test),
                     32,vlSelfRef.tb_system__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_system.sv", 300, "");
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                              (1.00000000000000000e+03 
                                                               * 
                                                               (VL_ISTOR_D_I(32, vlSelfRef.tb_system__DOT__hb) 
                                                                / 1.00000000000000000e+03))), 
                                             nullptr, 
                                             "tb/tb_system.sv", 
                                             32);
        vlSelfRef.tb_system__DOT__clkB = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__clkB)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___eval_initial__TOP__Vtiming__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(VL_RTOIROUND_Q_D(
                                                              (1.00000000000000000e+03 
                                                               * 
                                                               (VL_ISTOR_D_I(32, vlSelfRef.tb_system__DOT__ha) 
                                                                / 1.00000000000000000e+03))), 
                                             nullptr, 
                                             "tb/tb_system.sv", 
                                             31);
        vlSelfRef.tb_system__DOT__clkA = (1U & (~ (IData)(vlSelfRef.tb_system__DOT__clkA)));
    }
}

void Vtb_system___024root___act_sequent__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__1(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__2(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__3(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__4(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_sequent__TOP__5(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_comb__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___act_comb__TOP__1(Vtb_system___024root* vlSelf);

void Vtb_system___024root___eval_act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0xcULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x30ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0xc0ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x300ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0xc00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x405300ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x405c00ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__1(vlSelf);
    }
}

VlCoroutine Vtb_system___024root___act_sequent__TOP__0____Vfork_11__0(Vtb_system___024root* vlSelf);

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state) 
         != (IData)(vlSelfRef.__VassignWtmp_hae80fcb7__0))) {
        Vtb_system___024root___act_sequent__TOP__0____Vfork_11__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___act_sequent__TOP__0____Vfork_11__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__0____Vfork_11__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vintraval_hb1afe387__0;
    __Vintraval_hb1afe387__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_h41c115bb__0__local;
    __VassignWgen_h41c115bb__0__local = 0;
    vlSelfRef.__VassignWgen_h41c115bb__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_h41c115bb__0);
    __VassignWgen_h41c115bb__0__local = vlSelfRef.__VassignWgen_h41c115bb__0;
    __Vintraval_hb1afe387__0 = vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state;
    vlSelfRef.__VassignWtmp_hae80fcb7__0 = __Vintraval_hb1afe387__0;
    co_await vlSelfRef.__VdlySched.delay(0x190ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         41);
    if ((vlSelfRef.__VassignWgen_h41c115bb__0 == __VassignWgen_h41c115bb__0__local)) {
        vlSelfRef.tb_system__DOT__phA_w = __Vintraval_hb1afe387__0;
    }
}

VlCoroutine Vtb_system___024root___act_sequent__TOP__1____Vfork_12__0(Vtb_system___024root* vlSelf);

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state) 
         != (IData)(vlSelfRef.__VassignWtmp_hc3e5c77d__0))) {
        Vtb_system___024root___act_sequent__TOP__1____Vfork_12__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___act_sequent__TOP__1____Vfork_12__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__1____Vfork_12__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vintraval_h2a243d0e__0;
    __Vintraval_h2a243d0e__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hce3bab25__0__local;
    __VassignWgen_hce3bab25__0__local = 0;
    vlSelfRef.__VassignWgen_hce3bab25__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hce3bab25__0);
    __VassignWgen_hce3bab25__0__local = vlSelfRef.__VassignWgen_hce3bab25__0;
    __Vintraval_h2a243d0e__0 = vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state;
    vlSelfRef.__VassignWtmp_hc3e5c77d__0 = __Vintraval_h2a243d0e__0;
    co_await vlSelfRef.__VdlySched.delay(0x6a4ULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         42);
    if ((vlSelfRef.__VassignWgen_hce3bab25__0 == __VassignWgen_hce3bab25__0__local)) {
        vlSelfRef.tb_system__DOT__phB_w = __Vintraval_h2a243d0e__0;
    }
}

VlCoroutine Vtb_system___024root___act_sequent__TOP__2____Vfork_13__0(Vtb_system___024root* vlSelf);

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__ecA) != (IData)(vlSelfRef.__VassignWtmp_h9ea43bac__0))) {
        Vtb_system___024root___act_sequent__TOP__2____Vfork_13__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___act_sequent__TOP__2____Vfork_13__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__2____Vfork_13__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vintraval_h14435ae5__0;
    __Vintraval_h14435ae5__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hed2719dd__0__local;
    __VassignWgen_hed2719dd__0__local = 0;
    vlSelfRef.__VassignWgen_hed2719dd__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hed2719dd__0);
    __VassignWgen_hed2719dd__0__local = vlSelfRef.__VassignWgen_hed2719dd__0;
    __Vintraval_h14435ae5__0 = vlSelfRef.tb_system__DOT__ecA;
    vlSelfRef.__VassignWtmp_h9ea43bac__0 = __Vintraval_h14435ae5__0;
    co_await vlSelfRef.__VdlySched.delay(0x8fcULL, 
                                         nullptr, "tb/tb_system.sv", 
                                         43);
    if ((vlSelfRef.__VassignWgen_hed2719dd__0 == __VassignWgen_hed2719dd__0__local)) {
        vlSelfRef.tb_system__DOT__ecA_w = __Vintraval_h14435ae5__0;
    }
}

VlCoroutine Vtb_system___024root___act_sequent__TOP__3____Vfork_14__0(Vtb_system___024root* vlSelf);

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__ecB) != (IData)(vlSelfRef.__VassignWtmp_h67a57512__0))) {
        Vtb_system___024root___act_sequent__TOP__3____Vfork_14__0(vlSelf);
    }
}

VL_INLINE_OPT VlCoroutine Vtb_system___024root___act_sequent__TOP__3____Vfork_14__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__3____Vfork_14__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vintraval_h13f6c765__0;
    __Vintraval_h13f6c765__0 = 0;
    // Body
    QData/*63:0*/ __VassignWgen_hee47ec46__0__local;
    __VassignWgen_hee47ec46__0__local = 0;
    vlSelfRef.__VassignWgen_hee47ec46__0 = ((QData)((IData)(1U)) 
                                            + vlSelfRef.__VassignWgen_hee47ec46__0);
    __VassignWgen_hee47ec46__0__local = vlSelfRef.__VassignWgen_hee47ec46__0;
    __Vintraval_h13f6c765__0 = vlSelfRef.tb_system__DOT__ecB;
    vlSelfRef.__VassignWtmp_h67a57512__0 = __Vintraval_h13f6c765__0;
    co_await vlSelfRef.__VdlySched.delay(0x64ULL, nullptr, 
                                         "tb/tb_system.sv", 
                                         44);
    if ((vlSelfRef.__VassignWgen_hee47ec46__0 == __VassignWgen_hee47ec46__0__local)) {
        vlSelfRef.tb_system__DOT__ecB_w = __Vintraval_h13f6c765__0;
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_system__ConstPool__TABLE_hc7444b56_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_system__ConstPool__TABLE_h86ed8b54_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_system__ConstPool__TABLE_hba7ac097_0;

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__4(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = (((IData)(vlSelfRef.tb_system__DOT__clrAckA) 
                     << 3U) | (((IData)(vlSelfRef.tb_system__DOT__isoAckA) 
                                << 2U) | (IData)(vlSelfRef.tb_system__DOT__A__DOT__PhaseSync)));
    vlSelfRef.tb_system__DOT__A__DOT__EchoIsolate = 
        Vtb_system__ConstPool__TABLE_hc7444b56_0[__Vtableidx2];
    vlSelfRef.tb_system__DOT__A__DOT__EchoClear = Vtb_system__ConstPool__TABLE_h86ed8b54_0
        [__Vtableidx2];
    vlSelfRef.tb_system__DOT__A__DOT__echo__DOT__Done 
        = Vtb_system__ConstPool__TABLE_hba7ac097_0[__Vtableidx2];
}

VL_INLINE_OPT void Vtb_system___024root___act_sequent__TOP__5(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_sequent__TOP__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (((IData)(vlSelfRef.tb_system__DOT__clrAckB) 
                     << 3U) | (((IData)(vlSelfRef.tb_system__DOT__isoAckB) 
                                << 2U) | (IData)(vlSelfRef.tb_system__DOT__B__DOT__PhaseSync)));
    vlSelfRef.tb_system__DOT__B__DOT__EchoIsolate = 
        Vtb_system__ConstPool__TABLE_hc7444b56_0[__Vtableidx4];
    vlSelfRef.tb_system__DOT__B__DOT__EchoClear = Vtb_system__ConstPool__TABLE_h86ed8b54_0
        [__Vtableidx4];
    vlSelfRef.tb_system__DOT__B__DOT__echo__DOT__Done 
        = Vtb_system__ConstPool__TABLE_hba7ac097_0[__Vtableidx4];
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_system__ConstPool__TABLE_hdc86a72c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_system__ConstPool__TABLE_hb8eebe0d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_system__ConstPool__TABLE_h4a0bfdad_0;

VL_INLINE_OPT void Vtb_system___024root___act_comb__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_comb__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_system__DOT__A__DOT__FsmClear;
    tb_system__DOT__A__DOT__FsmClear = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_system__DOT__startA) 
                      << 6U) | (((IData)(vlSelfRef.tb_system__DOT__isoAckA) 
                                 << 5U) | ((IData)(vlSelfRef.tb_system__DOT__clrAckA) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.tb_system__DOT__A__DOT__EchoSync) 
                        << 2U) | (IData)(vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state)));
    vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__nextState 
        = Vtb_system__ConstPool__TABLE_hdc86a72c_0[__Vtableidx1];
    vlSelfRef.tb_system__DOT__A__DOT__FsmIsolate = 
        Vtb_system__ConstPool__TABLE_hb8eebe0d_0[__Vtableidx1];
    tb_system__DOT__A__DOT__FsmClear = Vtb_system__ConstPool__TABLE_h4a0bfdad_0
        [__Vtableidx1];
    vlSelfRef.tb_system__DOT__isoA = ((IData)(vlSelfRef.tb_system__DOT__A__DOT__EchoIsolate) 
                                      | (IData)(vlSelfRef.tb_system__DOT__A__DOT__FsmIsolate));
    vlSelfRef.tb_system__DOT__clrA = ((IData)(vlSelfRef.tb_system__DOT__A__DOT__EchoClear) 
                                      | (IData)(tb_system__DOT__A__DOT__FsmClear));
    vlSelfRef.tb_system__DOT__isoAckA = ((IData)(vlSelfRef.tb_system__DOT__isoA) 
                                         & (7U == (IData)(vlSelfRef.tb_system__DOT__isoA_sr)));
    vlSelfRef.tb_system__DOT__clrAckA = ((IData)(vlSelfRef.tb_system__DOT__clrA) 
                                         & (3U == (IData)(vlSelfRef.tb_system__DOT__clrA_sr)));
}

VL_INLINE_OPT void Vtb_system___024root___act_comb__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___act_comb__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ tb_system__DOT__B__DOT__FsmClear;
    tb_system__DOT__B__DOT__FsmClear = 0;
    CData/*6:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = ((((IData)(vlSelfRef.tb_system__DOT__startB) 
                      << 6U) | (((IData)(vlSelfRef.tb_system__DOT__isoAckB) 
                                 << 5U) | ((IData)(vlSelfRef.tb_system__DOT__clrAckB) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.tb_system__DOT__B__DOT__EchoSync) 
                        << 2U) | (IData)(vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state)));
    vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__nextState 
        = Vtb_system__ConstPool__TABLE_hdc86a72c_0[__Vtableidx3];
    vlSelfRef.tb_system__DOT__B__DOT__FsmIsolate = 
        Vtb_system__ConstPool__TABLE_hb8eebe0d_0[__Vtableidx3];
    tb_system__DOT__B__DOT__FsmClear = Vtb_system__ConstPool__TABLE_h4a0bfdad_0
        [__Vtableidx3];
    vlSelfRef.tb_system__DOT__clrB = ((IData)(vlSelfRef.tb_system__DOT__B__DOT__EchoClear) 
                                      | (IData)(tb_system__DOT__B__DOT__FsmClear));
    vlSelfRef.tb_system__DOT__isoB = ((IData)(vlSelfRef.tb_system__DOT__B__DOT__EchoIsolate) 
                                      | (IData)(vlSelfRef.tb_system__DOT__B__DOT__FsmIsolate));
    vlSelfRef.tb_system__DOT__clrAckB = ((IData)(vlSelfRef.tb_system__DOT__clrB) 
                                         & (3U == (IData)(vlSelfRef.tb_system__DOT__clrB_sr)));
    vlSelfRef.tb_system__DOT__isoAckB = ((IData)(vlSelfRef.tb_system__DOT__isoB) 
                                         & ((~ (IData)(vlSelfRef.tb_system__DOT__stallB)) 
                                            & (7U == (IData)(vlSelfRef.tb_system__DOT__isoB_sr))));
}

void Vtb_system___024root___nba_sequent__TOP__0(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__1(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__2(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__3(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__4(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__5(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__6(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__7(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__8(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__9(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__10(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__11(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__12(Vtb_system___024root* vlSelf);
void Vtb_system___024root___nba_sequent__TOP__13(Vtb_system___024root* vlSelf);

void Vtb_system___024root___eval_nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x3000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0xc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x8000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__3(vlSelf);
    }
    if ((0x10000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x20000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x100000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__6(vlSelf);
    }
    if ((0x200000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x40000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x80000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__9(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0xc0c0ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x3030ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((0x3300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x3000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0xcc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0xc000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((0x407300ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x3003ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x40dc00ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0xc00cULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_system___024root___act_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__0(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__0\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_system__DOT__rstA) {
        vlSelfRef.tb_system__DOT__clrA_sr = ((2U & 
                                              ((IData)(vlSelfRef.tb_system__DOT__clrA_sr) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_system__DOT__clrA));
        vlSelfRef.tb_system__DOT__isoA_sr = ((6U & 
                                              ((IData)(vlSelfRef.tb_system__DOT__isoA_sr) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_system__DOT__isoA));
        if (((IData)(vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s2) 
             == (IData)(vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__prev))) {
            vlSelfRef.tb_system__DOT__A__DOT__EchoSync 
                = vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s2;
        }
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__prev 
            = vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s2;
        if (vlSelfRef.tb_system__DOT__A__DOT__echo__DOT__Done) {
            vlSelfRef.tb_system__DOT__ecA = vlSelfRef.tb_system__DOT__A__DOT__PhaseSync;
        }
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s2 
            = vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s1;
        if (((IData)(vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s2) 
             == (IData)(vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__prev))) {
            vlSelfRef.tb_system__DOT__A__DOT__PhaseSync 
                = vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s2;
        }
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__prev 
            = vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s2;
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s1 
            = vlSelfRef.tb_system__DOT__ecB_w;
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s2 
            = vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s1;
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s1 
            = vlSelfRef.tb_system__DOT__phB_w;
    } else {
        vlSelfRef.tb_system__DOT__clrA_sr = 0U;
        vlSelfRef.tb_system__DOT__isoA_sr = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__prev = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__EchoSync = 0U;
        vlSelfRef.tb_system__DOT__ecA = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s2 = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__prev = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__PhaseSync = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncEcho__DOT__s1 = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s2 = 0U;
        vlSelfRef.tb_system__DOT__A__DOT__syncPhase__DOT__s1 = 0U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__1(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__1\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_system__DOT__rstB) {
        vlSelfRef.tb_system__DOT__clrB_sr = ((2U & 
                                              ((IData)(vlSelfRef.tb_system__DOT__clrB_sr) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_system__DOT__clrB));
        vlSelfRef.tb_system__DOT__isoB_sr = ((6U & 
                                              ((IData)(vlSelfRef.tb_system__DOT__isoB_sr) 
                                               << 1U)) 
                                             | (IData)(vlSelfRef.tb_system__DOT__isoB));
        if (((IData)(vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s2) 
             == (IData)(vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__prev))) {
            vlSelfRef.tb_system__DOT__B__DOT__EchoSync 
                = vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s2;
        }
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__prev 
            = vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s2;
        if (vlSelfRef.tb_system__DOT__B__DOT__echo__DOT__Done) {
            vlSelfRef.tb_system__DOT__ecB = vlSelfRef.tb_system__DOT__B__DOT__PhaseSync;
        }
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s2 
            = vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s1;
        if (((IData)(vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s2) 
             == (IData)(vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__prev))) {
            vlSelfRef.tb_system__DOT__B__DOT__PhaseSync 
                = vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s2;
        }
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__prev 
            = vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s2;
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s1 
            = vlSelfRef.tb_system__DOT__ecA_w;
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s2 
            = vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s1;
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s1 
            = vlSelfRef.tb_system__DOT__phA_w;
    } else {
        vlSelfRef.tb_system__DOT__clrB_sr = 0U;
        vlSelfRef.tb_system__DOT__isoB_sr = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__prev = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__EchoSync = 0U;
        vlSelfRef.tb_system__DOT__ecB = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s2 = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__prev = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__PhaseSync = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncEcho__DOT__s1 = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s2 = 0U;
        vlSelfRef.tb_system__DOT__B__DOT__syncPhase__DOT__s1 = 0U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__2(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__2\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__rstSeenA = 1U;
    vlSelfRef.tb_system__DOT__needA = 1U;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__3(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__3\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__rstSeenB = 1U;
    vlSelfRef.tb_system__DOT__needB = 1U;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__4(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__4\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__needA = 1U;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__5(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__5\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__needB = 1U;
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__6(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__6\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__clearsSeenA = ((IData)(1U) 
                                             + vlSelfRef.tb_system__DOT__clearsSeenA);
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__7(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__7\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__clearsSeenB = ((IData)(1U) 
                                             + vlSelfRef.tb_system__DOT__clearsSeenB);
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__8(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__8\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_system__DOT__fail__2__msg;
    // Body
    if (vlSelfRef.tb_system__DOT__rstA) {
        if (vlSelfRef.tb_system__DOT__needA) {
            __Vtask_tb_system__DOT__fail__2__msg = 
                std::string{"P2: A finished without B clearing"};
            vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_system__DOT__errors);
            if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
                VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,-1,&(__Vtask_tb_system__DOT__fail__2__msg));
            }
        } else {
            vlSelfRef.tb_system__DOT__seqA = ((IData)(1U) 
                                              + vlSelfRef.tb_system__DOT__seqA);
        }
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__9(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__9\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_system__DOT__fail__3__msg;
    // Body
    if (vlSelfRef.tb_system__DOT__rstB) {
        if (vlSelfRef.tb_system__DOT__needB) {
            __Vtask_tb_system__DOT__fail__3__msg = 
                std::string{"P2: B finished without A clearing"};
            vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.tb_system__DOT__errors);
            if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
                VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,
                             64,VL_TIME_UNITED_Q(1000),
                             -9,-1,&(__Vtask_tb_system__DOT__fail__3__msg));
            }
        } else {
            vlSelfRef.tb_system__DOT__seqB = ((IData)(1U) 
                                              + vlSelfRef.tb_system__DOT__seqB);
        }
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__10(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__10\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_system__DOT__fail__0__msg;
    std::string __Vtask_tb_system__DOT__fail__4__msg;
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__rstA) & (IData)(vlSelfRef.tb_system__DOT__A__DOT__EchoClear))) {
        vlSelfRef.tb_system__DOT__needB = 0U;
    }
    if ((((IData)(vlSelfRef.tb_system__DOT__rstA) & (IData)(vlSelfRef.tb_system__DOT__clrA)) 
         & (~ ((IData)(vlSelfRef.tb_system__DOT__isoA) 
               & (IData)(vlSelfRef.tb_system__DOT__isoB))))) {
        __Vtask_tb_system__DOT__fail__0__msg = std::string{"P1: A clearing while not both isolated"};
        vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_system__DOT__errors);
        if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
            VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,64,
                         VL_TIME_UNITED_Q(1000),-9,
                         -1,&(__Vtask_tb_system__DOT__fail__0__msg));
        }
    }
    if ((((IData)(vlSelfRef.tb_system__DOT__rstA) & 
          (~ (IData)(vlSelfRef.tb_system__DOT__rstSeenA))) 
         & (3U == ((IData)(vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state) 
                   ^ (IData)(vlSelfRef.tb_system__DOT__lastA))))) {
        __Vtask_tb_system__DOT__fail__4__msg = std::string{"P3: A PhaseOut changed 2 bits"};
        vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_system__DOT__errors);
        if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
            VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,64,
                         VL_TIME_UNITED_Q(1000),-9,
                         -1,&(__Vtask_tb_system__DOT__fail__4__msg));
        }
    }
    vlSelfRef.tb_system__DOT__lastA = vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state;
    if (vlSelfRef.tb_system__DOT__rstA) {
        vlSelfRef.tb_system__DOT__rstSeenA = 0U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__11(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__11\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    std::string __Vtask_tb_system__DOT__fail__1__msg;
    std::string __Vtask_tb_system__DOT__fail__5__msg;
    // Body
    if (((IData)(vlSelfRef.tb_system__DOT__rstB) & (IData)(vlSelfRef.tb_system__DOT__B__DOT__EchoClear))) {
        vlSelfRef.tb_system__DOT__needA = 0U;
    }
    if ((((IData)(vlSelfRef.tb_system__DOT__rstB) & (IData)(vlSelfRef.tb_system__DOT__clrB)) 
         & (~ ((IData)(vlSelfRef.tb_system__DOT__isoA) 
               & (IData)(vlSelfRef.tb_system__DOT__isoB))))) {
        __Vtask_tb_system__DOT__fail__1__msg = std::string{"P1: B clearing while not both isolated"};
        vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_system__DOT__errors);
        if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
            VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,64,
                         VL_TIME_UNITED_Q(1000),-9,
                         -1,&(__Vtask_tb_system__DOT__fail__1__msg));
        }
    }
    if ((((IData)(vlSelfRef.tb_system__DOT__rstB) & 
          (~ (IData)(vlSelfRef.tb_system__DOT__rstSeenB))) 
         & (3U == ((IData)(vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state) 
                   ^ (IData)(vlSelfRef.tb_system__DOT__lastB))))) {
        __Vtask_tb_system__DOT__fail__5__msg = std::string{"P3: B PhaseOut changed 2 bits"};
        vlSelfRef.tb_system__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_system__DOT__errors);
        if (VL_UNLIKELY((VL_GTES_III(32, 0xaU, vlSelfRef.tb_system__DOT__errors)))) {
            VL_WRITEF_NX("  FAIL t=%0t: %@\n",0,64,
                         VL_TIME_UNITED_Q(1000),-9,
                         -1,&(__Vtask_tb_system__DOT__fail__5__msg));
        }
    }
    vlSelfRef.tb_system__DOT__lastB = vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state;
    if (vlSelfRef.tb_system__DOT__rstB) {
        vlSelfRef.tb_system__DOT__rstSeenB = 0U;
    }
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__12(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__12\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state 
        = ((IData)(vlSelfRef.tb_system__DOT__rstA) ? (IData)(vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__nextState)
            : 1U);
    vlSelfRef.tb_system__DOT__busyA = (0U != (IData)(vlSelfRef.tb_system__DOT__A__DOT__fsm__DOT__state));
}

VL_INLINE_OPT void Vtb_system___024root___nba_sequent__TOP__13(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___nba_sequent__TOP__13\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state 
        = ((IData)(vlSelfRef.tb_system__DOT__rstB) ? (IData)(vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__nextState)
            : 1U);
    vlSelfRef.tb_system__DOT__busyB = (0U != (IData)(vlSelfRef.tb_system__DOT__B__DOT__fsm__DOT__state));
}

void Vtb_system___024root___timing_resume(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___timing_resume\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hcdad19d4__0.resume(
                                                   "@(posedge tb_system.clkA)");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h33a4bbd1__0.resume(
                                                   "@(posedge tb_system.clkB)");
    }
    if ((0x400000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_system___024root___timing_commit(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___timing_commit\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (0x1000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hcdad19d4__0.commit(
                                                   "@(posedge tb_system.clkA)");
    }
    if ((! (0x4000ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h33a4bbd1__0.commit(
                                                   "@(posedge tb_system.clkB)");
    }
}

void Vtb_system___024root___eval_triggers__act(Vtb_system___024root* vlSelf);

bool Vtb_system___024root___eval_phase__act(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__act\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<23> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_system___024root___eval_triggers__act(vlSelf);
    Vtb_system___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_system___024root___timing_resume(vlSelf);
        Vtb_system___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_system___024root___eval_phase__nba(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_phase__nba\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_system___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__nba(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_system___024root___dump_triggers__act(Vtb_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_system___024root___eval(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_system___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_system.sv", 26, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_system___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_system.sv", 26, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_system___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_system___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_system___024root___eval_debug_assertions(Vtb_system___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_system___024root___eval_debug_assertions\n"); );
    Vtb_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
