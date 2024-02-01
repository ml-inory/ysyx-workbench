// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VFourBitAdder.h"
#include "VFourBitAdder__Syms.h"

//============================================================
// Constructors

VFourBitAdder::VFourBitAdder(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VFourBitAdder__Syms(_vcontextp__, _vcname__, this)}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , s{vlSymsp->TOP.s}
    , rootp{&(vlSymsp->TOP)}
{
}

VFourBitAdder::VFourBitAdder(const char* _vcname__)
    : VFourBitAdder(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VFourBitAdder::~VFourBitAdder() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VFourBitAdder___024root___eval_initial(VFourBitAdder___024root* vlSelf);
void VFourBitAdder___024root___eval_settle(VFourBitAdder___024root* vlSelf);
void VFourBitAdder___024root___eval(VFourBitAdder___024root* vlSelf);
QData VFourBitAdder___024root___change_request(VFourBitAdder___024root* vlSelf);
#ifdef VL_DEBUG
void VFourBitAdder___024root___eval_debug_assertions(VFourBitAdder___024root* vlSelf);
#endif  // VL_DEBUG
void VFourBitAdder___024root___final(VFourBitAdder___024root* vlSelf);

static void _eval_initial_loop(VFourBitAdder__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VFourBitAdder___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VFourBitAdder___024root___eval_settle(&(vlSymsp->TOP));
        VFourBitAdder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFourBitAdder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/rzyang/Codes/ysyx-workbench/ddca/lab2/vsrc/FourBitAdder.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFourBitAdder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFourBitAdder::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFourBitAdder::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VFourBitAdder___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VFourBitAdder___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VFourBitAdder___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/rzyang/Codes/ysyx-workbench/ddca/lab2/vsrc/FourBitAdder.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VFourBitAdder___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VFourBitAdder::final() {
    VFourBitAdder___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VFourBitAdder::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VFourBitAdder::name() const {
    return vlSymsp->name();
}
