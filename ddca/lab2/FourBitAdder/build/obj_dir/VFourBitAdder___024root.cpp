// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFourBitAdder.h for the primary calling header

#include "VFourBitAdder___024root.h"
#include "VFourBitAdder__Syms.h"

//==========

VL_INLINE_OPT void VFourBitAdder___024root___combo__TOP__1(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___combo__TOP__1\n"); );
    // Variables
    CData/*0:0*/ FourBitAdder__DOT____Vcellout__fa1__co;
    CData/*0:0*/ FourBitAdder__DOT____Vcellout__fa2__co;
    CData/*0:0*/ FourBitAdder__DOT__fa1__DOT__xor_ab;
    CData/*0:0*/ FourBitAdder__DOT__fa2__DOT__xor_ab;
    CData/*0:0*/ FourBitAdder__DOT__fa3__DOT__xor_ab;
    // Body
    vlSelf->s = ((0x1eU & (IData)(vlSelf->s)) | (1U 
                                                 & ((IData)(vlSelf->a) 
                                                    ^ (IData)(vlSelf->b))));
    FourBitAdder__DOT__fa3__DOT__xor_ab = (1U & (((IData)(vlSelf->a) 
                                                  ^ (IData)(vlSelf->b)) 
                                                 >> 3U));
    FourBitAdder__DOT__fa1__DOT__xor_ab = (1U & (((IData)(vlSelf->a) 
                                                  ^ (IData)(vlSelf->b)) 
                                                 >> 1U));
    FourBitAdder__DOT__fa2__DOT__xor_ab = (1U & (((IData)(vlSelf->a) 
                                                  ^ (IData)(vlSelf->b)) 
                                                 >> 2U));
    vlSelf->FourBitAdder__DOT__co_temp = ((6U & (IData)(vlSelf->FourBitAdder__DOT__co_temp)) 
                                          | (1U & ((IData)(vlSelf->a) 
                                                   & (IData)(vlSelf->b))));
    vlSelf->s = ((0x19U & (IData)(vlSelf->s)) | ((4U 
                                                  & (((IData)(FourBitAdder__DOT__fa2__DOT__xor_ab) 
                                                      << 2U) 
                                                     ^ 
                                                     (0xfffffffcU 
                                                      & ((IData)(vlSelf->FourBitAdder__DOT__co_temp) 
                                                         << 1U)))) 
                                                 | (2U 
                                                    & (((IData)(FourBitAdder__DOT__fa1__DOT__xor_ab) 
                                                        ^ (IData)(vlSelf->FourBitAdder__DOT__co_temp)) 
                                                       << 1U))));
    FourBitAdder__DOT____Vcellout__fa1__co = (1U & 
                                              ((((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 1U) 
                                               ^ ((IData)(vlSelf->FourBitAdder__DOT__co_temp) 
                                                  & (IData)(FourBitAdder__DOT__fa1__DOT__xor_ab))));
    FourBitAdder__DOT____Vcellout__fa2__co = (1U & 
                                              ((((IData)(vlSelf->a) 
                                                 & (IData)(vlSelf->b)) 
                                                >> 2U) 
                                               ^ (((IData)(vlSelf->FourBitAdder__DOT__co_temp) 
                                                   >> 1U) 
                                                  & (IData)(FourBitAdder__DOT__fa2__DOT__xor_ab))));
    vlSelf->s = ((7U & (IData)(vlSelf->s)) | ((0x10U 
                                               & ((0xfffffff0U 
                                                   & (((IData)(vlSelf->a) 
                                                       & (IData)(vlSelf->b)) 
                                                      << 1U)) 
                                                  ^ 
                                                  (0xfffffff0U 
                                                   & (((IData)(vlSelf->FourBitAdder__DOT__co_temp) 
                                                       << 2U) 
                                                      & ((IData)(FourBitAdder__DOT__fa3__DOT__xor_ab) 
                                                         << 4U))))) 
                                              | (8U 
                                                 & (((IData)(FourBitAdder__DOT__fa3__DOT__xor_ab) 
                                                     << 3U) 
                                                    ^ 
                                                    (0xfffffff8U 
                                                     & ((IData)(vlSelf->FourBitAdder__DOT__co_temp) 
                                                        << 1U))))));
    vlSelf->FourBitAdder__DOT__co_temp = ((1U & (IData)(vlSelf->FourBitAdder__DOT__co_temp)) 
                                          | (((IData)(FourBitAdder__DOT____Vcellout__fa2__co) 
                                              << 2U) 
                                             | ((IData)(FourBitAdder__DOT____Vcellout__fa1__co) 
                                                << 1U)));
}

void VFourBitAdder___024root___eval(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___eval\n"); );
    // Body
    VFourBitAdder___024root___combo__TOP__1(vlSelf);
}

QData VFourBitAdder___024root___change_request_1(VFourBitAdder___024root* vlSelf);

VL_INLINE_OPT QData VFourBitAdder___024root___change_request(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___change_request\n"); );
    // Body
    return (VFourBitAdder___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VFourBitAdder___024root___change_request_1(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->FourBitAdder__DOT__co_temp ^ vlSelf->__Vchglast__TOP__FourBitAdder__DOT__co_temp));
    VL_DEBUG_IF( if(__req && ((vlSelf->FourBitAdder__DOT__co_temp ^ vlSelf->__Vchglast__TOP__FourBitAdder__DOT__co_temp))) VL_DBG_MSGF("        CHANGE: /home/rzyang/Codes/ysyx-workbench/ddca/lab2/vsrc/FourBitAdder.v:7: FourBitAdder.co_temp\n"); );
    // Final
    vlSelf->__Vchglast__TOP__FourBitAdder__DOT__co_temp 
        = vlSelf->FourBitAdder__DOT__co_temp;
    return __req;
}

#ifdef VL_DEBUG
void VFourBitAdder___024root___eval_debug_assertions(VFourBitAdder___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VFourBitAdder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFourBitAdder___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->a & 0xf0U))) {
        Verilated::overWidthError("a");}
    if (VL_UNLIKELY((vlSelf->b & 0xf0U))) {
        Verilated::overWidthError("b");}
}
#endif  // VL_DEBUG
