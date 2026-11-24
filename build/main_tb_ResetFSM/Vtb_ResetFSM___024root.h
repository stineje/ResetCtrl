// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_ResetFSM.h for the primary calling header

#ifndef VERILATED_VTB_RESETFSM___024ROOT_H_
#define VERILATED_VTB_RESETFSM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_ResetFSM__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_ResetFSM___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_ResetFSM__DOT__clock;
    CData/*0:0*/ tb_ResetFSM__DOT__reset_b;
    CData/*0:0*/ tb_ResetFSM__DOT__Start;
    CData/*0:0*/ tb_ResetFSM__DOT__IsoAck;
    CData/*0:0*/ tb_ResetFSM__DOT__ClrAck;
    CData/*1:0*/ tb_ResetFSM__DOT__Echo;
    CData/*0:0*/ tb_ResetFSM__DOT__Isolate;
    CData/*0:0*/ tb_ResetFSM__DOT__Clear;
    CData/*1:0*/ tb_ResetFSM__DOT__last_phase;
    CData/*0:0*/ tb_ResetFSM__DOT__was_reset;
    CData/*1:0*/ tb_ResetFSM__DOT__dut__DOT__state;
    CData/*1:0*/ tb_ResetFSM__DOT__dut__DOT__nextState;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ResetFSM__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_ResetFSM__DOT__reset_b__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_ResetFSM__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha0071324__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_ResetFSM__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_ResetFSM___024root(Vtb_ResetFSM__Syms* symsp, const char* v__name);
    ~Vtb_ResetFSM___024root();
    VL_UNCOPYABLE(Vtb_ResetFSM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
