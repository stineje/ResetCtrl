// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_system.h for the primary calling header

#ifndef VERILATED_VTB_SYSTEM___024ROOT_H_
#define VERILATED_VTB_SYSTEM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_system__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_system___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_system__DOT__clkA;
        CData/*0:0*/ tb_system__DOT__clkB;
        CData/*0:0*/ tb_system__DOT__rstA;
        CData/*0:0*/ tb_system__DOT__rstB;
        CData/*0:0*/ tb_system__DOT__clrA;
        CData/*0:0*/ tb_system__DOT__clrB;
        CData/*0:0*/ tb_system__DOT__busyA;
        CData/*0:0*/ tb_system__DOT__busyB;
        CData/*0:0*/ tb_system__DOT__A__DOT__FsmIsolate;
        CData/*0:0*/ tb_system__DOT__B__DOT__FsmIsolate;
        CData/*0:0*/ tb_system__DOT__startA;
        CData/*0:0*/ tb_system__DOT__startB;
        CData/*0:0*/ tb_system__DOT__isoA;
        CData/*0:0*/ tb_system__DOT__isoB;
        CData/*0:0*/ tb_system__DOT__isoAckA;
        CData/*0:0*/ tb_system__DOT__isoAckB;
        CData/*0:0*/ tb_system__DOT__clrAckA;
        CData/*0:0*/ tb_system__DOT__clrAckB;
        CData/*1:0*/ tb_system__DOT__ecA;
        CData/*1:0*/ tb_system__DOT__ecB;
        CData/*1:0*/ tb_system__DOT__phA_w;
        CData/*1:0*/ tb_system__DOT__phB_w;
        CData/*1:0*/ tb_system__DOT__ecA_w;
        CData/*1:0*/ tb_system__DOT__ecB_w;
        CData/*2:0*/ tb_system__DOT__isoA_sr;
        CData/*2:0*/ tb_system__DOT__isoB_sr;
        CData/*1:0*/ tb_system__DOT__clrA_sr;
        CData/*1:0*/ tb_system__DOT__clrB_sr;
        CData/*0:0*/ tb_system__DOT__stallB;
        CData/*0:0*/ tb_system__DOT__needA;
        CData/*0:0*/ tb_system__DOT__needB;
        CData/*1:0*/ tb_system__DOT__lastA;
        CData/*1:0*/ tb_system__DOT__lastB;
        CData/*0:0*/ tb_system__DOT__rstSeenA;
        CData/*0:0*/ tb_system__DOT__rstSeenB;
        CData/*1:0*/ tb_system__DOT__A__DOT__PhaseSync;
        CData/*1:0*/ tb_system__DOT__A__DOT__EchoSync;
        CData/*0:0*/ tb_system__DOT__A__DOT__EchoIsolate;
        CData/*0:0*/ tb_system__DOT__A__DOT__EchoClear;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncPhase__DOT__s1;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncPhase__DOT__s2;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncPhase__DOT__prev;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncEcho__DOT__s1;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncEcho__DOT__s2;
        CData/*1:0*/ tb_system__DOT__A__DOT__syncEcho__DOT__prev;
        CData/*1:0*/ tb_system__DOT__A__DOT__fsm__DOT__state;
        CData/*1:0*/ tb_system__DOT__A__DOT__fsm__DOT__nextState;
        CData/*0:0*/ tb_system__DOT__A__DOT__echo__DOT__Done;
        CData/*1:0*/ tb_system__DOT__B__DOT__PhaseSync;
        CData/*1:0*/ tb_system__DOT__B__DOT__EchoSync;
        CData/*0:0*/ tb_system__DOT__B__DOT__EchoIsolate;
        CData/*0:0*/ tb_system__DOT__B__DOT__EchoClear;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncPhase__DOT__s1;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncPhase__DOT__s2;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncPhase__DOT__prev;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncEcho__DOT__s1;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncEcho__DOT__s2;
        CData/*1:0*/ tb_system__DOT__B__DOT__syncEcho__DOT__prev;
        CData/*1:0*/ tb_system__DOT__B__DOT__fsm__DOT__state;
        CData/*1:0*/ tb_system__DOT__B__DOT__fsm__DOT__nextState;
        CData/*0:0*/ tb_system__DOT__B__DOT__echo__DOT__Done;
        CData/*1:0*/ __VassignWtmp_hae80fcb7__0;
        CData/*1:0*/ __VassignWtmp_hc3e5c77d__0;
        CData/*1:0*/ __VassignWtmp_h9ea43bac__0;
    };
    struct {
        CData/*1:0*/ __VassignWtmp_h67a57512__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__0;
        CData/*0:0*/ __VstlDidInit;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hae80fcb7__0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_hc3e5c77d__0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h9ea43bac__0__1;
        CData/*1:0*/ __Vtrigprevexpr___TOP____VassignWtmp_h67a57512__0__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__isoAckA__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrAckA__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__isoAckB__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrAckB__1;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clkA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__rstA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clkB__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__rstB__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__busyA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__busyB__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__A__DOT__FsmIsolate__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__B__DOT__FsmIsolate__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrA__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_system__DOT__clrB__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ tb_system__DOT__ha;
        IData/*31:0*/ tb_system__DOT__hb;
        IData/*31:0*/ tb_system__DOT__errors;
        IData/*31:0*/ tb_system__DOT__seqA;
        IData/*31:0*/ tb_system__DOT__seqB;
        IData/*31:0*/ tb_system__DOT__clearsSeenA;
        IData/*31:0*/ tb_system__DOT__clearsSeenB;
        IData/*31:0*/ tb_system__DOT__events;
        IData/*31:0*/ tb_system__DOT__seed;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ __VassignWgen_h41c115bb__0;
        QData/*63:0*/ __VassignWgen_hce3bab25__0;
        QData/*63:0*/ __VassignWgen_hed2719dd__0;
        QData/*63:0*/ __VassignWgen_hee47ec46__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__0;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_h41c115bb__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hce3bab25__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hed2719dd__0__1;
        QData/*63:0*/ __Vtrigprevexpr___TOP____VassignWgen_hee47ec46__0__1;
    };
    std::string tb_system__DOT__test;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcdad19d4__0;
    VlTriggerScheduler __VtrigSched_h33a4bbd1__0;
    VlTriggerVec<13> __VstlTriggered;
    VlTriggerVec<23> __VactTriggered;
    VlTriggerVec<23> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_system__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_system___024root(Vtb_system__Syms* symsp, const char* v__name);
    ~Vtb_system___024root();
    VL_UNCOPYABLE(Vtb_system___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
