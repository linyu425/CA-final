// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

//==========

void VTop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTop::eval\n"); );
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 5506, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("Top.v", 5506, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VTop::_sequent__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_sequent__TOP__1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__Top__DOT__mem_slave__DOT__state;
    CData/*0:0*/ __Vdly__Top__DOT__mem_slave__DOT__ARREADY;
    CData/*2:0*/ __Vdly__Top__DOT__uart_slave__DOT__state;
    CData/*0:0*/ __Vdly__Top__DOT__uart_slave__DOT__ARREADY;
    CData/*2:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state;
    CData/*0:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump;
    CData/*1:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    CData/*2:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state;
    CData/*0:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal;
    CData/*2:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state;
    CData/*0:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid;
    CData/*0:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID;
    CData/*2:0*/ __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state;
    CData/*2:0*/ __Vdly__Top__DOT__dummy__DOT__slave__DOT__state;
    CData/*0:0*/ __Vdly__Top__DOT__dummy__DOT__slave__DOT__ARREADY;
    CData/*2:0*/ __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state;
    CData/*0:0*/ __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID;
    // Body
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump;
    __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID 
        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID;
    __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state 
        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal;
    __Vdly__Top__DOT__mem_slave__DOT__ARREADY = vlTOPp->Top__DOT__mem_slave__DOT__ARREADY;
    __Vdly__Top__DOT__uart_slave__DOT__ARREADY = vlTOPp->Top__DOT__uart_slave__DOT__ARREADY;
    __Vdly__Top__DOT__dummy__DOT__slave__DOT__ARREADY 
        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY;
    __Vdly__Top__DOT__mem_slave__DOT__state = vlTOPp->Top__DOT__mem_slave__DOT__state;
    __Vdly__Top__DOT__uart_slave__DOT__state = vlTOPp->Top__DOT__uart_slave__DOT__state;
    __Vdly__Top__DOT__dummy__DOT__slave__DOT__state 
        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid 
        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid;
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)
                                          ? ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)) 
                                             & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_2))
                                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_2)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate;
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address 
        = ((IData)(vlTOPp->reset) ? 0U : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                           ? 0x343U
                                           : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                               ? 0x300U
                                               : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                   ? 0x300U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                    ? 0x342U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                     ? 0x341U
                                                     : 0U))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert 
        = ((~ (IData)(vlTOPp->reset)) & ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state)) 
                                         | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0 = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1 = 0U;
    }
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                         & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_1)));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY) 
                     & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID))) {
                    __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state = 2U;
                }
            } else {
                __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state 
                    = ((2U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                        ? (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_12)
                        : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_13;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID 
                    = (1U & (~ ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY) 
                                & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_14;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
                    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY 
                        = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__mem_slave__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if (vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID) {
                __Vdly__Top__DOT__mem_slave__DOT__state = 3U;
            } else {
                if (vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) {
                    __Vdly__Top__DOT__mem_slave__DOT__state = 1U;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY))) {
                    __Vdly__Top__DOT__mem_slave__DOT__state = 2U;
                }
            } else {
                __Vdly__Top__DOT__mem_slave__DOT__state 
                    = ((2U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                        ? (IData)(vlTOPp->Top__DOT__mem_slave__DOT___GEN_6)
                        : (IData)(vlTOPp->Top__DOT__mem_slave__DOT___GEN_37));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__addr = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__addr 
                        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                            : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR);
                }
            } else {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__addr 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__read = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            vlTOPp->Top__DOT__mem_slave__DOT__read = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                vlTOPp->Top__DOT__mem_slave__DOT__read 
                    = vlTOPp->Top__DOT__mem_slave__DOT___GEN_4;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__write = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            vlTOPp->Top__DOT__mem_slave__DOT__write = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__write 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_44;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_40;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_41;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_42;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_43;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__mem_slave__DOT__ARREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                __Vdly__Top__DOT__mem_slave__DOT__ARREADY 
                    = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                                & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__RVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            vlTOPp->Top__DOT__mem_slave__DOT__RVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__RVALID 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_7;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__AWREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__AWREADY 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_35;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__WREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__WREADY 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__mem_slave__DOT__BVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
            vlTOPp->Top__DOT__mem_slave__DOT__BVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
                    vlTOPp->Top__DOT__mem_slave__DOT__BVALID 
                        = vlTOPp->Top__DOT__mem_slave__DOT___GEN_45;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__uart_slave__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if (vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID) {
                __Vdly__Top__DOT__uart_slave__DOT__state = 3U;
            } else {
                if (vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID) {
                    __Vdly__Top__DOT__uart_slave__DOT__state = 1U;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY))) {
                    __Vdly__Top__DOT__uart_slave__DOT__state = 2U;
                }
            } else {
                __Vdly__Top__DOT__uart_slave__DOT__state 
                    = ((2U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                        ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT___GEN_6)
                        : (IData)(vlTOPp->Top__DOT__uart_slave__DOT___GEN_37));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__addr = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__addr 
                        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                            : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR);
                }
            } else {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__addr 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__read = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            vlTOPp->Top__DOT__uart_slave__DOT__read = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                vlTOPp->Top__DOT__uart_slave__DOT__read 
                    = vlTOPp->Top__DOT__uart_slave__DOT___GEN_4;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__write = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            vlTOPp->Top__DOT__uart_slave__DOT__write = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__write 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_44;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_40;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_41;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_42;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_43;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__uart_slave__DOT__ARREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                __Vdly__Top__DOT__uart_slave__DOT__ARREADY 
                    = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID) 
                                & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__RVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            vlTOPp->Top__DOT__uart_slave__DOT__RVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__RVALID 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_7;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__AWREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__AWREADY 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_35;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__WREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__WREADY 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__uart_slave__DOT__BVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
            vlTOPp->Top__DOT__uart_slave__DOT__BVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
                    vlTOPp->Top__DOT__uart_slave__DOT__BVALID 
                        = vlTOPp->Top__DOT__uart_slave__DOT___GEN_45;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__dummy__DOT__slave__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if (vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID) {
                __Vdly__Top__DOT__dummy__DOT__slave__DOT__state = 3U;
            } else {
                if (vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID) {
                    __Vdly__Top__DOT__dummy__DOT__slave__DOT__state = 1U;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY))) {
                    __Vdly__Top__DOT__dummy__DOT__slave__DOT__state = 2U;
                }
            } else {
                __Vdly__Top__DOT__dummy__DOT__slave__DOT__state 
                    = ((2U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                        ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_6)
                        : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_37));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID) 
                     & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr 
                        = (0xfU & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                    : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR));
                }
            } else {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read 
                    = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_4;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_44;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_40;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_41;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_42;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3 = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_43;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__dummy__DOT__slave__DOT__ARREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                __Vdly__Top__DOT__dummy__DOT__slave__DOT__ARREADY 
                    = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID) 
                                & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_7;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_35;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
            vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
                    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID 
                        = vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_45;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ = 0U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ = 0U;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_;
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state = 0U;
    } else {
        if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_11;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ 
                = (((0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                    | (0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                   | (0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ 
                = (0x33U != (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ 
                = (0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                             >> 0x14U));
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_ 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) {
                __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
                    = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                        ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_2)
                        : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_10));
            } else {
                if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) {
                    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_56;
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1fU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1eU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1dU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1cU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1bU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x16U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x17U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x18U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x19U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x1aU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x15U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x14U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xeU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xfU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x10U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x11U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x12U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0x13U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xdU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xcU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xbU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0xaU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((8U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((7U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((9U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)))) {
            if ((6U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ = 0U;
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_data = 0U;
        vlTOPp->Top__DOT__mem_slave__DOT__write_data = 0U;
        vlTOPp->Top__DOT__uart_slave__DOT__write_data = 0U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address = 0U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ = 0U;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                ? 0U : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                         ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                             ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                      ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid)
                                          ? ((2U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))
                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                   ? 
                                                  (0xffffU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                   : 
                                                  (0xffffU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                      >> 0x10U)))
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                       >> 0xcU)))
                                                   ? 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                    ? 
                                                   ((((0x8000U 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                       ? 0xffffU
                                                       : 0U) 
                                                     << 0x10U) 
                                                    | (0xffffU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                          >> 0x10U))))
                                                   : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67)))
                                          : 0U) : 0U))
                         : 0U));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_data 
            = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr);
        vlTOPp->Top__DOT__mem_slave__DOT__write_data 
            = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr);
        vlTOPp->Top__DOT__uart_slave__DOT__write_data 
            = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr);
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address 
            = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                    : 0U));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_;
    }
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID 
        = __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID;
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state 
        = __Vdly__Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state;
    vlTOPp->Top__DOT__mem_slave__DOT__state = __Vdly__Top__DOT__mem_slave__DOT__state;
    vlTOPp->Top__DOT__uart_slave__DOT__state = __Vdly__Top__DOT__uart_slave__DOT__state;
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state 
        = __Vdly__Top__DOT__dummy__DOT__slave__DOT__state;
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB 
        = ((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3) 
             << 3U) | ((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2) 
                       << 2U)) | (((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1) 
                                   << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1;
        }
    }
    vlTOPp->io_mem_slave_read = vlTOPp->Top__DOT__mem_slave__DOT__read;
    vlTOPp->io_mem_slave_write_strobe_0 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0;
    vlTOPp->io_mem_slave_write_strobe_1 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1;
    vlTOPp->io_mem_slave_write_strobe_2 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2;
    vlTOPp->io_mem_slave_write_strobe_3 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3;
    vlTOPp->io_mem_slave_write = vlTOPp->Top__DOT__mem_slave__DOT__write;
    vlTOPp->io_mem_slave_address = vlTOPp->Top__DOT__mem_slave__DOT__addr;
    vlTOPp->io_uart_slave_read = vlTOPp->Top__DOT__uart_slave__DOT__read;
    vlTOPp->io_uart_slave_write_strobe_0 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0;
    vlTOPp->io_uart_slave_write_strobe_1 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1;
    vlTOPp->io_uart_slave_write_strobe_2 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2;
    vlTOPp->io_uart_slave_write_strobe_3 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3;
    vlTOPp->io_uart_slave_write = vlTOPp->Top__DOT__uart_slave__DOT__write;
    vlTOPp->io_uart_slave_address = vlTOPp->Top__DOT__uart_slave__DOT__addr;
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_12 
        = ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
            ? 0U : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state));
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_13 
        = ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID) 
           | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid));
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_14 
        = ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID) 
           | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY));
    if ((3U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33 
            = (1U & (~ ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY) 
                        & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID))));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38 
            = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid;
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35 
            = (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY) 
                & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID))
                ? 4U : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state));
    } else {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                      ? (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY)
                      : ((5U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                          ? (~ ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID) 
                                & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY)))
                          : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY))));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38 
            = ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                ? (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid)
                : ((5U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID) 
                        & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY)) 
                       | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid))
                    : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid)));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                      ? (~ ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY) 
                            & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID)))
                      : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID)));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35 
            = ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY) 
                    & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID))
                    ? 5U : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                : ((5U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID) 
                        & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY))
                        ? 0U : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                    : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state)));
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ 
                = (IData)((0x7fffffffffffffffULL & 
                           ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                             ? (QData)((IData)((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                             : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                 ? (QData)((IData)(
                                                   (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                    - vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                 : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                     ? ((QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                        << (0x1fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                     : (QData)((IData)(
                                                       ((4U 
                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                         ? 
                                                        VL_LTS_III(32,32,32, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                          ? 
                                                         (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                          ^ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                          : 
                                                         ((6U 
                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                           ? 
                                                          (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                           | vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                           : 
                                                          ((7U 
                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                            ? 
                                                           (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                            & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)
                                                            : 
                                                           ((8U 
                                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                             ? 
                                                            (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                             >> 
                                                             (0x1fU 
                                                              & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                             : 
                                                            ((9U 
                                                              == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                              ? 
                                                             VL_SHIFTRS_III(32,32,5, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1, 
                                                                            (0x1fU 
                                                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
                                                              : 
                                                             ((0xaU 
                                                               == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct)) 
                                                              & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                 < vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))))))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_;
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_));
    vlTOPp->io_mem_slave_write_data = vlTOPp->Top__DOT__mem_slave__DOT__write_data;
    vlTOPp->io_uart_slave_write_data = vlTOPp->Top__DOT__uart_slave__DOT__write_data;
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr = 0U;
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state = 3U;
            } else {
                if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read) {
                    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state = 1U;
                }
            }
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                    >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                       : ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                        >> 0x1dU)))
                           ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                           : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                            >> 0x1dU)))
                               ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                               : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                   ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                   : ((3U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                       ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                       : ((2U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                     >> 0x1dU)))
                                           ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY)
                                           : ((1U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                   >> 0x1dU)))
                                               ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                               : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY)))))))) 
                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID))) {
                    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state = 2U;
                }
            } else {
                __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state 
                    = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                        ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_12)
                        : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_35));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address;
            } else {
                if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_13;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_38;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data 
                    = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                        | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                            ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                         ? 0U : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137))
                            : 0U) : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                      ? (IData)(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                                                  ? 0ULL
                                                  : 
                                                 ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                                                   ? 0ULL
                                                   : 
                                                  ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_)
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                                     ? 
                                                    (0xffffffffffULL 
                                                     & ((0U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                             >> 0xcU)))
                                                         ? 
                                                        ((QData)((IData)(
                                                                         (0x1ffU 
                                                                          & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_))) 
                                                         << 
                                                         (0x18U 
                                                          & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address 
                                                             << 3U)))
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                              >> 0xcU)))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                           ? (QData)((IData)(
                                                                             (0x1ffffU 
                                                                              & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_)))
                                                           : 
                                                          ((QData)((IData)(
                                                                           (0x1ffffU 
                                                                            & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_))) 
                                                           << 0x10U))
                                                          : (QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_)))))
                                                     : 0ULL)
                                                    : 0ULL))))
                                      : 0U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0 
                    = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                        | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                        : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                           & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                              & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                       & ((0U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                           ? (0U == 
                                              (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                           : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1 
                    = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                        | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                        : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                           & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                              & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                       & ((0U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                           ? (1U == 
                                              (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                           : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2 
                    = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                        | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                        : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                           & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                              & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                       & ((0U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                           ? (2U == 
                                              (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                           : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3 
                    = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                        | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                        : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                           & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                              & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                    & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                       & ((0U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                           ? (3U == 
                                              (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                           : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
            }
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID = 0U;
        } else {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID 
                    = (1U & (~ (((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                  ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                  : ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                   >> 0x1dU)))
                                      ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                      : ((5U == (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                    >> 0x1dU)))
                                          ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                          : ((4U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                              ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                      >> 0x1dU)))
                                                  ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                       >> 0x1dU)))
                                                   ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                        >> 0x1dU)))
                                                    ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY)))))))) 
                                & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID))));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_14;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_33;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID = 0U;
        } else {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_36;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_37;
                }
            }
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
            ? ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_;
        }
    }
    vlTOPp->Top__DOT__uart_slave__DOT__ARREADY = __Vdly__Top__DOT__uart_slave__DOT__ARREADY;
    vlTOPp->Top__DOT__mem_slave__DOT__ARREADY = __Vdly__Top__DOT__mem_slave__DOT__ARREADY;
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY 
        = __Vdly__Top__DOT__dummy__DOT__slave__DOT__ARREADY;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = 0x1000U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = 0x1000U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ 
                = ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? 3U : ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                             ? 3U : ((0x73U == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                      ? 2U : ((3U == 
                                               (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                               ? 1U
                                               : 0U))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_;
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
           & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_;
        }
    }
    if ((0U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))) {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR = 0U;
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR = 0U;
    } else {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR 
            = ((1U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                ? vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr
                : 0U);
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR 
            = ((1U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                         ? 0U : ((3U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                                  ? vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr
                                  : ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                                      ? vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr
                                      : 0U))));
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB 
        = ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3) 
             << 3U) | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2) 
                       << 2U)) | (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1) 
                                   << 1U) | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_;
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                = ((0x180U == (0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                         >> 0x14U)))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                    : ((0x343U == (0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                             >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval
                        : ((0x340U == (0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                            : ((0x300U == (0xfffU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                : ((0x304U == (0xfffU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                    : ((0x341U == (0xfffU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                        : ((0x342U 
                                            == (0xfffU 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                            : ((0x305U 
                                                == 
                                                (0xfffU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                : (
                                                   (0xc80U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U)))
                                                    ? (IData)(
                                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
                                                               >> 0x20U))
                                                    : 
                                                   ((0xc00U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U)))
                                                     ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles)
                                                     : 0U))))))))));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = 0x1000U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = 0x1000U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ 
                = ((((((((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                         | (0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                        | (3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                       | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                      | (0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                     | (0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                    | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                   | (0x73U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
           & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ 
                = (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                            >> 7U));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ 
                = (0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ 
                = (3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = 0x13U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = 0x13U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_;
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles 
        = ((IData)(vlTOPp->reset) ? 0ULL : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_22;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_21;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause 
                    = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                        : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1);
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = 0U;
    } else {
        if ((0x305U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec 
                = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
                    : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable)
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data
                        : 0U));
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 
        = ((0x33U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                            >> 0xcU)))
                               ? 3U : ((0x40000000U 
                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                        ? 2U : 1U))))))))
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
               | ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                  | ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                     | ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                        | ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                           | ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)) 
                              | (0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1) 
            & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
               == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                            >> 0xfU)))) ? 1U : (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5) 
                                                 & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                        >> 0xfU))))
                                                 ? 2U
                                                 : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1) 
            & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
               == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                            >> 0x14U)))) ? 1U : (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5) 
                                                  & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U))))
                                                  ? 2U
                                                  : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data 
        = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                         >> 0xcU))) ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                       | (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                   >> 0xfU)))
            : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                           & (~ (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                    >> 0xfU))))
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? (0x1fU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                  >> 0xfU))
                    : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                     >> 0xcU))) ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                                                   | vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_)
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                         >> 0xcU)))
                            ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ 
                               & (~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_))
                            : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                             >> 0xcU)))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_
                                : 0U))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable 
        = ((~ (IData)(vlTOPp->reset)) & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state)));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ 
                = ((0x73U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                   & ((((((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))) 
                          | (5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                          >> 0xcU)))) 
                         | (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                         >> 0xcU)))) 
                        | (6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                        >> 0xcU)))) 
                       | (3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0xcU)))) 
                      | (7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                      >> 0xcU)))));
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data 
        = ((IData)(vlTOPp->reset) ? 0U : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                           ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val
                                           : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                               ? ((0xfffffff0U 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus) 
                                                  | ((8U 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                                         >> 4U)) 
                                                     | (7U 
                                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus)))
                                               : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                   ? 
                                                  (0xfffffff7U 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address
                                                     : 0U))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct 
        = ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_))
            ? ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((0x40000000U 
                                            & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)
                                            ? 9U : 8U)
                : ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                 >> 0xcU))) ? 7U : 
                   ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                  >> 0xcU))) ? 6U : 
                    ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                   >> 0xcU))) ? 5U : 
                     ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                    >> 0xcU))) ? 0xaU
                       : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                        >> 0xcU))) ? 4U
                           : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                            >> 0xcU)))
                               ? 3U : 1U))))))) : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data
            : 0U);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20;
                }
            }
        }
    }
    __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state 
        = ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                           ? ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))
                                               ? 2U
                                               : ((2U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))
                                                   ? 2U
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_7)))
                                           : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                               ? 1U
                                               : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
                                                   ? 5U
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_18)))));
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
                    = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal)
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                            ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                         ? 0U : ((2U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                  ? 
                                                 ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                                        | (2U 
                                                           == 
                                                           (3U 
                                                            & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                               >> 1U)))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                              >> 8U)))))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T
                                                    : 0U))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                  >> 1U)))) 
                                                          | (0U 
                                                             != 
                                                             (3U 
                                                              & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                 >> 8U)))) 
                                                         | (0U 
                                                            == 
                                                            (7U 
                                                             & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                >> 1U)))))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T
                                                      : 
                                                     ((1U 
                                                       & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                           >> 1U) 
                                                          | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                             >> 3U)))
                                                       ? 
                                                      ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                                         | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                                        | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)))))
                            : 0U) : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)
                                      ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
                                         - (IData)(4U))
                                      : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc));
            } else {
                if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address 
                        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address
                            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause 
                    = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal)
                        ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187)
                        : ((0x100073U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                            ? 3U : ((0x73U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                     ? 0xbU : 0xaU)));
            } else {
                if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause 
                        = ((1U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_)
                            ? 0x80000007U : 0x8000000bU);
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val 
                    = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal)
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                            ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                         ? 0U : ((2U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                  ? 
                                                 ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                                        | (2U 
                                                           == 
                                                           (3U 
                                                            & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                               >> 1U)))) 
                                                       | (0U 
                                                          != 
                                                          (3U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                              >> 8U)))))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address
                                                    : 0U))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                           | (2U 
                                                              == 
                                                              (3U 
                                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                  >> 1U)))) 
                                                          | (0U 
                                                             != 
                                                             (3U 
                                                              & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                 >> 8U)))) 
                                                         | (0U 
                                                            == 
                                                            (7U 
                                                             & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                >> 1U)))))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address
                                                      : 
                                                     ((1U 
                                                       & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                           >> 1U) 
                                                          | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                             >> 3U)))
                                                       ? 
                                                      ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                                         | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                                        | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address
                                                        : 0U)
                                                       : 0U)))
                                                    : 0U)))))
                            : 0U) : 0U);
            } else {
                if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val = 0U;
                }
            }
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1);
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_ = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_ = 0U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_ 
                = vlTOPp->io_signal_interrupt;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = 0x1000U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag) {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address;
        } else {
            if ((1U & (~ ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
                            | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag)) 
                           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard)) 
                          | ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                             | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))))) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc 
                    = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = 0x13U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall) {
            if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush) {
                vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = 0x13U;
            }
        } else {
            vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                = ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid) 
                     & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))) 
                    & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)))
                    ? ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                        ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
                        : 0U) : 0x13U);
        }
    }
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) {
            __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state 
                = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                    ? 1U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                             ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_4)
                             : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_129)));
        }
    }
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) {
        if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
            if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
                if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data;
                }
            }
        }
    }
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) {
        if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
            if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
                if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_112;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals = 0U;
    } else {
        if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) {
            if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
                if ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132;
                }
            }
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 
        = ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9 
        = ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
              ? 0x1fffffU : 0U) << 0xbU) | (0x7ffU 
                                            & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 
        = ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
           | (0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1) 
            & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
               == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                            >> 0x14U)))) ? 1U : (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5) 
                                                  & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U))))
                                                  ? 2U
                                                  : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_141 
        = ((0xdU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                              >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
            : ((0xcU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                  >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                : ((0xbU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                      >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                    : ((0xaU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                          >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                        : ((9U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                            : ((8U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                : ((7U == (0x1fU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                    : ((6U == (0x1fU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                        : ((5U == (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                            : ((4U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                : (
                                                   (3U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                      : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? 0U : (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                             >> 0xfU)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted 
        = ((IData)(vlTOPp->reset) ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                                           ? (((0U 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state)) 
                                               & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid)))
                                               ? ((0x80000000U 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp)
                                                   ? 
                                                  ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)
                                                    ? 3U
                                                    : 
                                                   ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)
                                                     ? 4U
                                                     : 0U))
                                                   : 
                                                  ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)
                                                    ? 2U
                                                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)))
                                               : 0U)
                                           : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                                               ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                                                   ? 4U
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_21))
                                               : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                                                   ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_49)
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_60)))));
    if (vlTOPp->reset) {
        __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
            if (((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state)) 
                 & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid)))) {
                __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state 
                    = ((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp)
                        ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_3)
                        : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_9));
            }
        } else {
            __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state 
                = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                        ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_20))
                    : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                        ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_48)
                        : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_59)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
            if (((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state)) 
                 & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid)))) {
                if ((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp)) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_5;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address;
                }
            } else {
                if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_50;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
            if (((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state)) 
                 & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid)))) {
                if ((1U & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                              >> 0x1fU)))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_10;
                }
            }
        } else {
            if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                if ((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_22;
                }
            } else {
                if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_52;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
            if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_47;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending = 0U;
    } else {
        if ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
            if ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                if ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_51;
                }
            }
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid 
        = ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)) 
           & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                 >> 2U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid 
        = ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)) 
           & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                 >> 1U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_55 
        = ((0x37U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
            : ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                      ? 0xfffffU : 0U) << 0xcU) | (
                                                   (0x800U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       << 4U)) 
                                                   | ((0x7e0U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U)) 
                                                      | (0x1eU 
                                                         & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                            >> 7U)))))
                : ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                    ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                          ? 0x1fffffU : 0U) << 0xbU) 
                       | ((0x7e0U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 7U))))
                    : ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                        : ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                            : ((0x13U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9
                                : ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                      ? 0xfffffU : 0U) 
                                    << 0xcU) | (0xfffU 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U)))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
           | (0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_154 
        = ((0x1aU == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                               >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
            : ((0x19U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                   >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                : ((0x18U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                       >> 0x14U))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                    : ((0x17U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                        : ((0x16U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                            : ((0x15U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0x14U)))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
                                : ((0x14U == (0x1fU 
                                              & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                                    : ((0x13U == (0x1fU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                                        : ((0x12U == 
                                            (0x1fU 
                                             & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U)))
                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                                            : ((0x11U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0x14U)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                                                : (
                                                   (0x10U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                                    : 
                                                   ((0xfU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                                     : 
                                                    ((0xeU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                                      : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_141)))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id 
        = ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))) 
            & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
               == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address)))
            ? 1U : ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
                      & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_))) 
                     & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_) 
                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address)))
                     ? 2U : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_117 
        = ((0x15U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__mem_access_state;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate 
        = ((0x6fU == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? ((((0x80000000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                  ? 0xfffU : 0U) << 0x14U) | ((0xff000U 
                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_) 
                                              | ((0x800U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0x14U)))))
            : ((0x17U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                ? (0xfffff000U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_55));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard 
        = (((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_) 
              | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction)) 
             & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_))) 
            & (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address)) 
               | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_) 
                  == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                               >> 0x14U))))) | ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction) 
                                                  & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                                 & (0U 
                                                    != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_))) 
                                                & (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address)) 
                                                   | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 
        = ((0U == (0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                            >> 0x14U))) ? 0U : ((((0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U)) 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                                                 & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                                                 : 
                                                ((0x1fU 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                                                  : 
                                                 ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                   : 
                                                  ((0x1dU 
                                                    == 
                                                    (0x1fU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0x1fU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0x1fU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                      : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_154)))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
            ? 0U : ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address) 
                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_))
                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                     : ((0x1fU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                         : ((0x1eU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                             : ((0x1dU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                 : ((0x1cU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                     : ((0x1bU == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                         : ((0x1aU 
                                             == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                             : ((0x19U 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                 : 
                                                ((0x18U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                  : 
                                                 ((0x17U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                   : 
                                                  ((0x16U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_117))))))))))));
    if ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR = 0U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR = 0U;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR 
            = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                : 0U);
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR 
            = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                         ? 0U : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                                  : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                                      : 0U))));
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_0));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token 
        = ((~ (IData)(vlTOPp->reset)) & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal) 
                                         & (4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))));
    if ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                      >> 0xcU)))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30 
            = (0U == (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33 
            = (0U != (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address));
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30 
            = (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                            >> 0xcU)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33 
            = (2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                            >> 0xcU)));
    }
    if (vlTOPp->reset) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp = 0U;
    } else {
        if ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
            if ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                if ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
                    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                        = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_23;
                }
            }
        }
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_2 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
            ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
    if ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4 
            = ((3U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)
                ? 0xdU : ((0x23U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)
                           ? 0xfU : 0xaU));
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4 = 0xcU;
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___T_17 = (
                                                   (4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                                   | (3U 
                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
           | (4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid 
        = ((3U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
           & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                 >> 3U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal 
        = __Vdly__Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal;
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
            ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)
            : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable)
                ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address)
                : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_11 
        = (1U & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state)) 
                 | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state)
                     ? ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state))
                     : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_10 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid)
                ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
            : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_56 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
            ? ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                ? 2U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid)
                    ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)));
    if ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_59 
            = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid) 
                | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid))
                ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_60 
            = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid) 
                | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid))
                ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted));
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_59 
            = ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)
                    ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_60 
            = ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)
                    ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted));
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___T_17) 
           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___T_17) 
           & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa 
            = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                         ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                  ? 0U : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                           ? 0U : (
                                                   (4U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                    ? 0U
                                                    : 
                                                   ((5U 
                                                     == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                     ? 0U
                                                     : 
                                                    ((6U 
                                                      == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                      ? 
                                                     ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                       ? 0U
                                                       : 
                                                      ((0xfffff000U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                           << 2U)) 
                                                       | (0xfffU 
                                                          & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)))
                                                      : 0U)))))));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid 
            = (((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                & ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                   & ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                      & ((3U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                         & ((4U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                            & ((5U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                               & ((6U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                  & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart))))))))) 
               & 1U);
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa = 0U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid = 0U;
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
            ? 0U : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                     ? 0U : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                              ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                  ? 0U : ((1U & (((
                                                   (~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                   | (2U 
                                                      == 
                                                      (3U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                          >> 1U)))) 
                                                  | (0U 
                                                     != 
                                                     (3U 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                         >> 8U)))) 
                                                 | (0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                        >> 1U)))))
                                           ? 0U : (
                                                   (1U 
                                                    & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                        >> 1U) 
                                                       | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                          >> 3U)))
                                                    ? 
                                                   ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                                      | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                                     | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                                     ? 0U
                                                     : 
                                                    ((1U 
                                                      & ((~ 
                                                          (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                           >> 6U)) 
                                                         | ((~ 
                                                             (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                              >> 7U)) 
                                                            & (0x23U 
                                                               == 
                                                               (0x7fU 
                                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)))))
                                                      ? 
                                                     (0x40U 
                                                      | ((0xffffff00U 
                                                          & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                         | (((0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)) 
                                                             << 7U) 
                                                            | (0x3fU 
                                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0))))
                                                      : 0U))
                                                    : 0U)))
                              : 0U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
            ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                         ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                  ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                      ? 0U : ((1U & 
                                               (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                                 | (2U 
                                                    == 
                                                    (3U 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                        >> 1U)))) 
                                                | (0U 
                                                   != 
                                                   (3U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                       >> 8U)))))
                                               ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4)
                                               : 0U))
                                  : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                      ? 0U : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                               ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                         | (2U 
                                                            == 
                                                            (3U 
                                                             & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                                >> 1U)))) 
                                                        | (0U 
                                                           != 
                                                           (3U 
                                                            & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                               >> 8U)))) 
                                                       | (0U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                              >> 1U)))))
                                                    ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4)
                                                    : 
                                                   ((1U 
                                                     & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                         >> 1U) 
                                                        | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                           >> 3U)))
                                                     ? 
                                                    ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                                       | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                                      | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4)
                                                      : 0U)
                                                     : 0U)))
                                               : 0U)))))
            : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175 
        = ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
           & ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
              & ((2U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                 & ((3U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                    & ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                       & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)) 
                          & ((~ ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                   | (2U == (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                   >> 1U)))) 
                                  | (0U != (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                  >> 8U)))) 
                                 | (0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                 >> 1U))))) 
                             & (((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                  >> 1U) | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                            >> 3U)) 
                                & ((~ (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                        | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                       | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))) 
                                   & ((~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                          >> 6U)) | 
                                      ((~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                           >> 7U)) 
                                       & (0x23U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135 
        = (0x7ffffffffULL & ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                              ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                  ? 0ULL : ((1U & (
                                                   ((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                                    | (2U 
                                                       == 
                                                       (3U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                           >> 1U)))) 
                                                   | (0U 
                                                      != 
                                                      (3U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                          >> 8U)))))
                                             ? 0ULL
                                             : ((QData)((IData)(
                                                                (0xfffff000U 
                                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                                    << 2U)))) 
                                                & (QData)((IData)(
                                                                  (0xffcU 
                                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                                                      >> 0xaU)))))))
                              : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                  ? 0ULL : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                             ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                                                 ? 0ULL
                                                 : 
                                                ((1U 
                                                  & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                                       | (2U 
                                                          == 
                                                          (3U 
                                                           & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                              >> 1U)))) 
                                                      | (0U 
                                                         != 
                                                         (3U 
                                                          & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                             >> 8U)))) 
                                                     | (0U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                            >> 1U)))))
                                                  ? 0ULL
                                                  : 
                                                 ((1U 
                                                   & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                       >> 1U) 
                                                      | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                         >> 3U)))
                                                   ? 
                                                  ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                                     | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                                    | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & ((~ 
                                                         (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                          >> 6U)) 
                                                        | ((~ 
                                                            (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                             >> 7U)) 
                                                           & (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)))))
                                                     ? 
                                                    ((QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                                         << 2U)))) 
                                                     + (QData)((IData)(
                                                                       (0xffcU 
                                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                                                           >> 0xaU)))))
                                                     : 0ULL))
                                                   : 0ULL)))
                                             : 0ULL))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_0 
        = ((0x1000U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_18 
        = ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
            ? 4U : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state 
        = ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal) 
             | (0x73U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
            | (0x100073U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? 1U : (((0U != vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_) 
                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                        >> 3U)) ? 2U : ((0x30200073U 
                                         == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)
                                         ? 3U : 0U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read 
        = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
            | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
               & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                  | ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                     & ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                        & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)) 
                           & (~ (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                  | (2U == (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                  >> 1U)))) 
                                 | (0U != (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                 >> 8U))))))))))
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                ? ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                   & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
                      & (0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))))
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                   & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state)))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132 
        = (1U & ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                  ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)
                      : ((1U & (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                 | (2U == (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                 >> 1U)))) 
                                | (0U != (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                >> 8U)))))
                          ? (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token))
                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)))
                  : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)
                      : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                          ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                              ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)
                              : ((1U & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                          | (2U == 
                                             (3U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                               >> 1U)))) 
                                         | (0U != (3U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                      >> 8U)))) 
                                        | (0U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                     >> 1U)))))
                                  ? (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token))
                                  : ((1U & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                             >> 1U) 
                                            | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                               >> 3U)))
                                      ? ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                          | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                          ? (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token))
                                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals))
                                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals))))
                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag 
        = ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
           & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
               ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                  | ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                     & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid))))
               : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                  & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                     | ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                        & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid)))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
            ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request 
        = ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
           & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
               ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                  | (1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)))
               : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                  & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                     | (2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))))));
    if ((0x304U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_21 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_22 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_23 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 
            = ((0x300U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus);
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_21 
            = ((0x300U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                : ((0x340U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_22 
            = ((0x300U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval
                : ((0x340U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval
                    : ((0x343U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data
                        : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_23 
            = ((0x300U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                : ((0x340U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                    : ((0x343U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                        : ((0x180U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data
                            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp))));
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging 
        = ((0x305U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
           & ((0x342U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
              & ((0x341U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                 & ((0x304U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                    & ((0x300U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                       & ((0x340U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                          & ((0x343U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                             & ((0x180U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address)) 
                                & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data 
                                    >> 0x1fU) & (~ 
                                                 (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                                                  >> 0x1fU)))))))))));
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_4 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                ? 0U : 2U);
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart) 
               & 1U);
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_4 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3 = 0U;
    }
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_20 = 3U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_21 = 2U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_22 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_20 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_21 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_22 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address;
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write 
        = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
            | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
               & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
               & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                  & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                     & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                        & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                           & (2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
            ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                ? ((QData)((IData)((0xfffff000U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                                                   << 0xcU)))) 
                   & (QData)((IData)((0xffcU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                                >> 0x14U)))))
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                    ? 0ULL : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135))
            : 0ULL);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1 
        = ((0x67U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert) 
           | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
              | ((0x63U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                 & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                  >> 0xcU))) ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                >= vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                     : ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                      >> 0xcU))) ? 
                        (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                         < vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                         : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                          >> 0xcU)))
                             ? VL_GTES_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                             : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0xcU)))
                                 ? VL_LTS_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                 : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0xcU)))
                                     ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                        != vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                     : ((0U == (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU))) 
                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                           == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_7 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))
            ? 3U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag 
        = (((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state)) 
            | (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))) 
           & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_114 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid)
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                    ? 0U : 4U) : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
            : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                    ? 0U : ((1U & ((((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0) 
                                     | (2U == (3U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                >> 1U)))) 
                                    | (0U != (3U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                               >> 8U)))) 
                                   | (0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                   >> 1U)))))
                             ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6)
                             : ((1U & ((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                        >> 1U) | (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                  >> 3U)))
                                 ? ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid) 
                                      | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid)) 
                                     | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid))
                                     ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6)
                                     : ((1U & ((~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                   >> 6U)) 
                                               | ((~ 
                                                   (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                                                    >> 7U)) 
                                                  & (0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)))))
                                         ? 5U : 6U))
                                 : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))))
                : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid)
                        ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                            ? 0U : 6U) : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                    : ((6U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                        ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)))));
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_3 = 2U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_9 = 3U;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_5 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_10 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_;
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_3 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)
                ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_9 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)
                ? 4U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_5 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address);
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_10 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid)
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address);
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
           & ((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
              & ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                  ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3)
                  : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                      : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                          ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3)
                          : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                              ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                              : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                  ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid) 
                                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart))
                                  : ((6U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                     & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
        = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
            | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
            ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184)
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address 
        = (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate 
           + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address
            : (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate 
               + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag) 
            & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard))) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_2 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)
            ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)
            : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag) 
               | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_52 = 
        ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)
          ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address
          : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address
              : (((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)) 
                  & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid))
                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa
                  : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
            | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag)) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_129 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                ? 0U : ((1U & (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                | (2U == (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                >> 1U)))) 
                               | (0U != (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                               >> 8U)))))
                         ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6)
                         : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                             ? 3U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))))
            : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_114));
    if (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_51 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_47 
            = (1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_48 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                ? 2U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_49 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                ? 3U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_50 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address);
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_51 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag) 
               | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                   ? ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)) 
                      & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending))
                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_47 
            = (1U & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag) 
                     | ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                         ? ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)) 
                            & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart))
                         : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart))));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_48 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                    ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state))
                : (((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)) 
                    & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid))
                    ? 4U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_49 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                    ? 4U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                : (((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)) 
                    & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid))
                    ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_50 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address);
    }
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID));
    if ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                      >> 0x1dU)))) {
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID;
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY;
    } else {
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID 
            = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID;
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY 
            = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY;
    }
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY));
    if ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                      >> 0x1dU)))) {
        vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID;
        vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY;
        vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY;
        vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID;
    } else {
        vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID 
            = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
                    : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                     >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
                            : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                             >> 0x1dU)))
                                ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__RVALID)
                                : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID)
                                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__RVALID)))))));
        vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY 
            = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY)
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY)
                    : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                     >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY)
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY)
                            : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                             >> 0x1dU)))
                                ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY)
                                : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY)
                                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY)))))));
        vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY 
            = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)
                    : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                     >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)
                            : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                             >> 0x1dU)))
                                ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY)
                                : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)
                                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY)))))));
        vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID 
            = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                    : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                     >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                            : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                             >> 0x1dU)))
                                ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID)
                                : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID)))))));
    }
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
    vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY 
        = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID 
        = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB));
    vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB 
        = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB));
    vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID 
        = ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID 
        = ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
    vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID 
        = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID)
            : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
    vlTOPp->Top__DOT__mem_slave__DOT___GEN_4 = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID) 
                                                 & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY)) 
                                                | (IData)(vlTOPp->Top__DOT__mem_slave__DOT__read));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_4 = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID) 
                                                  & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY)) 
                                                 | (IData)(vlTOPp->Top__DOT__uart_slave__DOT__read));
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_4 
        = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID) 
            & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)) 
           | (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read));
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_7 
        = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY) 
                    & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID))));
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_6 
        = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY) 
            & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID))
            ? 0U : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state));
    vlTOPp->Top__DOT__mem_slave__DOT___GEN_6 = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY) 
                                                 & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__RVALID))
                                                 ? 0U
                                                 : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_6 = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY) 
                                                  & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__RVALID))
                                                  ? 0U
                                                  : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_12 
        = ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID)
            ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_13 
        = ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_14 
        = ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY));
    if ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_33 
            = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY) 
                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID))));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_36 
            = (1U & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_37 
            = (1U & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_38 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid;
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_35 
            = (((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY) 
                & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID))
                ? 4U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state));
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_33 
            = (1U & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_36 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                      ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY) 
                            & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID)))
                      : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_37 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)
                      : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                          ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID) 
                                & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)))
                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY))));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_38 
            = ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid)
                : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID) 
                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY)) 
                       | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid))
                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_35 
            = ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY) 
                    & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID))
                    ? 5U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                : ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID) 
                        & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY))
                        ? 0U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                    : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state)));
    }
    vlTOPp->Top__DOT__mem_slave__DOT___GEN_45 = (1U 
                                                 & ((3U 
                                                     == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                                                     ? (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID)
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                                                      ? (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID)
                                                      : 
                                                     ((5U 
                                                       == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                                                       ? 
                                                      (~ 
                                                       ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY) 
                                                        & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID)))
                                                       : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID)))));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_45 = (1U 
                                                  & ((3U 
                                                      == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                                                      ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID)
                                                      : 
                                                     ((4U 
                                                       == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                                                       ? (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID)
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                                                        ? 
                                                       (~ 
                                                        ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY) 
                                                         & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID)))
                                                        : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID)))));
    vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_45 
        = (1U & ((3U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                  ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                  : ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)
                      : ((5U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                          ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY) 
                                & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)))
                          : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID)))));
    if ((3U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_35 = 
            (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID) 
                      & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY))));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_36 = 
            (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID) 
              & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY))
              ? ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                               >> 0x1dU))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                  : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)
              : vlTOPp->Top__DOT__mem_slave__DOT__addr);
    } else {
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_35 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_36 = vlTOPp->Top__DOT__mem_slave__DOT__addr;
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_35 
            = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID) 
                        & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY))));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_36 
            = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID) 
                & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY))
                ? ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                    : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)
                : vlTOPp->Top__DOT__uart_slave__DOT__addr);
    } else {
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_35 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_36 
            = vlTOPp->Top__DOT__uart_slave__DOT__addr;
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_35 
            = (1U & (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID) 
                        & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY))));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_36 
            = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID) 
                & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY))
                ? (0xfU & ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                            : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR))
                : vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr);
    } else {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_35 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_36 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr;
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))) {
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_38 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_40 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_41 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_42 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_43 = 
            (1U & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_44 = vlTOPp->Top__DOT__mem_slave__DOT__write;
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_37 = 
            (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID) 
              & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY))
              ? 4U : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state));
    } else {
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_38 = 
            (1U & ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                    ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY)))
                    : ((5U != (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state)) 
                       & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_40 = 
            (1U & ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                        & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))
                        ? (IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB)
                        : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0))
                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0)));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_41 = 
            (1U & ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                        & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))
                        ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB) 
                           >> 1U) : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1))
                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1)));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_42 = 
            (1U & ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                        & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))
                        ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB) 
                           >> 2U) : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2))
                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2)));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_43 = 
            (1U & ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                        & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))
                        ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB) 
                           >> 3U) : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3))
                    : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3)));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_44 = 
            ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
              ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                  & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY)) 
                 | (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write))
              : ((5U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                  ? ((~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY) 
                         & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID))) 
                     & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write))
                  : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__write)));
        vlTOPp->Top__DOT__mem_slave__DOT___GEN_37 = 
            ((4U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
              ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID) 
                  & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__WREADY))
                  ? 5U : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
              : ((5U == (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                  ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY) 
                      & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__BVALID))
                      ? 0U : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state))
                  : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__state)));
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))) {
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_38 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_40 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_41 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_42 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_43 
            = (1U & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_44 
            = vlTOPp->Top__DOT__uart_slave__DOT__write;
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_37 
            = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID) 
                & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY))
                ? 4U : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state));
    } else {
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_38 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                      ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                            & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY)))
                      : ((5U != (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state)) 
                         & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_40 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))
                          ? (IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB)
                          : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0))
                      : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0)));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_41 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB) 
                             >> 1U) : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1))
                      : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1)));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_42 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB) 
                             >> 2U) : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2))
                      : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2)));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_43 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB) 
                             >> 3U) : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3))
                      : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3)));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_44 
            = ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                    & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY)) 
                   | (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write))
                : ((5U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                    ? ((~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY) 
                           & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID))) 
                       & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write))
                    : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__write)));
        vlTOPp->Top__DOT__uart_slave__DOT___GEN_37 
            = ((4U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID) 
                    & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__WREADY))
                    ? 5U : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                : ((5U == (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY) 
                        & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__BVALID))
                        ? 0U : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state))
                    : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state)));
    }
    if ((3U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))) {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_38 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_40 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_41 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_42 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_43 
            = (1U & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_44 
            = vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write;
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_37 
            = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID) 
                & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY))
                ? 4U : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state));
    } else {
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_38 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                            & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)))
                      : ((5U != (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state)) 
                         & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_40 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))
                          ? (IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB)
                          : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0))
                      : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0)));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_41 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB) 
                             >> 1U) : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1))
                      : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1)));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_42 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB) 
                             >> 2U) : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2))
                      : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2)));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_43 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                      ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                          & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))
                          ? ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB) 
                             >> 3U) : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3))
                      : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3)));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_44 
            = ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                    & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY)) 
                   | (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write))
                : ((5U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                    ? ((~ ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY) 
                           & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID))) 
                       & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write))
                    : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write)));
        vlTOPp->Top__DOT__dummy__DOT__slave__DOT___GEN_37 
            = ((4U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID) 
                    & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY))
                    ? 5U : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                : ((5U == (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                    ? (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY) 
                        & (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID))
                        ? 0U : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state))
                    : (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state)));
    }
}

