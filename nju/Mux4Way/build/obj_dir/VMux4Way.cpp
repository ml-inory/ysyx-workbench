// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMux4Way.h"
#include "VMux4Way__Syms.h"

//============================================================
// Constructors

VMux4Way::VMux4Way(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VMux4Way__Syms(_vcontextp__, _vcname__, this)}
    , x0{vlSymsp->TOP.x0}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , x3{vlSymsp->TOP.x3}
    , y{vlSymsp->TOP.y}
    , f{vlSymsp->TOP.f}
    , rootp{&(vlSymsp->TOP)}
{
}

VMux4Way::VMux4Way(const char* _vcname__)
    : VMux4Way(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VMux4Way::~VMux4Way() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VMux4Way___024root___eval_initial(VMux4Way___024root* vlSelf);
void VMux4Way___024root___eval_settle(VMux4Way___024root* vlSelf);
void VMux4Way___024root___eval(VMux4Way___024root* vlSelf);
QData VMux4Way___024root___change_request(VMux4Way___024root* vlSelf);
#ifdef VL_DEBUG
void VMux4Way___024root___eval_debug_assertions(VMux4Way___024root* vlSelf);
#endif  // VL_DEBUG
void VMux4Way___024root___final(VMux4Way___024root* vlSelf);

static void _eval_initial_loop(VMux4Way__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VMux4Way___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VMux4Way___024root___eval_settle(&(vlSymsp->TOP));
        VMux4Way___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMux4Way___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/rzyang/Codes/ysyx-workbench/nju/Mux4Way/vsrc/Mux4Way.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMux4Way___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VMux4Way::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMux4Way::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMux4Way___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VMux4Way___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VMux4Way___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/rzyang/Codes/ysyx-workbench/nju/Mux4Way/vsrc/Mux4Way.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VMux4Way___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VMux4Way::final() {
    VMux4Way___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VMux4Way::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VMux4Way::name() const {
    return vlSymsp->name();
}
