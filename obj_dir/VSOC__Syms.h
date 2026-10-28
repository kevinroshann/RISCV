// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSOC__SYMS_H_
#define VERILATED_VSOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSOC.h"

// INCLUDE MODULE CLASSES
#include "VSOC___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSOC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSOC* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSOC___024root                 TOP;

    // CONSTRUCTORS
    VSOC__Syms(VerilatedContext* contextp, const char* namep, VSOC* modelp);
    ~VSOC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
