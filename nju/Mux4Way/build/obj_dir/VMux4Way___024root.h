// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMux4Way.h for the primary calling header

#ifndef VERILATED_VMUX4WAY___024ROOT_H_
#define VERILATED_VMUX4WAY___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class VMux4Way__Syms;

//----------

VL_MODULE(VMux4Way___024root) {
  public:

    // PORTS
    VL_IN8(x0,0,0);
    VL_IN8(x1,0,0);
    VL_IN8(x2,0,0);
    VL_IN8(x3,0,0);
    VL_IN8(y,1,0);
    VL_OUT8(f,0,0);

    // INTERNAL VARIABLES
    VMux4Way__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VMux4Way___024root);  ///< Copying not allowed
  public:
    VMux4Way___024root(const char* name);
    ~VMux4Way___024root();

    // INTERNAL METHODS
    void __Vconfigure(VMux4Way__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
