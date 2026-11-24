// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ResetFSM.h for the primary calling header

#include "Vtb_ResetFSM__pch.h"
#include "Vtb_ResetFSM___024root.h"

VlCoroutine Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__0(Vtb_ResetFSM___024root* vlSelf);
VlCoroutine Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__1(Vtb_ResetFSM___024root* vlSelf);

void Vtb_ResetFSM___024root___eval_initial(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_initial\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__0(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__0__ph;
    __Vtask_tb_ResetFSM__DOT__check__0__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__0__iso;
    __Vtask_tb_ResetFSM__DOT__check__0__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__0__clr;
    __Vtask_tb_ResetFSM__DOT__check__0__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__0__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__1__n;
    __Vtask_tb_ResetFSM__DOT__step__1__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__3__ph;
    __Vtask_tb_ResetFSM__DOT__check__3__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__3__iso;
    __Vtask_tb_ResetFSM__DOT__check__3__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__3__clr;
    __Vtask_tb_ResetFSM__DOT__check__3__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__3__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__4__n;
    __Vtask_tb_ResetFSM__DOT__step__4__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__5__ph;
    __Vtask_tb_ResetFSM__DOT__check__5__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__5__iso;
    __Vtask_tb_ResetFSM__DOT__check__5__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__5__clr;
    __Vtask_tb_ResetFSM__DOT__check__5__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__5__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__6__n;
    __Vtask_tb_ResetFSM__DOT__step__6__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__7__ph;
    __Vtask_tb_ResetFSM__DOT__check__7__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__7__iso;
    __Vtask_tb_ResetFSM__DOT__check__7__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__7__clr;
    __Vtask_tb_ResetFSM__DOT__check__7__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__7__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__8__n;
    __Vtask_tb_ResetFSM__DOT__step__8__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__9__ph;
    __Vtask_tb_ResetFSM__DOT__check__9__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__9__iso;
    __Vtask_tb_ResetFSM__DOT__check__9__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__9__clr;
    __Vtask_tb_ResetFSM__DOT__check__9__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__9__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__10__n;
    __Vtask_tb_ResetFSM__DOT__step__10__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__11__ph;
    __Vtask_tb_ResetFSM__DOT__check__11__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__11__iso;
    __Vtask_tb_ResetFSM__DOT__check__11__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__11__clr;
    __Vtask_tb_ResetFSM__DOT__check__11__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__11__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__12__n;
    __Vtask_tb_ResetFSM__DOT__step__12__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__13__ph;
    __Vtask_tb_ResetFSM__DOT__check__13__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__13__iso;
    __Vtask_tb_ResetFSM__DOT__check__13__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__13__clr;
    __Vtask_tb_ResetFSM__DOT__check__13__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__13__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__14__n;
    __Vtask_tb_ResetFSM__DOT__step__14__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__15__ph;
    __Vtask_tb_ResetFSM__DOT__check__15__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__15__iso;
    __Vtask_tb_ResetFSM__DOT__check__15__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__15__clr;
    __Vtask_tb_ResetFSM__DOT__check__15__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__15__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__16__n;
    __Vtask_tb_ResetFSM__DOT__step__16__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__17__ph;
    __Vtask_tb_ResetFSM__DOT__check__17__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__17__iso;
    __Vtask_tb_ResetFSM__DOT__check__17__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__17__clr;
    __Vtask_tb_ResetFSM__DOT__check__17__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__17__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__18__n;
    __Vtask_tb_ResetFSM__DOT__step__18__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__19__ph;
    __Vtask_tb_ResetFSM__DOT__check__19__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__19__iso;
    __Vtask_tb_ResetFSM__DOT__check__19__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__19__clr;
    __Vtask_tb_ResetFSM__DOT__check__19__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__19__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__20__n;
    __Vtask_tb_ResetFSM__DOT__step__20__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__21__ph;
    __Vtask_tb_ResetFSM__DOT__check__21__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__21__iso;
    __Vtask_tb_ResetFSM__DOT__check__21__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__21__clr;
    __Vtask_tb_ResetFSM__DOT__check__21__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__21__what;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__22__ph;
    __Vtask_tb_ResetFSM__DOT__check__22__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__22__iso;
    __Vtask_tb_ResetFSM__DOT__check__22__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__22__clr;
    __Vtask_tb_ResetFSM__DOT__check__22__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__22__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__23__n;
    __Vtask_tb_ResetFSM__DOT__step__23__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__24__n;
    __Vtask_tb_ResetFSM__DOT__step__24__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__25__ph;
    __Vtask_tb_ResetFSM__DOT__check__25__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__25__iso;
    __Vtask_tb_ResetFSM__DOT__check__25__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__25__clr;
    __Vtask_tb_ResetFSM__DOT__check__25__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__25__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__26__n;
    __Vtask_tb_ResetFSM__DOT__step__26__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__27__ph;
    __Vtask_tb_ResetFSM__DOT__check__27__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__27__iso;
    __Vtask_tb_ResetFSM__DOT__check__27__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__27__clr;
    __Vtask_tb_ResetFSM__DOT__check__27__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__27__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__28__n;
    __Vtask_tb_ResetFSM__DOT__step__28__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__29__ph;
    __Vtask_tb_ResetFSM__DOT__check__29__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__29__iso;
    __Vtask_tb_ResetFSM__DOT__check__29__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__29__clr;
    __Vtask_tb_ResetFSM__DOT__check__29__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__29__what;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__31__ph;
    __Vtask_tb_ResetFSM__DOT__check__31__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__31__iso;
    __Vtask_tb_ResetFSM__DOT__check__31__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__31__clr;
    __Vtask_tb_ResetFSM__DOT__check__31__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__31__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__32__n;
    __Vtask_tb_ResetFSM__DOT__step__32__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__33__ph;
    __Vtask_tb_ResetFSM__DOT__check__33__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__33__iso;
    __Vtask_tb_ResetFSM__DOT__check__33__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__33__clr;
    __Vtask_tb_ResetFSM__DOT__check__33__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__33__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__34__n;
    __Vtask_tb_ResetFSM__DOT__step__34__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__35__ph;
    __Vtask_tb_ResetFSM__DOT__check__35__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__35__iso;
    __Vtask_tb_ResetFSM__DOT__check__35__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__35__clr;
    __Vtask_tb_ResetFSM__DOT__check__35__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__35__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__36__n;
    __Vtask_tb_ResetFSM__DOT__step__36__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__37__ph;
    __Vtask_tb_ResetFSM__DOT__check__37__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__37__iso;
    __Vtask_tb_ResetFSM__DOT__check__37__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__37__clr;
    __Vtask_tb_ResetFSM__DOT__check__37__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__37__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__38__n;
    __Vtask_tb_ResetFSM__DOT__step__38__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__39__ph;
    __Vtask_tb_ResetFSM__DOT__check__39__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__39__iso;
    __Vtask_tb_ResetFSM__DOT__check__39__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__39__clr;
    __Vtask_tb_ResetFSM__DOT__check__39__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__39__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__40__n;
    __Vtask_tb_ResetFSM__DOT__step__40__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__41__ph;
    __Vtask_tb_ResetFSM__DOT__check__41__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__41__iso;
    __Vtask_tb_ResetFSM__DOT__check__41__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__41__clr;
    __Vtask_tb_ResetFSM__DOT__check__41__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__41__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__42__n;
    __Vtask_tb_ResetFSM__DOT__step__42__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__43__ph;
    __Vtask_tb_ResetFSM__DOT__check__43__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__43__iso;
    __Vtask_tb_ResetFSM__DOT__check__43__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__43__clr;
    __Vtask_tb_ResetFSM__DOT__check__43__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__43__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__44__n;
    __Vtask_tb_ResetFSM__DOT__step__44__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__45__ph;
    __Vtask_tb_ResetFSM__DOT__check__45__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__45__iso;
    __Vtask_tb_ResetFSM__DOT__check__45__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__45__clr;
    __Vtask_tb_ResetFSM__DOT__check__45__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__45__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__46__n;
    __Vtask_tb_ResetFSM__DOT__step__46__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__47__ph;
    __Vtask_tb_ResetFSM__DOT__check__47__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__47__iso;
    __Vtask_tb_ResetFSM__DOT__check__47__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__47__clr;
    __Vtask_tb_ResetFSM__DOT__check__47__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__47__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__48__n;
    __Vtask_tb_ResetFSM__DOT__step__48__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__49__ph;
    __Vtask_tb_ResetFSM__DOT__check__49__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__49__iso;
    __Vtask_tb_ResetFSM__DOT__check__49__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__49__clr;
    __Vtask_tb_ResetFSM__DOT__check__49__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__49__what;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__50__ph;
    __Vtask_tb_ResetFSM__DOT__check__50__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__50__iso;
    __Vtask_tb_ResetFSM__DOT__check__50__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__50__clr;
    __Vtask_tb_ResetFSM__DOT__check__50__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__50__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__51__n;
    __Vtask_tb_ResetFSM__DOT__step__51__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__52__n;
    __Vtask_tb_ResetFSM__DOT__step__52__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__53__ph;
    __Vtask_tb_ResetFSM__DOT__check__53__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__53__iso;
    __Vtask_tb_ResetFSM__DOT__check__53__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__53__clr;
    __Vtask_tb_ResetFSM__DOT__check__53__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__53__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__54__n;
    __Vtask_tb_ResetFSM__DOT__step__54__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__55__ph;
    __Vtask_tb_ResetFSM__DOT__check__55__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__55__iso;
    __Vtask_tb_ResetFSM__DOT__check__55__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__55__clr;
    __Vtask_tb_ResetFSM__DOT__check__55__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__55__what;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__56__ph;
    __Vtask_tb_ResetFSM__DOT__check__56__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__56__iso;
    __Vtask_tb_ResetFSM__DOT__check__56__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__56__clr;
    __Vtask_tb_ResetFSM__DOT__check__56__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__56__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__57__n;
    __Vtask_tb_ResetFSM__DOT__step__57__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__59__ph;
    __Vtask_tb_ResetFSM__DOT__check__59__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__59__iso;
    __Vtask_tb_ResetFSM__DOT__check__59__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__59__clr;
    __Vtask_tb_ResetFSM__DOT__check__59__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__59__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__60__n;
    __Vtask_tb_ResetFSM__DOT__step__60__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__61__ph;
    __Vtask_tb_ResetFSM__DOT__check__61__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__61__iso;
    __Vtask_tb_ResetFSM__DOT__check__61__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__61__clr;
    __Vtask_tb_ResetFSM__DOT__check__61__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__61__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__62__n;
    __Vtask_tb_ResetFSM__DOT__step__62__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__63__ph;
    __Vtask_tb_ResetFSM__DOT__check__63__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__63__iso;
    __Vtask_tb_ResetFSM__DOT__check__63__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__63__clr;
    __Vtask_tb_ResetFSM__DOT__check__63__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__63__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__64__n;
    __Vtask_tb_ResetFSM__DOT__step__64__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__65__ph;
    __Vtask_tb_ResetFSM__DOT__check__65__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__65__iso;
    __Vtask_tb_ResetFSM__DOT__check__65__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__65__clr;
    __Vtask_tb_ResetFSM__DOT__check__65__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__65__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__66__n;
    __Vtask_tb_ResetFSM__DOT__step__66__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__67__ph;
    __Vtask_tb_ResetFSM__DOT__check__67__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__67__iso;
    __Vtask_tb_ResetFSM__DOT__check__67__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__67__clr;
    __Vtask_tb_ResetFSM__DOT__check__67__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__67__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__68__n;
    __Vtask_tb_ResetFSM__DOT__step__68__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__69__ph;
    __Vtask_tb_ResetFSM__DOT__check__69__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__69__iso;
    __Vtask_tb_ResetFSM__DOT__check__69__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__69__clr;
    __Vtask_tb_ResetFSM__DOT__check__69__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__69__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__70__n;
    __Vtask_tb_ResetFSM__DOT__step__70__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__71__ph;
    __Vtask_tb_ResetFSM__DOT__check__71__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__71__iso;
    __Vtask_tb_ResetFSM__DOT__check__71__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__71__clr;
    __Vtask_tb_ResetFSM__DOT__check__71__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__71__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__72__n;
    __Vtask_tb_ResetFSM__DOT__step__72__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__73__ph;
    __Vtask_tb_ResetFSM__DOT__check__73__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__73__iso;
    __Vtask_tb_ResetFSM__DOT__check__73__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__73__clr;
    __Vtask_tb_ResetFSM__DOT__check__73__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__73__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__74__n;
    __Vtask_tb_ResetFSM__DOT__step__74__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__75__ph;
    __Vtask_tb_ResetFSM__DOT__check__75__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__75__iso;
    __Vtask_tb_ResetFSM__DOT__check__75__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__75__clr;
    __Vtask_tb_ResetFSM__DOT__check__75__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__75__what;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__76__n;
    __Vtask_tb_ResetFSM__DOT__step__76__n = 0;
    IData/*31:0*/ __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__77__ph;
    __Vtask_tb_ResetFSM__DOT__check__77__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__77__iso;
    __Vtask_tb_ResetFSM__DOT__check__77__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__77__clr;
    __Vtask_tb_ResetFSM__DOT__check__77__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__77__what;
    CData/*1:0*/ __Vtask_tb_ResetFSM__DOT__check__78__ph;
    __Vtask_tb_ResetFSM__DOT__check__78__ph = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__78__iso;
    __Vtask_tb_ResetFSM__DOT__check__78__iso = 0;
    CData/*0:0*/ __Vtask_tb_ResetFSM__DOT__check__78__clr;
    __Vtask_tb_ResetFSM__DOT__check__78__clr = 0;
    std::string __Vtask_tb_ResetFSM__DOT__check__78__what;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2ee0ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         66);
    __Vtask_tb_ResetFSM__DOT__check__0__what = std::string{"during reset"};
    __Vtask_tb_ResetFSM__DOT__check__0__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__0__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__0__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__0__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__0__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__0__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__0__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__0__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__0__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__0__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__reset_b = 1U;
    __Vtask_tb_ResetFSM__DOT__step__1__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__1__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__1__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__3__what = std::string{"in ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__3__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__3__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__3__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__3__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__3__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__3__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__3__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__3__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__3__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__3__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__4__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__4__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__4__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__5__what = std::string{"echo alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__5__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__5__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__5__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__5__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__5__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__5__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__5__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__5__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__5__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__5__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__6__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__6__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__6__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__7__what = std::string{"ack alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__7__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__7__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__7__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__7__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__7__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__7__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__7__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__7__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__7__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__7__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__8__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__8__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__8__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__9__what = std::string{"echo+IsoAck -> CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__9__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__9__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__9__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__9__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__9__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__9__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__9__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__9__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__9__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__9__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__10__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__10__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__10__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__11__what = std::string{"stale echo does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__11__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__11__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__11__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__11__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__11__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__11__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__11__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__11__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__11__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__11__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 3U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__12__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__12__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__12__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__13__what = std::string{"echo alone does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__13__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__13__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__13__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__13__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__13__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__13__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__13__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__13__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__13__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__13__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__14__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__14__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__14__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__15__what = std::string{"echo+ClrAck -> POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__15__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__15__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__15__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__15__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__15__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__15__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__15__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__15__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__15__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__15__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__16__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__16__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__16__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__17__what = std::string{"waits for echo POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__17__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__17__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__17__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__17__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__17__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__17__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__17__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__17__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__17__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__17__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 2U;
    __Vtask_tb_ResetFSM__DOT__step__18__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__18__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__18__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__19__what = std::string{"-> IDLE, still isolated"};
    __Vtask_tb_ResetFSM__DOT__check__19__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__19__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__19__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__19__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__19__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__19__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__19__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__19__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__19__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__19__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_ResetFSM__DOT__step__20__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__20__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__20__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__21__what = std::string{"isolated while echo != IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__21__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__21__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__21__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__21__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__21__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__21__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__21__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__21__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__21__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__21__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         61);
    __Vtask_tb_ResetFSM__DOT__check__22__what = std::string{"released when echo = IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__22__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__22__iso = 0U;
    __Vtask_tb_ResetFSM__DOT__check__22__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__22__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__22__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__22__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__22__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__22__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__22__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__22__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_ResetFSM__DOT__step__23__n = 2U;
    __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__23__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__23__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    vlSelfRef.tb_ResetFSM__DOT__Echo = 2U;
    vlSelfRef.tb_ResetFSM__DOT__Start = 1U;
    __Vtask_tb_ResetFSM__DOT__step__24__n = 3U;
    __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__24__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__24__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__25__what = std::string{"Start ignored while echo != IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__25__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__25__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__25__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__25__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__25__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__25__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__25__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__25__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__25__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__25__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Start = 0U;
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    __Vtask_tb_ResetFSM__DOT__step__26__n = 2U;
    __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__26__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__26__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__27__what = std::string{"stays IDLE without Start"};
    __Vtask_tb_ResetFSM__DOT__check__27__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__27__iso = 0U;
    __Vtask_tb_ResetFSM__DOT__check__27__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__27__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__27__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__27__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__27__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__27__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__27__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__27__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Start = 1U;
    __Vtask_tb_ResetFSM__DOT__step__28__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__28__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__28__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    vlSelfRef.tb_ResetFSM__DOT__Start = 0U;
    __Vtask_tb_ResetFSM__DOT__check__29__what = std::string{"Start -> ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__29__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__29__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__29__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__29__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__29__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__29__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__29__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__29__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__29__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__29__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_ResetFSM__DOT__check__31__what = std::string{"in ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__31__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__31__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__31__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__31__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__31__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__31__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__31__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__31__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__31__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__31__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__32__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__32__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__32__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__33__what = std::string{"echo alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__33__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__33__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__33__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__33__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__33__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__33__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__33__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__33__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__33__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__33__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__34__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__34__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__34__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__35__what = std::string{"ack alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__35__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__35__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__35__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__35__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__35__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__35__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__35__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__35__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__35__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__35__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__36__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__36__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__36__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__37__what = std::string{"echo+IsoAck -> CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__37__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__37__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__37__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__37__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__37__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__37__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__37__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__37__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__37__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__37__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__38__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__38__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__38__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__39__what = std::string{"stale echo does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__39__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__39__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__39__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__39__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__39__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__39__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__39__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__39__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__39__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__39__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 3U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__40__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__40__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__40__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__41__what = std::string{"echo alone does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__41__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__41__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__41__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__41__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__41__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__41__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__41__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__41__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__41__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__41__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__42__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__42__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__42__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__43__what = std::string{"echo+ClrAck -> POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__43__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__43__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__43__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__43__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__43__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__43__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__43__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__43__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__43__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__43__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__44__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__44__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__44__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__45__what = std::string{"waits for echo POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__45__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__45__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__45__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__45__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__45__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__45__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__45__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__45__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__45__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__45__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 2U;
    __Vtask_tb_ResetFSM__DOT__step__46__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__46__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__46__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__47__what = std::string{"-> IDLE, still isolated"};
    __Vtask_tb_ResetFSM__DOT__check__47__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__47__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__47__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__47__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__47__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__47__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__47__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__47__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__47__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__47__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_ResetFSM__DOT__step__48__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__48__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__48__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__49__what = std::string{"isolated while echo != IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__49__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__49__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__49__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__49__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__49__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__49__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__49__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__49__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__49__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__49__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         61);
    __Vtask_tb_ResetFSM__DOT__check__50__what = std::string{"released when echo = IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__50__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__50__iso = 0U;
    __Vtask_tb_ResetFSM__DOT__check__50__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__50__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__50__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__50__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__50__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__50__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__50__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__50__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Start = 1U;
    __Vtask_tb_ResetFSM__DOT__step__51__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__51__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__51__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    vlSelfRef.tb_ResetFSM__DOT__Start = 0U;
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__52__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__52__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__52__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 0U;
    __Vtask_tb_ResetFSM__DOT__check__53__what = std::string{"reached CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__53__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__53__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__53__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__53__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__53__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__53__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__53__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__53__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__53__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__53__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Start = 1U;
    __Vtask_tb_ResetFSM__DOT__step__54__n = 3U;
    __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__54__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__54__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    vlSelfRef.tb_ResetFSM__DOT__Start = 0U;
    __Vtask_tb_ResetFSM__DOT__check__55__what = std::string{"Start ignored in CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__55__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__55__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__55__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__55__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__55__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__55__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__55__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__55__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__55__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__55__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         88);
    vlSelfRef.tb_ResetFSM__DOT__reset_b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         88);
    __Vtask_tb_ResetFSM__DOT__check__56__what = std::string{"async reset from CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__56__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__56__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__56__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__56__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__56__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__56__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__56__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__56__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__56__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__56__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_ResetFSM.clock)", 
                                                         "tb/tb_ResetFSM.sv", 
                                                         89);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         89);
    vlSelfRef.tb_ResetFSM__DOT__reset_b = 1U;
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    __Vtask_tb_ResetFSM__DOT__step__57__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__57__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__57__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__59__what = std::string{"in ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__59__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__59__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__59__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__59__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__59__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__59__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__59__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__59__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__59__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__59__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__60__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__60__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__60__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__61__what = std::string{"echo alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__61__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__61__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__61__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__61__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__61__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__61__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__61__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__61__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__61__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__61__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__62__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__62__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__62__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__63__what = std::string{"ack alone does not leave ISOLATE"};
    __Vtask_tb_ResetFSM__DOT__check__63__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__63__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__63__ph = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__63__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__63__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__63__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__63__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__63__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__63__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__63__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    __Vtask_tb_ResetFSM__DOT__step__64__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__64__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__64__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__65__what = std::string{"echo+IsoAck -> CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__65__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__65__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__65__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__65__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__65__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__65__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__65__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__65__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__65__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__65__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 1U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__66__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__66__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__66__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__67__what = std::string{"stale echo does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__67__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__67__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__67__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__67__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__67__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__67__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__67__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__67__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__67__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__67__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 3U;
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__68__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__68__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__68__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__69__what = std::string{"echo alone does not leave CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__69__clr = 1U;
    __Vtask_tb_ResetFSM__DOT__check__69__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__69__ph = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__69__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__69__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__69__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__69__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__69__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__69__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__69__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 1U;
    __Vtask_tb_ResetFSM__DOT__step__70__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__70__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__70__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__71__what = std::string{"echo+ClrAck -> POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__71__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__71__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__71__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__71__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__71__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__71__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__71__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__71__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__71__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__71__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__ClrAck = 0U;
    vlSelfRef.tb_ResetFSM__DOT__IsoAck = 0U;
    __Vtask_tb_ResetFSM__DOT__step__72__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__72__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__72__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__73__what = std::string{"waits for echo POST_CLEAR"};
    __Vtask_tb_ResetFSM__DOT__check__73__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__73__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__73__ph = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__73__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__73__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__73__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__73__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__73__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__73__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__73__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 2U;
    __Vtask_tb_ResetFSM__DOT__step__74__n = 1U;
    __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__74__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__74__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__75__what = std::string{"-> IDLE, still isolated"};
    __Vtask_tb_ResetFSM__DOT__check__75__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__75__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__75__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__75__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__75__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__75__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__75__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__75__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__75__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__75__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_ResetFSM__DOT__step__76__n = 4U;
    __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_ResetFSM__DOT__step__76__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_ha0071324__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_ResetFSM.clock)", 
                                                             "tb/tb_ResetFSM.sv", 
                                                             28);
        __Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_ResetFSM__DOT__step__76__tb_ResetFSM__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         29);
    __Vtask_tb_ResetFSM__DOT__check__77__what = std::string{"isolated while echo != IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__77__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__77__iso = 1U;
    __Vtask_tb_ResetFSM__DOT__check__77__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__77__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__77__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__77__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__77__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__77__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__77__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__77__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__Echo = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_ResetFSM.sv", 
                                         61);
    __Vtask_tb_ResetFSM__DOT__check__78__what = std::string{"released when echo = IDLE"};
    __Vtask_tb_ResetFSM__DOT__check__78__clr = 0U;
    __Vtask_tb_ResetFSM__DOT__check__78__iso = 0U;
    __Vtask_tb_ResetFSM__DOT__check__78__ph = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                        != (IData)(__Vtask_tb_ResetFSM__DOT__check__78__ph)) 
                       | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Isolate) 
                          != (IData)(__Vtask_tb_ResetFSM__DOT__check__78__iso))) 
                      | ((IData)(vlSelfRef.tb_ResetFSM__DOT__Clear) 
                         != (IData)(__Vtask_tb_ResetFSM__DOT__check__78__clr)))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Phase=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_ResetFSM__DOT__check__78__what),
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     1,vlSelfRef.tb_ResetFSM__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_ResetFSM__DOT__Clear),
                     2,__Vtask_tb_ResetFSM__DOT__check__78__ph,
                     1,(IData)(__Vtask_tb_ResetFSM__DOT__check__78__iso),
                     1,__Vtask_tb_ResetFSM__DOT__check__78__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if ((0U == vlSelfRef.tb_ResetFSM__DOT__errors)) {
        VL_WRITEF_NX("PASS tb_ResetFSM\n",0);
    } else {
        VL_WRITEF_NX("FAIL tb_ResetFSM: %0d errors\n",0,
                     32,vlSelfRef.tb_ResetFSM__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_ResetFSM.sv", 95, "");
}

VL_INLINE_OPT VlCoroutine Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__1(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_ResetFSM.sv", 
                                             16);
        vlSelfRef.tb_ResetFSM__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb_ResetFSM__DOT__clock)));
    }
}

void Vtb_ResetFSM___024root___act_comb__TOP__0(Vtb_ResetFSM___024root* vlSelf);

void Vtb_ResetFSM___024root___eval_act(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_act\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_ResetFSM___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtb_ResetFSM__ConstPool__TABLE_hdc86a72c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_ResetFSM__ConstPool__TABLE_hb8eebe0d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_ResetFSM__ConstPool__TABLE_h4a0bfdad_0;

VL_INLINE_OPT void Vtb_ResetFSM___024root___act_comb__TOP__0(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___act_comb__TOP__0\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = ((((IData)(vlSelfRef.tb_ResetFSM__DOT__Start) 
                      << 6U) | (((IData)(vlSelfRef.tb_ResetFSM__DOT__IsoAck) 
                                 << 5U) | ((IData)(vlSelfRef.tb_ResetFSM__DOT__ClrAck) 
                                           << 4U))) 
                    | (((IData)(vlSelfRef.tb_ResetFSM__DOT__Echo) 
                        << 2U) | (IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state)));
    vlSelfRef.tb_ResetFSM__DOT__dut__DOT__nextState 
        = Vtb_ResetFSM__ConstPool__TABLE_hdc86a72c_0
        [__Vtableidx1];
    vlSelfRef.tb_ResetFSM__DOT__Isolate = Vtb_ResetFSM__ConstPool__TABLE_hb8eebe0d_0
        [__Vtableidx1];
    vlSelfRef.tb_ResetFSM__DOT__Clear = Vtb_ResetFSM__ConstPool__TABLE_h4a0bfdad_0
        [__Vtableidx1];
}

void Vtb_ResetFSM___024root___nba_sequent__TOP__0(Vtb_ResetFSM___024root* vlSelf);
void Vtb_ResetFSM___024root___nba_sequent__TOP__1(Vtb_ResetFSM___024root* vlSelf);

void Vtb_ResetFSM___024root___eval_nba(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_nba\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ResetFSM___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ResetFSM___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_ResetFSM___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_ResetFSM___024root___nba_sequent__TOP__0(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___nba_sequent__TOP__0\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_ResetFSM__DOT__reset_b) 
                       & (~ (IData)(vlSelfRef.tb_ResetFSM__DOT__was_reset))) 
                      & (3U == ((IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state) 
                                ^ (IData)(vlSelfRef.tb_ResetFSM__DOT__last_phase))))))) {
        vlSelfRef.tb_ResetFSM__DOT__errors = ((IData)(1U) 
                                              + vlSelfRef.tb_ResetFSM__DOT__errors);
        VL_WRITEF_NX("FAIL Gray: Phase %b -> %b changed 2 bits (t=%0t)\n",0,
                     2,vlSelfRef.tb_ResetFSM__DOT__last_phase,
                     2,(IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state),
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_ResetFSM__DOT__last_phase = vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state;
    vlSelfRef.tb_ResetFSM__DOT__was_reset = (1U & (~ (IData)(vlSelfRef.tb_ResetFSM__DOT__reset_b)));
}

VL_INLINE_OPT void Vtb_ResetFSM___024root___nba_sequent__TOP__1(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___nba_sequent__TOP__1\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_ResetFSM__DOT__dut__DOT__state = ((IData)(vlSelfRef.tb_ResetFSM__DOT__reset_b)
                                                    ? (IData)(vlSelfRef.tb_ResetFSM__DOT__dut__DOT__nextState)
                                                    : 1U);
}

void Vtb_ResetFSM___024root___timing_resume(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___timing_resume\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_ha0071324__0.resume(
                                                   "@(posedge tb_ResetFSM.clock)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_ResetFSM___024root___timing_commit(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___timing_commit\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_ha0071324__0.commit(
                                                   "@(posedge tb_ResetFSM.clock)");
    }
}

void Vtb_ResetFSM___024root___eval_triggers__act(Vtb_ResetFSM___024root* vlSelf);

bool Vtb_ResetFSM___024root___eval_phase__act(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_phase__act\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_ResetFSM___024root___eval_triggers__act(vlSelf);
    Vtb_ResetFSM___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_ResetFSM___024root___timing_resume(vlSelf);
        Vtb_ResetFSM___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_ResetFSM___024root___eval_phase__nba(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_phase__nba\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_ResetFSM___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ResetFSM___024root___dump_triggers__nba(Vtb_ResetFSM___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_ResetFSM___024root___dump_triggers__act(Vtb_ResetFSM___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_ResetFSM___024root___eval(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_ResetFSM___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_ResetFSM.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_ResetFSM___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_ResetFSM.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_ResetFSM___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_ResetFSM___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_ResetFSM___024root___eval_debug_assertions(Vtb_ResetFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_ResetFSM___024root___eval_debug_assertions\n"); );
    Vtb_ResetFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
