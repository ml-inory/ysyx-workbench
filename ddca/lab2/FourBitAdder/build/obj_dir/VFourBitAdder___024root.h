// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VFourBitAdder.h for the primary calling header

#ifndef VERILATED_VFOURBITADDER___024ROOT_H_
#define VERILATED_VFOURBITADDER___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VFourBitAdder__Syms;

//----------

VL_MODULE(VFourBitAdder___024root) {
  public:

    // PORTS
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_OUT8(s,4,0);

    // LOCAL SIGNALS
    CData/*2:0*/ FourBitAdder__DOT__co_temp;

    // LOCAL VARIABLES
    CData/*2:0*/ __Vchglast__TOP__FourBitAdder__DOT__co_temp;

    // INTERNAL VARIABLES
    VFourBitAdder__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFourBitAdder___024root);  ///< Copying not allowed
  public:
    VFourBitAdder___024root(const char* name);
    ~VFourBitAdder___024root();

    // INTERNAL METHODS
    void __Vconfigure(VFourBitAdder__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
