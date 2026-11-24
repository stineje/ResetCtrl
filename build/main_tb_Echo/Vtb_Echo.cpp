// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_Echo__pch.h"

//============================================================
// Constructors

Vtb_Echo::Vtb_Echo(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_Echo__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_Echo::Vtb_Echo(const char* _vcname__)
    : Vtb_Echo(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_Echo::~Vtb_Echo() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_Echo___024root___eval_debug_assertions(Vtb_Echo___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_Echo___024root___eval_static(Vtb_Echo___024root* vlSelf);
void Vtb_Echo___024root___eval_initial(Vtb_Echo___024root* vlSelf);
void Vtb_Echo___024root___eval_settle(Vtb_Echo___024root* vlSelf);
void Vtb_Echo___024root___eval(Vtb_Echo___024root* vlSelf);

void Vtb_Echo::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_Echo::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_Echo___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_Echo___024root___eval_static(&(vlSymsp->TOP));
        Vtb_Echo___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_Echo___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_Echo___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_Echo::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_Echo::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_Echo::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_Echo___024root___eval_final(Vtb_Echo___024root* vlSelf);

VL_ATTR_COLD void Vtb_Echo::final() {
    Vtb_Echo___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_Echo::hierName() const { return vlSymsp->name(); }
const char* Vtb_Echo::modelName() const { return "Vtb_Echo"; }
unsigned Vtb_Echo::threads() const { return 1; }
void Vtb_Echo::prepareClone() const { contextp()->prepareClone(); }
void Vtb_Echo::atClone() const {
    contextp()->threadPoolpOnClone();
}
