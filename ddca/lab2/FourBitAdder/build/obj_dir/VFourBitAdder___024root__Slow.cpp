// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFourBitAdder.h for the primary calling header

#include "VFourBitAdder___024root.h"
#include "VFourBitAdder__Syms.h"

//==========


void VFourBitAdder___024root___ctor_var_reset(VFourBitAdder___024root* vlSelf);

VFourBitAdder___024root::VFourBitAdder___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VFourBitAdder___024root___ctor_var_reset(this);
}

void VFourBitAdder___024root::__Vconfigure(VFourBitAdder__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VFourBitAdder___024root::~VFourBitAdder___024root() {
}

void VFourBitAdder___024root___eval_initial(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___eval_initial\n"); );
}

void VFourBitAdder___024root___combo__TOP__1(VFourBitAdder___024root* vlSelf);

void VFourBitAdder___024root___eval_settle(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___eval_settle\n"); );
    // Body
    VFourBitAdder___024root___combo__TOP__1(vlSelf);
}

void VFourBitAdder___024root___final(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___final\n"); );
}

void VFourBitAdder___024root___ctor_var_reset(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->a = 0;
    vlSelf->b = 0;
    vlSelf->s = 0;
    vlSelf->FourBitAdder__DOT__co_temp = 0;
    vlSelf->__Vchglast__TOP__FourBitAdder__DOT__co_temp = 0;
}
