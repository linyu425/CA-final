// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"
#include "VTop__Syms.h"

//==========

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VTop::~VTop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VTop::_settle__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_settle__TOP__2\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_mem_slave_read = vlTOPp->Top__DOT__mem_slave__DOT__read;
    vlTOPp->io_mem_slave_write = vlTOPp->Top__DOT__mem_slave__DOT__write;
    vlTOPp->io_mem_slave_write_data = vlTOPp->Top__DOT__mem_slave__DOT__write_data;
    vlTOPp->io_mem_slave_write_strobe_0 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0;
    vlTOPp->io_mem_slave_write_strobe_1 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1;
    vlTOPp->io_mem_slave_write_strobe_2 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2;
    vlTOPp->io_mem_slave_write_strobe_3 = vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3;
    vlTOPp->io_mem_slave_address = vlTOPp->Top__DOT__mem_slave__DOT__addr;
    vlTOPp->io_uart_slave_read = vlTOPp->Top__DOT__uart_slave__DOT__read;
    vlTOPp->io_uart_slave_write = vlTOPp->Top__DOT__uart_slave__DOT__write;
    vlTOPp->io_uart_slave_write_data = vlTOPp->Top__DOT__uart_slave__DOT__write_data;
    vlTOPp->io_uart_slave_write_strobe_0 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0;
    vlTOPp->io_uart_slave_write_strobe_1 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1;
    vlTOPp->io_uart_slave_write_strobe_2 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2;
    vlTOPp->io_uart_slave_write_strobe_3 = vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3;
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
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38 
            = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid;
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35 
            = (((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY) 
                & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID))
                ? 4U : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state));
    } else {
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33 
            = (1U & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
        vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36 
            = (1U & ((4U == (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))
                      ? (~ ((IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY) 
                            & (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID)))
                      : (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID)));
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
    vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB 
        = ((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3) 
             << 3U) | ((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2) 
                       << 2U)) | (((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1) 
                                   << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
            ? ((IData)(4U) + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_)
            : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_
                : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_)));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_) 
           & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_) 
           & (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 
        = (1ULL + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles);
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data
            : 0U);
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid 
        = ((0x23U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)) 
           & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                 >> 2U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid 
        = ((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)) 
           & (~ (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 
                 >> 1U)));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_2 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
            ? 1U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
            ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                     : 0U));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR 
        = ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
            ? 0U : ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                     ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                              ? 0U : ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                                       : ((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))
                                           ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr
                                           : 0U)))));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
            ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_)
            : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable)
                ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address)
                : 0U));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_18 
        = ((5U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))
            ? 4U : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_0 
        = ((0x1000U == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_)
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1);
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
    if ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))) {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135 
            = (0x7ffffffffULL & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
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
                                                                      >> 0xaU))))))));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132 
            = (1U & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
                      ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals)
                      : ((1U & (((~ vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1) 
                                 | (2U == (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                 >> 1U)))) 
                                | (0U != (3U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 
                                                >> 8U)))))
                          ? (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token))
                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals))));
    } else {
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135 
            = (0x7ffffffffULL & ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
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
                                             : 0ULL)));
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132 
            = (1U & ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
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
                          : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals))));
    }
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_7 
        = ((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state))
            ? 3U : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag 
        = (((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state)) 
            | (0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state))) 
           & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall 
        = (((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
            | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag)) 
           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard));
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1 
        = ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1);
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
        = (((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
            | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
            ? (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184)
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id))
            ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_50 = 
        ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request)
          ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_
              : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)
          : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
              ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done)
                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc
                  : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)
              : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address));
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
    if ((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                      >> 0x1dU)))) {
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB;
        vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA = 0xdeadbeefU;
    } else {
        vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB 
            = vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB;
        vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA 
            = ((6U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                             >> 0x1dU))) ? 0xdeadbeefU
                : ((5U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                 >> 0x1dU))) ? 0xdeadbeefU
                    : ((4U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                     >> 0x1dU))) ? 0xdeadbeefU
                        : ((3U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                         >> 0x1dU)))
                            ? 0xdeadbeefU : ((2U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                              ? vlTOPp->io_uart_slave_read_data
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                      >> 0x1dU)))
                                                  ? 0xdeadbeefU
                                                  : vlTOPp->io_mem_slave_read_data))))));
    }
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
    vlTOPp->Top__DOT__mem_slave__DOT___GEN_7 = ((~ 
                                                 ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY) 
                                                  & (IData)(vlTOPp->Top__DOT__mem_slave__DOT__RVALID))) 
                                                & (IData)(vlTOPp->io_mem_slave_read_valid));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_6 = (((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY) 
                                                  & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__RVALID))
                                                  ? 0U
                                                  : (IData)(vlTOPp->Top__DOT__uart_slave__DOT__state));
    vlTOPp->Top__DOT__uart_slave__DOT___GEN_7 = ((~ 
                                                  ((IData)(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY) 
                                                   & (IData)(vlTOPp->Top__DOT__uart_slave__DOT__RVALID))) 
                                                 & (IData)(vlTOPp->io_uart_slave_read_valid));
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
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data 
        = ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
            ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
            : 0U);
    vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data 
        = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___T_17)
            ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
            : 0U);
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
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_52 
            = vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address;
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
        vlTOPp->Top__DOT__cpu__DOT__cpu__DOT___GEN_52 
            = ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending)
                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address
                : (((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)) 
                    & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid))
                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa
                    : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address));
    }
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

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_initial\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_eval_settle\n"); );
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_signal_interrupt = VL_RAND_RESET_I(1);
    io_mem_slave_read = VL_RAND_RESET_I(1);
    io_mem_slave_write = VL_RAND_RESET_I(1);
    io_mem_slave_read_data = VL_RAND_RESET_I(32);
    io_mem_slave_read_valid = VL_RAND_RESET_I(1);
    io_mem_slave_write_data = VL_RAND_RESET_I(32);
    io_mem_slave_write_strobe_0 = VL_RAND_RESET_I(1);
    io_mem_slave_write_strobe_1 = VL_RAND_RESET_I(1);
    io_mem_slave_write_strobe_2 = VL_RAND_RESET_I(1);
    io_mem_slave_write_strobe_3 = VL_RAND_RESET_I(1);
    io_mem_slave_address = VL_RAND_RESET_I(32);
    io_uart_slave_read = VL_RAND_RESET_I(1);
    io_uart_slave_write = VL_RAND_RESET_I(1);
    io_uart_slave_read_data = VL_RAND_RESET_I(32);
    io_uart_slave_read_valid = VL_RAND_RESET_I(1);
    io_uart_slave_write_data = VL_RAND_RESET_I(32);
    io_uart_slave_write_strobe_0 = VL_RAND_RESET_I(1);
    io_uart_slave_write_strobe_1 = VL_RAND_RESET_I(1);
    io_uart_slave_write_strobe_2 = VL_RAND_RESET_I(1);
    io_uart_slave_write_strobe_3 = VL_RAND_RESET_I(1);
    io_uart_slave_address = VL_RAND_RESET_I(32);
    io_cpu_debug_read_address = VL_RAND_RESET_I(5);
    io_cpu_debug_read_data = VL_RAND_RESET_I(32);
    Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB = VL_RAND_RESET_I(4);
    Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB = VL_RAND_RESET_I(4);
    Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB = VL_RAND_RESET_I(4);
    Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_master_write_address_channel_AWREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_master_write_data_channel_WREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_master_write_response_channel_BVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_master_read_data_channel_RVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch_io_master_read_data_channel_RDATA = VL_RAND_RESET_I(32);
    Top__DOT__mem_slave__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__mem_slave__DOT__addr = VL_RAND_RESET_I(32);
    Top__DOT__mem_slave__DOT__read = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__write = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__write_data = VL_RAND_RESET_I(32);
    Top__DOT__mem_slave__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__ARREADY = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__RVALID = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__AWREADY = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__WREADY = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT__BVALID = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_6 = VL_RAND_RESET_I(3);
    Top__DOT__mem_slave__DOT___GEN_7 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_35 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_36 = VL_RAND_RESET_I(32);
    Top__DOT__mem_slave__DOT___GEN_37 = VL_RAND_RESET_I(3);
    Top__DOT__mem_slave__DOT___GEN_38 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_40 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_41 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_42 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_43 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_44 = VL_RAND_RESET_I(1);
    Top__DOT__mem_slave__DOT___GEN_45 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__uart_slave__DOT__addr = VL_RAND_RESET_I(32);
    Top__DOT__uart_slave__DOT__read = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__write = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__write_data = VL_RAND_RESET_I(32);
    Top__DOT__uart_slave__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__ARREADY = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__RVALID = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__AWREADY = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__WREADY = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT__BVALID = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_6 = VL_RAND_RESET_I(3);
    Top__DOT__uart_slave__DOT___GEN_7 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_35 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_36 = VL_RAND_RESET_I(32);
    Top__DOT__uart_slave__DOT___GEN_37 = VL_RAND_RESET_I(3);
    Top__DOT__uart_slave__DOT___GEN_38 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_40 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_41 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_42 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_43 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_44 = VL_RAND_RESET_I(1);
    Top__DOT__uart_slave__DOT___GEN_45 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address = VL_RAND_RESET_I(5);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__bus_granted = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mem_access_state = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__virtual_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__physical_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu_restart = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__pending = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_3 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_5 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_9 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_10 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_20 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_21 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_22 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_47 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_48 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_49 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_50 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_51 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_52 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_59 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___GEN_60 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT___T_17 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_117 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_141 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_154 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_181 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_0 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_2 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_11 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_55 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_ = VL_RAND_RESET_I(12);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7 = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_2 = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_10 = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_56 = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_ = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_ = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_ = VL_RAND_RESET_I(5);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_ = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address = VL_RAND_RESET_I(12);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state = VL_RAND_RESET_I(2);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_1 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_7 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_18 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles = VL_RAND_RESET_Q(64);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1 = VL_RAND_RESET_Q(64);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address = VL_RAND_RESET_I(12);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_21 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_22 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_23 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_12 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_14 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_33 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_35 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_36 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_37 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_38 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_4 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4 = VL_RAND_RESET_I(4);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_112 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_114 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_129 = VL_RAND_RESET_I(3);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135 = VL_RAND_RESET_Q(35);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137 = VL_RAND_RESET_I(32);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175 = VL_RAND_RESET_I(1);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184 = VL_RAND_RESET_Q(35);
    Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187 = VL_RAND_RESET_I(4);
    Top__DOT__dummy__DOT__slave__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__dummy__DOT__slave__DOT__addr = VL_RAND_RESET_I(32);
    Top__DOT__dummy__DOT__slave__DOT__read = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__write = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__write_data = VL_RAND_RESET_I(32);
    Top__DOT__dummy__DOT__slave__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__ARREADY = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__RVALID = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__AWREADY = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__WREADY = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT__BVALID = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_4 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_6 = VL_RAND_RESET_I(3);
    Top__DOT__dummy__DOT__slave__DOT___GEN_7 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_35 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_36 = VL_RAND_RESET_I(32);
    Top__DOT__dummy__DOT__slave__DOT___GEN_37 = VL_RAND_RESET_I(3);
    Top__DOT__dummy__DOT__slave__DOT___GEN_38 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_40 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_41 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_42 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_43 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_44 = VL_RAND_RESET_I(1);
    Top__DOT__dummy__DOT__slave__DOT___GEN_45 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR = VL_RAND_RESET_I(32);
    Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB = VL_RAND_RESET_I(4);
    Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR = VL_RAND_RESET_I(32);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state = VL_RAND_RESET_I(3);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr = VL_RAND_RESET_I(32);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_12 = VL_RAND_RESET_I(3);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_14 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35 = VL_RAND_RESET_I(3);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37 = VL_RAND_RESET_I(1);
    Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
