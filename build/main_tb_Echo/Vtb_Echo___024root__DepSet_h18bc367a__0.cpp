// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Echo.h for the primary calling header

#include "Vtb_Echo__pch.h"
#include "Vtb_Echo___024root.h"

VlCoroutine Vtb_Echo___024root___eval_initial__TOP__Vtiming__0(Vtb_Echo___024root* vlSelf);
VlCoroutine Vtb_Echo___024root___eval_initial__TOP__Vtiming__1(Vtb_Echo___024root* vlSelf);

void Vtb_Echo___024root___eval_initial(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_initial\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_Echo___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Echo___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_Echo___024root___eval_initial__TOP__Vtiming__0(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__0__echo;
    __Vtask_tb_Echo__DOT__check__0__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__0__iso;
    __Vtask_tb_Echo__DOT__check__0__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__0__clr;
    __Vtask_tb_Echo__DOT__check__0__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__0__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__1__n;
    __Vtask_tb_Echo__DOT__step__1__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__2__echo;
    __Vtask_tb_Echo__DOT__check__2__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__2__iso;
    __Vtask_tb_Echo__DOT__check__2__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__2__clr;
    __Vtask_tb_Echo__DOT__check__2__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__2__what;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__3__echo;
    __Vtask_tb_Echo__DOT__check__3__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__3__iso;
    __Vtask_tb_Echo__DOT__check__3__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__3__clr;
    __Vtask_tb_Echo__DOT__check__3__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__3__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__4__n;
    __Vtask_tb_Echo__DOT__step__4__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__5__echo;
    __Vtask_tb_Echo__DOT__check__5__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__5__iso;
    __Vtask_tb_Echo__DOT__check__5__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__5__clr;
    __Vtask_tb_Echo__DOT__check__5__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__5__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__6__n;
    __Vtask_tb_Echo__DOT__step__6__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__7__echo;
    __Vtask_tb_Echo__DOT__check__7__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__7__iso;
    __Vtask_tb_Echo__DOT__check__7__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__7__clr;
    __Vtask_tb_Echo__DOT__check__7__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__7__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__8__n;
    __Vtask_tb_Echo__DOT__step__8__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__9__echo;
    __Vtask_tb_Echo__DOT__check__9__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__9__iso;
    __Vtask_tb_Echo__DOT__check__9__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__9__clr;
    __Vtask_tb_Echo__DOT__check__9__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__9__what;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__10__echo;
    __Vtask_tb_Echo__DOT__check__10__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__10__iso;
    __Vtask_tb_Echo__DOT__check__10__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__10__clr;
    __Vtask_tb_Echo__DOT__check__10__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__10__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__11__n;
    __Vtask_tb_Echo__DOT__step__11__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__12__echo;
    __Vtask_tb_Echo__DOT__check__12__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__12__iso;
    __Vtask_tb_Echo__DOT__check__12__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__12__clr;
    __Vtask_tb_Echo__DOT__check__12__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__12__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__13__n;
    __Vtask_tb_Echo__DOT__step__13__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__14__echo;
    __Vtask_tb_Echo__DOT__check__14__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__14__iso;
    __Vtask_tb_Echo__DOT__check__14__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__14__clr;
    __Vtask_tb_Echo__DOT__check__14__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__14__what;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__15__echo;
    __Vtask_tb_Echo__DOT__check__15__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__15__iso;
    __Vtask_tb_Echo__DOT__check__15__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__15__clr;
    __Vtask_tb_Echo__DOT__check__15__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__15__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__16__n;
    __Vtask_tb_Echo__DOT__step__16__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__17__echo;
    __Vtask_tb_Echo__DOT__check__17__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__17__iso;
    __Vtask_tb_Echo__DOT__check__17__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__17__clr;
    __Vtask_tb_Echo__DOT__check__17__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__17__what;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__18__echo;
    __Vtask_tb_Echo__DOT__check__18__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__18__iso;
    __Vtask_tb_Echo__DOT__check__18__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__18__clr;
    __Vtask_tb_Echo__DOT__check__18__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__18__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__19__n;
    __Vtask_tb_Echo__DOT__step__19__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__20__echo;
    __Vtask_tb_Echo__DOT__check__20__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__20__iso;
    __Vtask_tb_Echo__DOT__check__20__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__20__clr;
    __Vtask_tb_Echo__DOT__check__20__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__20__what;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__21__n;
    __Vtask_tb_Echo__DOT__step__21__n = 0;
    IData/*31:0*/ __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    CData/*1:0*/ __Vtask_tb_Echo__DOT__check__22__echo;
    __Vtask_tb_Echo__DOT__check__22__echo = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__22__iso;
    __Vtask_tb_Echo__DOT__check__22__iso = 0;
    CData/*0:0*/ __Vtask_tb_Echo__DOT__check__22__clr;
    __Vtask_tb_Echo__DOT__check__22__clr = 0;
    std::string __Vtask_tb_Echo__DOT__check__22__what;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2ee0ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         32);
    __Vtask_tb_Echo__DOT__check__0__what = std::string{"reset"};
    __Vtask_tb_Echo__DOT__check__0__clr = 0U;
    __Vtask_tb_Echo__DOT__check__0__iso = 0U;
    __Vtask_tb_Echo__DOT__check__0__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__0__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__0__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__0__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__0__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__0__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__0__iso),
                     1,__Vtask_tb_Echo__DOT__check__0__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__reset_b = 1U;
    __Vtask_tb_Echo__DOT__step__1__n = 2U;
    __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__1__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__1__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__2__what = std::string{"idle"};
    __Vtask_tb_Echo__DOT__check__2__clr = 0U;
    __Vtask_tb_Echo__DOT__check__2__iso = 0U;
    __Vtask_tb_Echo__DOT__check__2__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__2__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__2__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__2__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__2__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__2__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__2__iso),
                     1,__Vtask_tb_Echo__DOT__check__2__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__Phase = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         39);
    __Vtask_tb_Echo__DOT__check__3__what = std::string{"isolate requested (combinational)"};
    __Vtask_tb_Echo__DOT__check__3__clr = 0U;
    __Vtask_tb_Echo__DOT__check__3__iso = 1U;
    __Vtask_tb_Echo__DOT__check__3__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__3__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__3__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__3__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__3__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__3__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__3__iso),
                     1,__Vtask_tb_Echo__DOT__check__3__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Echo__DOT__step__4__n = 5U;
    __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__4__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__4__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__5__what = std::string{"isolate held, no ack -> no echo"};
    __Vtask_tb_Echo__DOT__check__5__clr = 0U;
    __Vtask_tb_Echo__DOT__check__5__iso = 1U;
    __Vtask_tb_Echo__DOT__check__5__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__5__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__5__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__5__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__5__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__5__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__5__iso),
                     1,__Vtask_tb_Echo__DOT__check__5__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__ClrAck = 1U;
    __Vtask_tb_Echo__DOT__step__6__n = 3U;
    __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__6__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__6__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__7__what = std::string{"wrong ack (ClrAck) ignored in ISOLATE"};
    __Vtask_tb_Echo__DOT__check__7__clr = 0U;
    __Vtask_tb_Echo__DOT__check__7__iso = 1U;
    __Vtask_tb_Echo__DOT__check__7__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__7__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__7__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__7__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__7__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__7__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__7__iso),
                     1,__Vtask_tb_Echo__DOT__check__7__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__ClrAck = 0U;
    vlSelfRef.tb_Echo__DOT__IsoAck = 1U;
    __Vtask_tb_Echo__DOT__step__8__n = 1U;
    __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__8__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__8__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__9__what = std::string{"IsoAck -> echo ISOLATE"};
    __Vtask_tb_Echo__DOT__check__9__clr = 0U;
    __Vtask_tb_Echo__DOT__check__9__iso = 1U;
    __Vtask_tb_Echo__DOT__check__9__echo = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__9__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__9__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__9__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__9__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__9__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__9__iso),
                     1,__Vtask_tb_Echo__DOT__check__9__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__Phase = 3U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         46);
    __Vtask_tb_Echo__DOT__check__10__what = std::string{"clear requested (combinational)"};
    __Vtask_tb_Echo__DOT__check__10__clr = 1U;
    __Vtask_tb_Echo__DOT__check__10__iso = 1U;
    __Vtask_tb_Echo__DOT__check__10__echo = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__10__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__10__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__10__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__10__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__10__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__10__iso),
                     1,__Vtask_tb_Echo__DOT__check__10__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Echo__DOT__step__11__n = 5U;
    __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__11__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__11__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__12__what = std::string{"IsoAck alone does not echo CLEAR"};
    __Vtask_tb_Echo__DOT__check__12__clr = 1U;
    __Vtask_tb_Echo__DOT__check__12__iso = 1U;
    __Vtask_tb_Echo__DOT__check__12__echo = 1U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__12__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__12__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__12__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__12__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__12__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__12__iso),
                     1,__Vtask_tb_Echo__DOT__check__12__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__ClrAck = 1U;
    __Vtask_tb_Echo__DOT__step__13__n = 1U;
    __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__13__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__13__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__14__what = std::string{"ClrAck -> echo CLEAR"};
    __Vtask_tb_Echo__DOT__check__14__clr = 1U;
    __Vtask_tb_Echo__DOT__check__14__iso = 1U;
    __Vtask_tb_Echo__DOT__check__14__echo = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__14__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__14__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__14__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__14__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__14__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__14__iso),
                     1,__Vtask_tb_Echo__DOT__check__14__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__Phase = 2U;
    vlSelfRef.tb_Echo__DOT__ClrAck = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         52);
    __Vtask_tb_Echo__DOT__check__15__what = std::string{"post-clear (combinational)"};
    __Vtask_tb_Echo__DOT__check__15__clr = 0U;
    __Vtask_tb_Echo__DOT__check__15__iso = 1U;
    __Vtask_tb_Echo__DOT__check__15__echo = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__15__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__15__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__15__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__15__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__15__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__15__iso),
                     1,__Vtask_tb_Echo__DOT__check__15__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Echo__DOT__step__16__n = 1U;
    __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__16__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__16__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__17__what = std::string{"echo POST_CLEAR without ack"};
    __Vtask_tb_Echo__DOT__check__17__clr = 0U;
    __Vtask_tb_Echo__DOT__check__17__iso = 1U;
    __Vtask_tb_Echo__DOT__check__17__echo = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__17__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__17__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__17__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__17__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__17__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__17__iso),
                     1,__Vtask_tb_Echo__DOT__check__17__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__Phase = 0U;
    vlSelfRef.tb_Echo__DOT__IsoAck = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         56);
    __Vtask_tb_Echo__DOT__check__18__what = std::string{"idle (combinational)"};
    __Vtask_tb_Echo__DOT__check__18__clr = 0U;
    __Vtask_tb_Echo__DOT__check__18__iso = 0U;
    __Vtask_tb_Echo__DOT__check__18__echo = 2U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__18__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__18__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__18__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__18__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__18__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__18__iso),
                     1,__Vtask_tb_Echo__DOT__check__18__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Echo__DOT__step__19__n = 1U;
    __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__19__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__19__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__20__what = std::string{"echo IDLE"};
    __Vtask_tb_Echo__DOT__check__20__clr = 0U;
    __Vtask_tb_Echo__DOT__check__20__iso = 0U;
    __Vtask_tb_Echo__DOT__check__20__echo = 0U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__20__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__20__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__20__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__20__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__20__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__20__iso),
                     1,__Vtask_tb_Echo__DOT__check__20__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Echo__DOT__Phase = 3U;
    vlSelfRef.tb_Echo__DOT__ClrAck = 1U;
    __Vtask_tb_Echo__DOT__step__21__n = 1U;
    __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
        = __Vtask_tb_Echo__DOT__step__21__n;
    while (VL_LTS_III(32, 0U, __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_Echo.clock)", 
                                                             "tb/tb_Echo.sv", 
                                                             26);
        __Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_tb_Echo__DOT__step__21__tb_Echo__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         27);
    __Vtask_tb_Echo__DOT__check__22__what = std::string{"jump to CLEAR echoed once acked"};
    __Vtask_tb_Echo__DOT__check__22__clr = 1U;
    __Vtask_tb_Echo__DOT__check__22__iso = 1U;
    __Vtask_tb_Echo__DOT__check__22__echo = 3U;
    if (VL_UNLIKELY((((((IData)(vlSelfRef.tb_Echo__DOT__EchoOut) 
                        != (IData)(__Vtask_tb_Echo__DOT__check__22__echo)) 
                       | ((IData)(vlSelfRef.tb_Echo__DOT__Isolate) 
                          != (IData)(__Vtask_tb_Echo__DOT__check__22__iso))) 
                      | ((IData)(vlSelfRef.tb_Echo__DOT__Clear) 
                         != (IData)(__Vtask_tb_Echo__DOT__check__22__clr)))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL %@: EchoOut=%b Isolate=%b Clear=%b, expected %b %b %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Echo__DOT__check__22__what),
                     2,(IData)(vlSelfRef.tb_Echo__DOT__EchoOut),
                     1,vlSelfRef.tb_Echo__DOT__Isolate,
                     1,(IData)(vlSelfRef.tb_Echo__DOT__Clear),
                     2,__Vtask_tb_Echo__DOT__check__22__echo,
                     1,(IData)(__Vtask_tb_Echo__DOT__check__22__iso),
                     1,__Vtask_tb_Echo__DOT__check__22__clr,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         64);
    vlSelfRef.tb_Echo__DOT__reset_b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         64);
    if (VL_UNLIKELY(((0U != (IData)(vlSelfRef.tb_Echo__DOT__EchoOut))))) {
        vlSelfRef.tb_Echo__DOT__errors = ((IData)(1U) 
                                          + vlSelfRef.tb_Echo__DOT__errors);
        VL_WRITEF_NX("FAIL async reset: EchoOut=%b\n",0,
                     2,vlSelfRef.tb_Echo__DOT__EchoOut);
    }
    co_await vlSelfRef.__VtrigSched_hca1e1197__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Echo.clock)", 
                                                         "tb/tb_Echo.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Echo.sv", 
                                         66);
    vlSelfRef.tb_Echo__DOT__reset_b = 1U;
    if ((0U == vlSelfRef.tb_Echo__DOT__errors)) {
        VL_WRITEF_NX("PASS tb_Echo\n",0);
    } else {
        VL_WRITEF_NX("FAIL tb_Echo: %0d errors\n",0,
                     32,vlSelfRef.tb_Echo__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_Echo.sv", 70, "");
}

VL_INLINE_OPT VlCoroutine Vtb_Echo___024root___eval_initial__TOP__Vtiming__1(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_Echo.sv", 
                                             14);
        vlSelfRef.tb_Echo__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb_Echo__DOT__clock)));
    }
}

