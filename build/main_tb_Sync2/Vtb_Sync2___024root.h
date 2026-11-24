// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Sync2.h for the primary calling header

#ifndef VERILATED_VTB_SYNC2___024ROOT_H_
#define VERILATED_VTB_SYNC2___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Sync2__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Sync2___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_Sync2__DOT__clock;
    CData/*0:0*/ tb_Sync2__DOT__reset_b;
    CData/*1:0*/ tb_Sync2__DOT__In;
    CData/*1:0*/ tb_Sync2__DOT__Out;
    CData/*1:0*/ tb_Sync2__DOT__glitch_code;
    CData/*0:0*/ tb_Sync2__DOT__glitch_watch;
    CData/*1:0*/ tb_Sync2__DOT__dut__DOT__s1;
    CData/*1:0*/ tb_Sync2__DOT__dut__DOT__s2;
    CData/*1:0*/ tb_Sync2__DOT__dut__DOT__prev;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Sync2__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Sync2__DOT__reset_b__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_Sync2__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2b1423db__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Sync2__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Sync2___024root(Vtb_Sync2__Syms* symsp, const char* v__name);
    ~Vtb_Sync2___024root();
    VL_UNCOPYABLE(Vtb_Sync2___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
