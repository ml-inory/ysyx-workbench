// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUX4WAY__SYMS_H_
#define VERILATED_VMUX4WAY__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VMux4Way.h"

// INCLUDE MODULE CLASSES
#include "VMux4Way___024root.h"

// SYMS CLASS (contains all model state)
class VMux4Way__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMux4Way* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMux4Way___024root             TOP;

    // CONSTRUCTORS
    VMux4Way__Syms(VerilatedContext* contextp, const char* namep, VMux4Way* modelp);
    ~VMux4Way__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
