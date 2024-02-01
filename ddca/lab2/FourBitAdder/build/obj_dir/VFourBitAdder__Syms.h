// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFOURBITADDER__SYMS_H_
#define VERILATED_VFOURBITADDER__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VFourBitAdder.h"

// INCLUDE MODULE CLASSES
#include "VFourBitAdder___024root.h"

// SYMS CLASS (contains all model state)
class VFourBitAdder__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VFourBitAdder* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VFourBitAdder___024root        TOP;

    // CONSTRUCTORS
    VFourBitAdder__Syms(VerilatedContext* contextp, const char* namep, VFourBitAdder* modelp);
    ~VFourBitAdder__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