void Vtb_Echo___024root___act_comb__TOP__0(Vtb_Echo___024root* vlSelf);

void Vtb_Echo___024root___eval_act(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_act\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((5ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_Echo___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 16> Vtb_Echo__ConstPool__TABLE_hc7444b56_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_Echo__ConstPool__TABLE_h86ed8b54_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vtb_Echo__ConstPool__TABLE_hba7ac097_0;

VL_INLINE_OPT void Vtb_Echo___024root___act_comb__TOP__0(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___act_comb__TOP__0\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_Echo__DOT__ClrAck) 
                     << 3U) | (((IData)(vlSelfRef.tb_Echo__DOT__IsoAck) 
                                << 2U) | (IData)(vlSelfRef.tb_Echo__DOT__Phase)));
    vlSelfRef.tb_Echo__DOT__Isolate = Vtb_Echo__ConstPool__TABLE_hc7444b56_0
        [__Vtableidx1];
    vlSelfRef.tb_Echo__DOT__Clear = Vtb_Echo__ConstPool__TABLE_h86ed8b54_0
        [__Vtableidx1];
    vlSelfRef.tb_Echo__DOT__dut__DOT__Done = Vtb_Echo__ConstPool__TABLE_hba7ac097_0
        [__Vtableidx1];
}

void Vtb_Echo___024root___nba_sequent__TOP__0(Vtb_Echo___024root* vlSelf);

