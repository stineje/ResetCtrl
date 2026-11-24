// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Sync2.h for the primary calling header

#include "Vtb_Sync2__pch.h"
#include "Vtb_Sync2__Syms.h"
#include "Vtb_Sync2___024root.h"

void Vtb_Sync2___024root___ctor_var_reset(Vtb_Sync2___024root* vlSelf);

Vtb_Sync2___024root::Vtb_Sync2___024root(Vtb_Sync2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Sync2___024root___ctor_var_reset(this);
}

void Vtb_Sync2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Sync2___024root::~Vtb_Sync2___024root() {
}