VL_INLINE_OPT void VTop::_combo__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_combo__TOP__3\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_181 
        = ((0x15U == (IData)(vlTOPp->io_cpu_debug_read_address))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21
            : ((0x14U == (IData)(vlTOPp->io_cpu_debug_read_address))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20
                : ((0x13U == (IData)(vlTOPp->io_cpu_debug_read_address))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19
                    : ((0x12U == (IData)(vlTOPp->io_cpu_debug_read_address))
                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18
                        : ((0x11U == (IData)(vlTOPp->io_cpu_debug_read_address))
                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17
                            : ((0x10U == (IData)(vlTOPp->io_cpu_debug_read_address))
                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16
                                : ((0xfU == (IData)(vlTOPp->io_cpu_debug_read_address))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15
                                    : ((0xeU == (IData)(vlTOPp->io_cpu_debug_read_address))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14
                                        : ((0xdU == (IData)(vlTOPp->io_cpu_debug_read_address))
                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13
                                            : ((0xcU 
                                                == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1
                                                              : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0)))))))))))))))))))));
    vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA 
        = ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                         >> 0x1dU))) ? 0xdeadbeefU : 
           ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                          >> 0x1dU))) ? 0xdeadbeefU
             : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                              >> 0x1dU))) ? 0xdeadbeefU
                 : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                  >> 0x1dU))) ? 0xdeadbeefU
                     : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                      >> 0x1dU))) ? 0xdeadbeefU
                         : ((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                          >> 0x1dU)))
                             ? vlTOPp->io_uart_slave_read_data
                             : ((1U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                              >> 0x1dU)))
                                 ? 0xdeadbeefU : vlTOPp->io_mem_slave_read_data)))))));
    vlTOPp->Top__DOT__mem_slave__DOT___GEN_7 = ((~ 
                                                 ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY) 
                                                  & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__RVALID))) 
                                                & (IData)(vlTOPp->io_mem_slave_read_valid));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_7 = ((~ 
                                                  ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY) 
                                                   & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__RVALID))) 
                                                 & (IData)(vlTOPp->io_uart_slave_read_valid));
    vlTOPp->io_cpu_debug_read_data = ((0U == (IData)(vlTOPp->io_cpu_debug_read_address))
                                       ? 0U : ((((IData)(vlTOPp->io_cpu_debug_read_address) 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                                                & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                                                : (
                                                   (0x1fU 
                                                    == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31
                                                    : 
                                                   ((0x1eU 
                                                     == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30
                                                     : 
                                                    ((0x1dU 
                                                      == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29
                                                      : 
                                                     ((0x1cU 
                                                       == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28
                                                       : 
                                                      ((0x1bU 
                                                        == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27
                                                        : 
                                                       ((0x1aU 
                                                         == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                          ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                           ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24
                                                           : 
                                                          ((0x17U 
                                                            == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23
                                                            : 
                                                           ((0x16U 
                                                             == (IData)(vlTOPp->io_cpu_debug_read_address))
                                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22
                                                             : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_181))))))))))));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
            ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
            : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___T_17)
            ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
            : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 
        = ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                         >> 0xcU))) ? ((2U == (3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                        ? (0xffU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                            >> 0x10U))
                                        : ((1U == (3U 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                            ? (0xffU 
                                               & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                  >> 8U))
                                            : ((0U 
                                                == 
                                                (3U 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                ? (0xffU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                : (0xffU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                      >> 0x18U)))))
            : ((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                             >> 0xcU))) ? ((2U == (3U 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                            ? ((((0x800000U 
                                                  & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                  ? 0xffffffU
                                                  : 0U) 
                                                << 8U) 
                                               | (0xffU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                     >> 0x10U)))
                                            : ((1U 
                                                == 
                                                (3U 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                ? (
                                                   (((0x8000U 
                                                      & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                      ? 0xffffffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                         >> 8U)))
                                                : (
                                                   (0U 
                                                    == 
                                                    (3U 
                                                     & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                    ? 
                                                   ((((0x80U 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data))
                                                    : 
                                                   ((((0x80000000U 
                                                       & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data)
                                                       ? 0xffffffU
                                                       : 0U) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
                                                          >> 0x18U))))))
                : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_112 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
            ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid)
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data
                : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0)
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0);
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTop::_change_request_1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_change_request_1\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VTop::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((io_signal_interrupt & 0xfeU))) {
        Verilated::overWidthError("io_signal_interrupt");}
    if (VL_UNLIKELY((io_mem_slave_read_valid & 0xfeU))) {
        Verilated::overWidthError("io_mem_slave_read_valid");}
    if (VL_UNLIKELY((io_uart_slave_read_valid & 0xfeU))) {
        Verilated::overWidthError("io_uart_slave_read_valid");}
    if (VL_UNLIKELY((io_cpu_debug_read_address & 0xe0U))) {
        Verilated::overWidthError("io_cpu_debug_read_address");}
}
#endif  // VL_DEBUG
