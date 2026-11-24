// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Sync2.h for the primary calling header

#include "Vtb_Sync2__pch.h"
#include "Vtb_Sync2___024root.h"

VlCoroutine Vtb_Sync2___024root___eval_initial__TOP__Vtiming__0(Vtb_Sync2___024root* vlSelf);
VlCoroutine Vtb_Sync2___024root___eval_initial__TOP__Vtiming__1(Vtb_Sync2___024root* vlSelf);

void Vtb_Sync2___024root___eval_initial(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_initial\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_Sync2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_Sync2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_Sync2___024root___eval_initial__TOP__Vtiming__0(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__0__exp;
    __Vtask_tb_Sync2__DOT__check__0__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__0__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__1__v;
    __Vtask_tb_Sync2__DOT__drive__1__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__2__exp;
    __Vtask_tb_Sync2__DOT__check__2__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__2__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__3__exp;
    __Vtask_tb_Sync2__DOT__check__3__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__3__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__4__v;
    __Vtask_tb_Sync2__DOT__drive__4__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__5__v;
    __Vtask_tb_Sync2__DOT__drive__5__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__6__exp;
    __Vtask_tb_Sync2__DOT__check__6__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__6__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__7__v;
    __Vtask_tb_Sync2__DOT__drive__7__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__8__v;
    __Vtask_tb_Sync2__DOT__drive__8__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__9__v;
    __Vtask_tb_Sync2__DOT__drive__9__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__10__exp;
    __Vtask_tb_Sync2__DOT__check__10__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__10__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__11__v;
    __Vtask_tb_Sync2__DOT__drive__11__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__12__exp;
    __Vtask_tb_Sync2__DOT__check__12__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__12__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__13__v;
    __Vtask_tb_Sync2__DOT__drive__13__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__14__exp;
    __Vtask_tb_Sync2__DOT__check__14__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__14__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__drive__15__v;
    __Vtask_tb_Sync2__DOT__drive__15__v = 0;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__16__exp;
    __Vtask_tb_Sync2__DOT__check__16__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__16__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__17__exp;
    __Vtask_tb_Sync2__DOT__check__17__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__17__what;
    CData/*1:0*/ __Vtask_tb_Sync2__DOT__check__18__exp;
    __Vtask_tb_Sync2__DOT__check__18__exp = 0;
    std::string __Vtask_tb_Sync2__DOT__check__18__what;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x2ee0ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         37);
    __Vtask_tb_Sync2__DOT__check__0__what = std::string{"reset value"};
    __Vtask_tb_Sync2__DOT__check__0__exp = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__0__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__0__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__0__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Sync2__DOT__reset_b = 1U;
    __Vtask_tb_Sync2__DOT__drive__1__v = 1U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__1__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         42);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         42);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         42);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         43);
    __Vtask_tb_Sync2__DOT__check__2__what = std::string{"no change before 4 edges"};
    __Vtask_tb_Sync2__DOT__check__2__exp = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__2__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__2__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__2__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         44);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         44);
    __Vtask_tb_Sync2__DOT__check__3__what = std::string{"new value after 4 edges"};
    __Vtask_tb_Sync2__DOT__check__3__exp = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__3__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__3__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__3__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Sync2__DOT__glitch_code = 2U;
    vlSelfRef.tb_Sync2__DOT__glitch_watch = 1U;
    __Vtask_tb_Sync2__DOT__drive__4__v = 2U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__4__v;
    __Vtask_tb_Sync2__DOT__drive__5__v = 1U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__5__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         50);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         51);
    __Vtask_tb_Sync2__DOT__check__6__what = std::string{"one-cycle glitch filtered"};
    __Vtask_tb_Sync2__DOT__check__6__exp = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__6__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__6__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__6__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    vlSelfRef.tb_Sync2__DOT__glitch_watch = 0U;
    __Vtask_tb_Sync2__DOT__drive__7__v = 3U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__7__v;
    __Vtask_tb_Sync2__DOT__drive__8__v = 3U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__8__v;
    __Vtask_tb_Sync2__DOT__drive__9__v = 3U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__9__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         58);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         58);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         58);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         58);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         59);
    __Vtask_tb_Sync2__DOT__check__10__what = std::string{"two-cycle value accepted"};
    __Vtask_tb_Sync2__DOT__check__10__exp = 3U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__10__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__10__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__10__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Sync2__DOT__drive__11__v = 2U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__11__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         62);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         62);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         62);
    __Vtask_tb_Sync2__DOT__check__12__what = std::string{"step to 10"};
    __Vtask_tb_Sync2__DOT__check__12__exp = 2U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__12__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__12__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__12__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Sync2__DOT__drive__13__v = 0U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__13__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         63);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         63);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         63);
    __Vtask_tb_Sync2__DOT__check__14__what = std::string{"step to 00"};
    __Vtask_tb_Sync2__DOT__check__14__exp = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__14__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__14__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__14__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    __Vtask_tb_Sync2__DOT__drive__15__v = 1U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         23);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         23);
    vlSelfRef.tb_Sync2__DOT__In = __Vtask_tb_Sync2__DOT__drive__15__v;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         66);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         66);
    __Vtask_tb_Sync2__DOT__check__16__what = std::string{"before reset"};
    __Vtask_tb_Sync2__DOT__check__16__exp = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__16__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__16__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__16__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VdlySched.delay(0x7d0ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         67);
    vlSelfRef.tb_Sync2__DOT__reset_b = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         67);
    __Vtask_tb_Sync2__DOT__check__17__what = std::string{"async reset"};
    __Vtask_tb_Sync2__DOT__check__17__exp = 0U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__17__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__17__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__17__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         68);
    vlSelfRef.tb_Sync2__DOT__reset_b = 1U;
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         71);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         71);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         71);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         71);
    co_await vlSelfRef.__VtrigSched_h2b1423db__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_Sync2.clock)", 
                                                         "tb/tb_Sync2.sv", 
                                                         71);
    co_await vlSelfRef.__VdlySched.delay(0x3e8ULL, 
                                         nullptr, "tb/tb_Sync2.sv", 
                                         71);
    __Vtask_tb_Sync2__DOT__check__18__what = std::string{"re-acquire after reset"};
    __Vtask_tb_Sync2__DOT__check__18__exp = 1U;
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                      != (IData)(__Vtask_tb_Sync2__DOT__check__18__exp))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL %@: Out=%b expected %b (t=%0t)\n",0,
                     -1,&(__Vtask_tb_Sync2__DOT__check__18__what),
                     2,(IData)(vlSelfRef.tb_Sync2__DOT__Out),
                     2,__Vtask_tb_Sync2__DOT__check__18__exp,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
    if ((0U == vlSelfRef.tb_Sync2__DOT__errors)) {
        VL_WRITEF_NX("PASS tb_Sync2\n",0);
    } else {
        VL_WRITEF_NX("FAIL tb_Sync2: %0d errors\n",0,
                     32,vlSelfRef.tb_Sync2__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_Sync2.sv", 75, "");
}

VL_INLINE_OPT VlCoroutine Vtb_Sync2___024root___eval_initial__TOP__Vtiming__1(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/tb_Sync2.sv", 
                                             12);
        vlSelfRef.tb_Sync2__DOT__clock = (1U & (~ (IData)(vlSelfRef.tb_Sync2__DOT__clock)));
    }
}