void Vtb_Echo___024root___eval_nba(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_nba\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_Echo___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_Echo___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Echo___024root___nba_sequent__TOP__0(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___nba_sequent__TOP__0\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_Echo__DOT__reset_b) {
        if (vlSelfRef.tb_Echo__DOT__dut__DOT__Done) {
            vlSelfRef.tb_Echo__DOT__EchoOut = vlSelfRef.tb_Echo__DOT__Phase;
        }
    } else {
        vlSelfRef.tb_Echo__DOT__EchoOut = 0U;
    }
}

void Vtb_Echo___024root___timing_resume(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___timing_resume\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hca1e1197__0.resume(
                                                   "@(posedge tb_Echo.clock)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_Echo___024root___timing_commit(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___timing_commit\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hca1e1197__0.commit(
                                                   "@(posedge tb_Echo.clock)");
    }
}

void Vtb_Echo___024root___eval_triggers__act(Vtb_Echo___024root* vlSelf);

bool Vtb_Echo___024root___eval_phase__act(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_phase__act\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Echo___024root___eval_triggers__act(vlSelf);
    Vtb_Echo___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_Echo___024root___timing_resume(vlSelf);
        Vtb_Echo___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_Echo___024root___eval_phase__nba(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_phase__nba\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Echo___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__nba(Vtb_Echo___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Echo___024root___dump_triggers__act(Vtb_Echo___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Echo___024root___eval(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_Echo___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_Echo.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_Echo___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_Echo.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_Echo___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_Echo___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Echo___024root___eval_debug_assertions(Vtb_Echo___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Echo___024root___eval_debug_assertions\n"); );
    Vtb_Echo__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
