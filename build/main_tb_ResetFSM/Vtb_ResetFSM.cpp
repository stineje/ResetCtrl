// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_ResetFSM__pch.h"

//============================================================
// Constructors

Vtb_ResetFSM::Vtb_ResetFSM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_ResetFSM__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_ResetFSM::Vtb_ResetFSM(const char* _vcname__)
    : Vtb_ResetFSM(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_ResetFSM::~Vtb_ResetFSM() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_ResetFSM___024root___eval_debug_assertions(Vtb_ResetFSM___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_ResetFSM___024root___eval_static(Vtb_ResetFSM___024root* vlSelf);
void Vtb_ResetFSM___024root___eval_initial(Vtb_ResetFSM___024root* vlSelf);
void Vtb_ResetFSM___024root___eval_settle(Vtb_ResetFSM___024root* vlSelf);
void Vtb_ResetFSM___024root___eval(Vtb_ResetFSM___024root* vlSelf);

void Vtb_ResetFSM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_ResetFSM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_ResetFSM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_ResetFSM___024root___eval_static(&(vlSymsp->TOP));
        Vtb_ResetFSM___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_ResetFSM___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_ResetFSM___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_ResetFSM::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_ResetFSM::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_ResetFSM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_ResetFSM___024root___eval_final(Vtb_ResetFSM___024root* vlSelf);

VL_ATTR_COLD void Vtb_ResetFSM::final() {
    Vtb_ResetFSM___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_ResetFSM::hierName() const { return vlSymsp->name(); }
const char* Vtb_ResetFSM::modelName() const { return "Vtb_ResetFSM"; }
unsigned Vtb_ResetFSM::threads() const { return 1; }
void Vtb_ResetFSM::prepareClone() const { contextp()->prepareClone(); }
void Vtb_ResetFSM::atClone() const {
    contextp()->threadPoolpOnClone();
}
