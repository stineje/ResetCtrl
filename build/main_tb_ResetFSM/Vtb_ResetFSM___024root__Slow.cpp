// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_ResetFSM.h for the primary calling header

#include "Vtb_ResetFSM__pch.h"
#include "Vtb_ResetFSM__Syms.h"
#include "Vtb_ResetFSM___024root.h"

void Vtb_ResetFSM___024root___ctor_var_reset(Vtb_ResetFSM___024root* vlSelf);

Vtb_ResetFSM___024root::Vtb_ResetFSM___024root(Vtb_ResetFSM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_ResetFSM___024root___ctor_var_reset(this);
}

void Vtb_ResetFSM___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_ResetFSM___024root::~Vtb_ResetFSM___024root() {
}