void Vtb_Sync2___024root___eval_act(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_act\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vtb_Sync2___024root___nba_sequent__TOP__1(Vtb_Sync2___024root* vlSelf);
void Vtb_Sync2___024root___nba_sequent__TOP__2(Vtb_Sync2___024root* vlSelf);

void Vtb_Sync2___024root___eval_nba(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_nba\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_Sync2___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_Sync2___024root___nba_sequent__TOP__2(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_Sync2___024root___nba_sequent__TOP__1(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___nba_sequent__TOP__1\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelfRef.tb_Sync2__DOT__reset_b) 
                       & (IData)(vlSelfRef.tb_Sync2__DOT__glitch_watch)) 
                      & ((IData)(vlSelfRef.tb_Sync2__DOT__Out) 
                         == (IData)(vlSelfRef.tb_Sync2__DOT__glitch_code)))))) {
        vlSelfRef.tb_Sync2__DOT__errors = ((IData)(1U) 
                                           + vlSelfRef.tb_Sync2__DOT__errors);
        VL_WRITEF_NX("FAIL glitch: Out showed one-cycle code %b (t=%0t)\n",0,
                     2,vlSelfRef.tb_Sync2__DOT__Out,
                     64,VL_TIME_UNITED_Q(1000),-9);
    }
}

VL_INLINE_OPT void Vtb_Sync2___024root___nba_sequent__TOP__2(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___nba_sequent__TOP__2\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.tb_Sync2__DOT__reset_b) {
        if (((IData)(vlSelfRef.tb_Sync2__DOT__dut__DOT__s2) 
             == (IData)(vlSelfRef.tb_Sync2__DOT__dut__DOT__prev))) {
            vlSelfRef.tb_Sync2__DOT__Out = vlSelfRef.tb_Sync2__DOT__dut__DOT__s2;
        }
        vlSelfRef.tb_Sync2__DOT__dut__DOT__prev = vlSelfRef.tb_Sync2__DOT__dut__DOT__s2;
        vlSelfRef.tb_Sync2__DOT__dut__DOT__s2 = vlSelfRef.tb_Sync2__DOT__dut__DOT__s1;
        vlSelfRef.tb_Sync2__DOT__dut__DOT__s1 = vlSelfRef.tb_Sync2__DOT__In;
    } else {
        vlSelfRef.tb_Sync2__DOT__dut__DOT__prev = 0U;
        vlSelfRef.tb_Sync2__DOT__Out = 0U;
        vlSelfRef.tb_Sync2__DOT__dut__DOT__s2 = 0U;
        vlSelfRef.tb_Sync2__DOT__dut__DOT__s1 = 0U;
    }
}

void Vtb_Sync2___024root___timing_resume(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___timing_resume\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h2b1423db__0.resume(
                                                   "@(posedge tb_Sync2.clock)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_Sync2___024root___timing_commit(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___timing_commit\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h2b1423db__0.commit(
                                                   "@(posedge tb_Sync2.clock)");
    }
}

void Vtb_Sync2___024root___eval_triggers__act(Vtb_Sync2___024root* vlSelf);

bool Vtb_Sync2___024root___eval_phase__act(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_phase__act\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_Sync2___024root___eval_triggers__act(vlSelf);
    Vtb_Sync2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_Sync2___024root___timing_resume(vlSelf);
        Vtb_Sync2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_Sync2___024root___eval_phase__nba(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_phase__nba\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_Sync2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Sync2___024root___dump_triggers__nba(Vtb_Sync2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_Sync2___024root___dump_triggers__act(Vtb_Sync2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_Sync2___024root___eval(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vtb_Sync2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_Sync2.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_Sync2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_Sync2.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_Sync2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_Sync2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_Sync2___024root___eval_debug_assertions(Vtb_Sync2___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_Sync2___024root___eval_debug_assertions\n"); );
    Vtb_Sync2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
