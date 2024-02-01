// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMux4Way.h for the primary calling header

#include "VMux4Way___024root.h"
#include "VMux4Way__Syms.h"

//==========

VL_INLINE_OPT void VMux4Way___024root___combo__TOP__1(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->f = (((~ ((IData)(vlSelf->y) >> 1U)) & 
                  (((~ (IData)(vlSelf->y)) & (IData)(vlSelf->x0)) 
                   | ((IData)(vlSelf->y) & (IData)(vlSelf->x1)))) 
                 | (((IData)(vlSelf->y) >> 1U) & ((
                                                   (~ (IData)(vlSelf->y)) 
                                                   & (IData)(vlSelf->x2)) 
                                                  | ((IData)(vlSelf->y) 
                                                     & (IData)(vlSelf->x3)))));
}

void VMux4Way___024root___eval(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___eval\n"); );
    // Body
    VMux4Way___024root___combo__TOP__1(vlSelf);
}

QData VMux4Way___024root___change_request_1(VMux4Way___024root* vlSelf);

VL_INLINE_OPT QData VMux4Way___024root___change_request(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___change_request\n"); );
    // Body
    return (VMux4Way___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VMux4Way___024root___change_request_1(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VMux4Way___024root___eval_debug_assertions(VMux4Way___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VMux4Way__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMux4Way___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->x0 & 0xfeU))) {
        Verilated::overWidthError("x0");}
    if (VL_UNLIKELY((vlSelf->x1 & 0xfeU))) {
        Verilated::overWidthError("x1");}
    if (VL_UNLIKELY((vlSelf->x2 & 0xfeU))) {
        Verilated::overWidthError("x2");}
    if (VL_UNLIKELY((vlSelf->x3 & 0xfeU))) {
        Verilated::overWidthError("x3");}
    if (VL_UNLIKELY((vlSelf->y & 0xfcU))) {
        Verilated::overWidthError("y");}
}
#endif  // VL_DEBUG
