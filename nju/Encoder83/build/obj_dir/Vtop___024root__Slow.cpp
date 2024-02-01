// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlUnpacked<CData/*2:0*/, 512> Vtop__ConstPool__TABLE_2ab4c310_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_d484eecf_0;
extern const VlUnpacked<CData/*7:0*/, 16> Vtop__ConstPool__TABLE_077361af_0;

void Vtop___024root___settle__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__1\n"); );
    // Variables
    CData/*2:0*/ top__DOT____Vcellout__enc__y;
    CData/*3:0*/ __Vtableidx2;
    SData/*8:0*/ __Vtableidx1;
    // Body
    vlSelf->top__DOT__enc_out = (0xbU & (IData)(vlSelf->top__DOT__enc_out));
    __Vtableidx1 = (((IData)(vlSelf->x) << 1U) | (IData)(vlSelf->en));
    top__DOT____Vcellout__enc__y = Vtop__ConstPool__TABLE_2ab4c310_0
        [__Vtableidx1];
    vlSelf->zero = Vtop__ConstPool__TABLE_d484eecf_0
        [__Vtableidx1];
    vlSelf->top__DOT__enc_out = ((8U & (IData)(vlSelf->top__DOT__enc_out)) 
                                 | (IData)(top__DOT____Vcellout__enc__y));
    __Vtableidx2 = vlSelf->top__DOT__enc_out;
    vlSelf->h = Vtop__ConstPool__TABLE_077361af_0[__Vtableidx2];
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__1(vlSelf);
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->x = 0;
    vlSelf->en = 0;
    vlSelf->y = 0;
    vlSelf->zero = 0;
    vlSelf->h = 0;
    vlSelf->top__DOT__enc_out = 0;
}
