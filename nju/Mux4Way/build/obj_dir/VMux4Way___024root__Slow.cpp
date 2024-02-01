// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux4Way.h for the primary calling header

#include "VMux4Way___024root.h"
#include "VMux4Way__Syms.h"

//==========


void VMux4Way___024root___ctor_var_reset(VMux4Way___024root* vlSelf);

VMux4Way___024root::VMux4Way___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    VMux4Way___024root___ctor_var_reset(this);
}

void VMux4Way___024root::__Vconfigure(VMux4Way__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

VMux4Way___024root::~VMux4Way___024root() {
}

void VMux4Way___024root___eval_initial(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___eval_initial\n"); );
}

void VMux4Way___024root___combo__TOP__1(VMux4Way___024root* vlSelf);

void VMux4Way___024root___eval_settle(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___eval_settle\n"); );
    // Body
    VMux4Way___024root___combo__TOP__1(vlSelf);
}

void VMux4Way___024root___final(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___final\n"); );
}

void VMux4Way___024root___ctor_var_reset(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x0 = 0;
    vlSelf->x1 = 0;
    vlSelf->x2 = 0;
    vlSelf->x3 = 0;
    vlSelf->y = 0;
    vlSelf->f = 0;
}
