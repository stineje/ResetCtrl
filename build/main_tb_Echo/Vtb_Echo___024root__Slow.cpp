// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_Echo.h for the primary calling header

#include "Vtb_Echo__pch.h"
#include "Vtb_Echo__Syms.h"
#include "Vtb_Echo___024root.h"

void Vtb_Echo___024root___ctor_var_reset(Vtb_Echo___024root* vlSelf);

Vtb_Echo___024root::Vtb_Echo___024root(Vtb_Echo__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_Echo___024root___ctor_var_reset(this);
}

void Vtb_Echo___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_Echo___024root::~Vtb_Echo___024root() {
}
