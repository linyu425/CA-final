// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VTOP_H_
#define _VTOP_H_  // guard

#include "verilated.h"

//==========

class VTop__Syms;
class VTop_VerilatedVcd;


//----------

VL_MODULE(VTop) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_signal_interrupt,0,0);
    VL_OUT8(io_mem_slave_read,0,0);
    VL_OUT8(io_mem_slave_write,0,0);
    VL_IN8(io_mem_slave_read_valid,0,0);
    VL_OUT8(io_mem_slave_write_strobe_0,0,0);
    VL_OUT8(io_mem_slave_write_strobe_1,0,0);
    VL_OUT8(io_mem_slave_write_strobe_2,0,0);
    VL_OUT8(io_mem_slave_write_strobe_3,0,0);
    VL_OUT8(io_uart_slave_read,0,0);
    VL_OUT8(io_uart_slave_write,0,0);
    VL_IN8(io_uart_slave_read_valid,0,0);
    VL_OUT8(io_uart_slave_write_strobe_0,0,0);
    VL_OUT8(io_uart_slave_write_strobe_1,0,0);
    VL_OUT8(io_uart_slave_write_strobe_2,0,0);
    VL_OUT8(io_uart_slave_write_strobe_3,0,0);
    VL_IN8(io_cpu_debug_read_address,4,0);
    VL_IN(io_mem_slave_read_data,31,0);
    VL_OUT(io_mem_slave_write_data,31,0);
    VL_OUT(io_mem_slave_address,31,0);
    VL_IN(io_uart_slave_read_data,31,0);
    VL_OUT(io_uart_slave_write_data,31,0);
    VL_OUT(io_uart_slave_address,31,0);
    VL_OUT(io_cpu_debug_read_data,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID;
        CData/*3:0*/ Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID;
        CData/*3:0*/ Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID;
        CData/*3:0*/ Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_master_write_address_channel_AWREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_master_write_data_channel_WREADY;
        CData/*0:0*/ Top__DOT__bus_switch_io_master_write_response_channel_BVALID;
        CData/*0:0*/ Top__DOT__bus_switch_io_master_read_data_channel_RVALID;
        CData/*2:0*/ Top__DOT__mem_slave__DOT__state;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__read;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__write;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__write_strobe_0;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__write_strobe_1;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__write_strobe_2;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__write_strobe_3;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__ARREADY;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__RVALID;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__AWREADY;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__WREADY;
        CData/*0:0*/ Top__DOT__mem_slave__DOT__BVALID;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_4;
        CData/*2:0*/ Top__DOT__mem_slave__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_35;
        CData/*2:0*/ Top__DOT__mem_slave__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_38;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_40;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_41;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_42;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_43;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_44;
        CData/*0:0*/ Top__DOT__mem_slave__DOT___GEN_45;
        CData/*2:0*/ Top__DOT__uart_slave__DOT__state;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__read;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__write;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__write_strobe_0;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__write_strobe_1;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__write_strobe_2;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__write_strobe_3;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__ARREADY;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__RVALID;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__AWREADY;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__WREADY;
        CData/*0:0*/ Top__DOT__uart_slave__DOT__BVALID;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_4;
        CData/*2:0*/ Top__DOT__uart_slave__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_35;
        CData/*2:0*/ Top__DOT__uart_slave__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_38;
    };
    struct {
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_40;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_41;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_42;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_43;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_44;
        CData/*0:0*/ Top__DOT__uart_slave__DOT___GEN_45;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid;
        CData/*4:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging;
        CData/*3:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__bus_granted;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_access_state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_restart;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__pending;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_3;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_9;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_20;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_21;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_47;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_48;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_49;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_51;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_59;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_60;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT___T_17;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_0;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_2;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___GEN_11;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_;
        CData/*4:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_;
        CData/*3:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct;
    };
    struct {
        CData/*3:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_;
        CData/*4:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_2;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_10;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_56;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_;
        CData/*4:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_1;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__forwarding__DOT___T_5;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal;
        CData/*1:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_1;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_7;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT___GEN_18;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_12;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_13;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_14;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_33;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_35;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_36;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT___GEN_38;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_3;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_4;
        CData/*3:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_ecause_T_4;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_114;
        CData/*2:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_129;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_132;
        CData/*0:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175;
        CData/*3:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187;
        CData/*2:0*/ Top__DOT__dummy__DOT__slave__DOT__state;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__read;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__write;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__write_strobe_0;
    };
    struct {
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__write_strobe_1;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__write_strobe_2;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__write_strobe_3;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__ARREADY;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__RVALID;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__AWREADY;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__WREADY;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT__BVALID;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_4;
        CData/*2:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_6;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_7;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_35;
        CData/*2:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_38;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_40;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_41;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_42;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_43;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_44;
        CData/*0:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_45;
        CData/*3:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB;
        CData/*2:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY;
        CData/*2:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_12;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_13;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_14;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_33;
        CData/*2:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_35;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_36;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_37;
        CData/*0:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT___GEN_38;
        SData/*11:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_;
        SData/*11:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address;
        SData/*11:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address;
        IData/*31:0*/ Top__DOT__bus_switch_io_master_read_data_channel_RDATA;
        IData/*31:0*/ Top__DOT__mem_slave__DOT__addr;
        IData/*31:0*/ Top__DOT__mem_slave__DOT__write_data;
        IData/*31:0*/ Top__DOT__mem_slave__DOT___GEN_36;
        IData/*31:0*/ Top__DOT__uart_slave__DOT__addr;
        IData/*31:0*/ Top__DOT__uart_slave__DOT__write_data;
        IData/*31:0*/ Top__DOT__uart_slave__DOT___GEN_36;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa;
    };
    struct {
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__virtual_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__physical_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_5;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_10;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_22;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_50;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT___GEN_52;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_117;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_141;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_154;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_181;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT___pc_T_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_9;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ex_immediate_T_55;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg1_data_T_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___reg2_data_T_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2;
    };
    struct {
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___io_wb_memory_read_data_T_67;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_19;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_20;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_21;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_22;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___GEN_23;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___io_epc_T;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_112;
        IData/*31:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137;
        IData/*31:0*/ Top__DOT__dummy__DOT__slave__DOT__addr;
        IData/*31:0*/ Top__DOT__dummy__DOT__slave__DOT__write_data;
        IData/*31:0*/ Top__DOT__dummy__DOT__slave__DOT___GEN_36;
        IData/*31:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR;
        IData/*31:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR;
        IData/*31:0*/ Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr;
        QData/*63:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles;
        QData/*63:0*/ Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT___cycles_T_1;
        QData/*34:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_135;
        QData/*34:0*/ Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184;
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clock;
    CData/*0:0*/ __Vm_traceActivity[3];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VTop__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTop);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VTop(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VTop();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VTop__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VTop__Syms* symsp, bool first);
  private:
    static QData _change_request(VTop__Syms* __restrict vlSymsp);
    static QData _change_request_1(VTop__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VTop__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VTop__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VTop__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VTop__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
