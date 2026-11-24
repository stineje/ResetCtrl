// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_Echo.h for the primary calling header

#ifndef VERILATED_VTB_ECHO___024ROOT_H_
#define VERILATED_VTB_ECHO___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_Echo__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_Echo___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_Echo__DOT__clock;
    CData/*0:0*/ tb_Echo__DOT__reset_b;
    CData/*1:0*/ tb_Echo__DOT__Phase;
    CData/*0:0*/ tb_Echo__DOT__IsoAck;
    CData/*0:0*/ tb_Echo__DOT__ClrAck;
    CData/*1:0*/ tb_Echo__DOT__EchoOut;
    CData/*0:0*/ tb_Echo__DOT__Isolate;
    CData/*0:0*/ tb_Echo__DOT__Clear;
    CData/*0:0*/ tb_Echo__DOT__dut__DOT__Done;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Echo__DOT__clock__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_Echo__DOT__reset_b__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_Echo__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hca1e1197__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_Echo__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_Echo___024root(Vtb_Echo__Syms* symsp, const char* v__name);
    ~Vtb_Echo___024root();
    VL_UNCOPYABLE(Vtb_Echo___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
