// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_Sync2__pch.h"

//============================================================
// Constructors

Vtb_Sync2::Vtb_Sync2(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_Sync2__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_Sync2::Vtb_Sync2(const char* _vcname__)
    : Vtb_Sync2(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_Sync2::~Vtb_Sync2() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_Sync2___024root___eval_debug_assertions(Vtb_Sync2___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_Sync2___024root___eval_static(Vtb_Sync2___024root* vlSelf);
void Vtb_Sync2___024root___eval_initial(Vtb_Sync2___024root* vlSelf);
void Vtb_Sync2___024root___eval_settle(Vtb_Sync2___024root* vlSelf);
void Vtb_Sync2___024root___eval(Vtb_Sync2___024root* vlSelf);

void Vtb_Sync2::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_Sync2::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_Sync2___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_Sync2___024root___eval_static(&(vlSymsp->TOP));
        Vtb_Sync2___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_Sync2___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_Sync2___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_Sync2::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_Sync2::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_Sync2::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_Sync2___024root___eval_final(Vtb_Sync2___024root* vlSelf);

VL_ATTR_COLD void Vtb_Sync2::final() {
    Vtb_Sync2___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_Sync2::hierName() const { return vlSymsp->name(); }
const char* Vtb_Sync2::modelName() const { return "Vtb_Sync2"; }
unsigned Vtb_Sync2::threads() const { return 1; }
void Vtb_Sync2::prepareClone() const { contextp()->prepareClone(); }
void Vtb_Sync2::atClone() const {
    contextp()->threadPoolpOnClone();
}
