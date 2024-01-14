// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VTop::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VTop::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VTop::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VTop::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+334,"clock", false,-1);
        tracep->declBit(c+335,"reset", false,-1);
        tracep->declBit(c+336,"io_signal_interrupt", false,-1);
        tracep->declBit(c+337,"io_mem_slave_read", false,-1);
        tracep->declBit(c+338,"io_mem_slave_write", false,-1);
        tracep->declBus(c+339,"io_mem_slave_read_data", false,-1, 31,0);
        tracep->declBit(c+340,"io_mem_slave_read_valid", false,-1);
        tracep->declBus(c+341,"io_mem_slave_write_data", false,-1, 31,0);
        tracep->declBit(c+342,"io_mem_slave_write_strobe_0", false,-1);
        tracep->declBit(c+343,"io_mem_slave_write_strobe_1", false,-1);
        tracep->declBit(c+344,"io_mem_slave_write_strobe_2", false,-1);
        tracep->declBit(c+345,"io_mem_slave_write_strobe_3", false,-1);
        tracep->declBus(c+346,"io_mem_slave_address", false,-1, 31,0);
        tracep->declBit(c+347,"io_uart_slave_read", false,-1);
        tracep->declBit(c+348,"io_uart_slave_write", false,-1);
        tracep->declBus(c+349,"io_uart_slave_read_data", false,-1, 31,0);
        tracep->declBit(c+350,"io_uart_slave_read_valid", false,-1);
        tracep->declBus(c+351,"io_uart_slave_write_data", false,-1, 31,0);
        tracep->declBit(c+352,"io_uart_slave_write_strobe_0", false,-1);
        tracep->declBit(c+353,"io_uart_slave_write_strobe_1", false,-1);
        tracep->declBit(c+354,"io_uart_slave_write_strobe_2", false,-1);
        tracep->declBit(c+355,"io_uart_slave_write_strobe_3", false,-1);
        tracep->declBus(c+356,"io_uart_slave_address", false,-1, 31,0);
        tracep->declBus(c+357,"io_cpu_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+358,"io_cpu_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top clock", false,-1);
        tracep->declBit(c+335,"Top reset", false,-1);
        tracep->declBit(c+336,"Top io_signal_interrupt", false,-1);
        tracep->declBit(c+337,"Top io_mem_slave_read", false,-1);
        tracep->declBit(c+338,"Top io_mem_slave_write", false,-1);
        tracep->declBus(c+339,"Top io_mem_slave_read_data", false,-1, 31,0);
        tracep->declBit(c+340,"Top io_mem_slave_read_valid", false,-1);
        tracep->declBus(c+341,"Top io_mem_slave_write_data", false,-1, 31,0);
        tracep->declBit(c+342,"Top io_mem_slave_write_strobe_0", false,-1);
        tracep->declBit(c+343,"Top io_mem_slave_write_strobe_1", false,-1);
        tracep->declBit(c+344,"Top io_mem_slave_write_strobe_2", false,-1);
        tracep->declBit(c+345,"Top io_mem_slave_write_strobe_3", false,-1);
        tracep->declBus(c+346,"Top io_mem_slave_address", false,-1, 31,0);
        tracep->declBit(c+347,"Top io_uart_slave_read", false,-1);
        tracep->declBit(c+348,"Top io_uart_slave_write", false,-1);
        tracep->declBus(c+349,"Top io_uart_slave_read_data", false,-1, 31,0);
        tracep->declBit(c+350,"Top io_uart_slave_read_valid", false,-1);
        tracep->declBus(c+351,"Top io_uart_slave_write_data", false,-1, 31,0);
        tracep->declBit(c+352,"Top io_uart_slave_write_strobe_0", false,-1);
        tracep->declBit(c+353,"Top io_uart_slave_write_strobe_1", false,-1);
        tracep->declBit(c+354,"Top io_uart_slave_write_strobe_2", false,-1);
        tracep->declBit(c+355,"Top io_uart_slave_write_strobe_3", false,-1);
        tracep->declBus(c+356,"Top io_uart_slave_address", false,-1, 31,0);
        tracep->declBus(c+357,"Top io_cpu_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+358,"Top io_cpu_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top mem_slave_clock", false,-1);
        tracep->declBit(c+335,"Top mem_slave_reset", false,-1);
        tracep->declBit(c+1,"Top mem_slave_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+2,"Top mem_slave_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+3,"Top mem_slave_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+4,"Top mem_slave_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+5,"Top mem_slave_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+6,"Top mem_slave_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+7,"Top mem_slave_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+8,"Top mem_slave_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+9,"Top mem_slave_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+10,"Top mem_slave_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+11,"Top mem_slave_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+12,"Top mem_slave_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+13,"Top mem_slave_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+14,"Top mem_slave_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+339,"Top mem_slave_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+15,"Top mem_slave_io_bundle_read", false,-1);
        tracep->declBit(c+16,"Top mem_slave_io_bundle_write", false,-1);
        tracep->declBus(c+339,"Top mem_slave_io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+340,"Top mem_slave_io_bundle_read_valid", false,-1);
        tracep->declBus(c+17,"Top mem_slave_io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+18,"Top mem_slave_io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+19,"Top mem_slave_io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+20,"Top mem_slave_io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+21,"Top mem_slave_io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+22,"Top mem_slave_io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+334,"Top uart_slave_clock", false,-1);
        tracep->declBit(c+335,"Top uart_slave_reset", false,-1);
        tracep->declBit(c+23,"Top uart_slave_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+24,"Top uart_slave_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+25,"Top uart_slave_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+26,"Top uart_slave_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+27,"Top uart_slave_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+28,"Top uart_slave_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+29,"Top uart_slave_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+30,"Top uart_slave_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+31,"Top uart_slave_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+32,"Top uart_slave_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+33,"Top uart_slave_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+34,"Top uart_slave_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+35,"Top uart_slave_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+36,"Top uart_slave_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+349,"Top uart_slave_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+37,"Top uart_slave_io_bundle_read", false,-1);
        tracep->declBit(c+38,"Top uart_slave_io_bundle_write", false,-1);
        tracep->declBus(c+349,"Top uart_slave_io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+350,"Top uart_slave_io_bundle_read_valid", false,-1);
        tracep->declBus(c+39,"Top uart_slave_io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+40,"Top uart_slave_io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+41,"Top uart_slave_io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+42,"Top uart_slave_io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+43,"Top uart_slave_io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+44,"Top uart_slave_io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu_clock", false,-1);
        tracep->declBit(c+335,"Top cpu_reset", false,-1);
        tracep->declBit(c+45,"Top cpu_io_axi4_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu_io_axi4_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu_io_axi4_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu_io_axi4_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu_io_axi4_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu_io_axi4_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu_io_axi4_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu_io_axi4_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu_io_axi4_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu_io_axi4_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu_io_axi4_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu_io_axi4_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu_io_axi4_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu_io_axi4_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu_io_axi4_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+59,"Top cpu_io_bus_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu_io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu_io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu_io_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top dummy_clock", false,-1);
        tracep->declBit(c+335,"Top dummy_reset", false,-1);
        tracep->declBit(c+60,"Top dummy_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top dummy_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+62,"Top dummy_io_channels_write_address_channel_AWADDR", false,-1, 3,0);
        tracep->declBit(c+63,"Top dummy_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top dummy_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top dummy_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top dummy_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top dummy_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top dummy_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top dummy_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top dummy_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+71,"Top dummy_io_channels_read_address_channel_ARADDR", false,-1, 3,0);
        tracep->declBit(c+72,"Top dummy_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top dummy_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top dummy_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+334,"Top bus_switch_clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch_reset", false,-1);
        tracep->declBus(c+59,"Top bus_switch_io_address", false,-1, 31,0);
        tracep->declBit(c+1,"Top bus_switch_io_slaves_0_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+2,"Top bus_switch_io_slaves_0_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+3,"Top bus_switch_io_slaves_0_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+4,"Top bus_switch_io_slaves_0_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+5,"Top bus_switch_io_slaves_0_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+6,"Top bus_switch_io_slaves_0_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+7,"Top bus_switch_io_slaves_0_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+8,"Top bus_switch_io_slaves_0_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+9,"Top bus_switch_io_slaves_0_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+10,"Top bus_switch_io_slaves_0_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+11,"Top bus_switch_io_slaves_0_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+12,"Top bus_switch_io_slaves_0_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+13,"Top bus_switch_io_slaves_0_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+14,"Top bus_switch_io_slaves_0_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+339,"Top bus_switch_io_slaves_0_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_1_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_1_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_1_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_1_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_1_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_1_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+23,"Top bus_switch_io_slaves_2_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+24,"Top bus_switch_io_slaves_2_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+25,"Top bus_switch_io_slaves_2_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+26,"Top bus_switch_io_slaves_2_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+27,"Top bus_switch_io_slaves_2_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+28,"Top bus_switch_io_slaves_2_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+29,"Top bus_switch_io_slaves_2_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+30,"Top bus_switch_io_slaves_2_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+31,"Top bus_switch_io_slaves_2_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+32,"Top bus_switch_io_slaves_2_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+33,"Top bus_switch_io_slaves_2_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+34,"Top bus_switch_io_slaves_2_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+35,"Top bus_switch_io_slaves_2_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+36,"Top bus_switch_io_slaves_2_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+349,"Top bus_switch_io_slaves_2_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_3_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_3_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_3_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_3_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_3_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_3_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_4_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_4_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_4_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_4_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_4_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_4_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_5_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_5_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_5_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_5_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_5_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_5_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_6_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_6_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_6_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_6_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_6_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_6_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+60,"Top bus_switch_io_slaves_7_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch_io_slaves_7_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+74,"Top bus_switch_io_slaves_7_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+63,"Top bus_switch_io_slaves_7_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch_io_slaves_7_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top bus_switch_io_slaves_7_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top bus_switch_io_slaves_7_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch_io_slaves_7_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top bus_switch_io_slaves_7_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top bus_switch_io_slaves_7_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch_io_slaves_7_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+75,"Top bus_switch_io_slaves_7_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch_io_slaves_7_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top bus_switch_io_slaves_7_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch_io_slaves_7_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+45,"Top bus_switch_io_master_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top bus_switch_io_master_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top bus_switch_io_master_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top bus_switch_io_master_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top bus_switch_io_master_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top bus_switch_io_master_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top bus_switch_io_master_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top bus_switch_io_master_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top bus_switch_io_master_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top bus_switch_io_master_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top bus_switch_io_master_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top bus_switch_io_master_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top bus_switch_io_master_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top bus_switch_io_master_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top bus_switch_io_master_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+334,"Top mem_slave clock", false,-1);
        tracep->declBit(c+335,"Top mem_slave reset", false,-1);
        tracep->declBit(c+1,"Top mem_slave io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+2,"Top mem_slave io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+3,"Top mem_slave io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+4,"Top mem_slave io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+5,"Top mem_slave io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+6,"Top mem_slave io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+7,"Top mem_slave io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+8,"Top mem_slave io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+9,"Top mem_slave io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+10,"Top mem_slave io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+11,"Top mem_slave io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+12,"Top mem_slave io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+13,"Top mem_slave io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+14,"Top mem_slave io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+339,"Top mem_slave io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+15,"Top mem_slave io_bundle_read", false,-1);
        tracep->declBit(c+16,"Top mem_slave io_bundle_write", false,-1);
        tracep->declBus(c+339,"Top mem_slave io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+340,"Top mem_slave io_bundle_read_valid", false,-1);
        tracep->declBus(c+17,"Top mem_slave io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+18,"Top mem_slave io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+19,"Top mem_slave io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+20,"Top mem_slave io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+21,"Top mem_slave io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+22,"Top mem_slave io_bundle_address", false,-1, 31,0);
        tracep->declBus(c+76,"Top mem_slave state", false,-1, 2,0);
        tracep->declBus(c+22,"Top mem_slave addr", false,-1, 31,0);
        tracep->declBit(c+15,"Top mem_slave read", false,-1);
        tracep->declBit(c+16,"Top mem_slave write", false,-1);
        tracep->declBus(c+17,"Top mem_slave write_data", false,-1, 31,0);
        tracep->declBit(c+18,"Top mem_slave write_strobe_0", false,-1);
        tracep->declBit(c+19,"Top mem_slave write_strobe_1", false,-1);
        tracep->declBit(c+20,"Top mem_slave write_strobe_2", false,-1);
        tracep->declBit(c+21,"Top mem_slave write_strobe_3", false,-1);
        tracep->declBit(c+11,"Top mem_slave ARREADY", false,-1);
        tracep->declBit(c+13,"Top mem_slave RVALID", false,-1);
        tracep->declBit(c+2,"Top mem_slave AWREADY", false,-1);
        tracep->declBit(c+5,"Top mem_slave WREADY", false,-1);
        tracep->declBit(c+8,"Top mem_slave BVALID", false,-1);
        tracep->declBit(c+334,"Top uart_slave clock", false,-1);
        tracep->declBit(c+335,"Top uart_slave reset", false,-1);
        tracep->declBit(c+23,"Top uart_slave io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+24,"Top uart_slave io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+25,"Top uart_slave io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+26,"Top uart_slave io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+27,"Top uart_slave io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+28,"Top uart_slave io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+29,"Top uart_slave io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+30,"Top uart_slave io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+31,"Top uart_slave io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+32,"Top uart_slave io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+33,"Top uart_slave io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+34,"Top uart_slave io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+35,"Top uart_slave io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+36,"Top uart_slave io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+349,"Top uart_slave io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+37,"Top uart_slave io_bundle_read", false,-1);
        tracep->declBit(c+38,"Top uart_slave io_bundle_write", false,-1);
        tracep->declBus(c+349,"Top uart_slave io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+350,"Top uart_slave io_bundle_read_valid", false,-1);
        tracep->declBus(c+39,"Top uart_slave io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+40,"Top uart_slave io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+41,"Top uart_slave io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+42,"Top uart_slave io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+43,"Top uart_slave io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+44,"Top uart_slave io_bundle_address", false,-1, 31,0);
        tracep->declBus(c+77,"Top uart_slave state", false,-1, 2,0);
        tracep->declBus(c+44,"Top uart_slave addr", false,-1, 31,0);
        tracep->declBit(c+37,"Top uart_slave read", false,-1);
        tracep->declBit(c+38,"Top uart_slave write", false,-1);
        tracep->declBus(c+39,"Top uart_slave write_data", false,-1, 31,0);
        tracep->declBit(c+40,"Top uart_slave write_strobe_0", false,-1);
        tracep->declBit(c+41,"Top uart_slave write_strobe_1", false,-1);
        tracep->declBit(c+42,"Top uart_slave write_strobe_2", false,-1);
        tracep->declBit(c+43,"Top uart_slave write_strobe_3", false,-1);
        tracep->declBit(c+33,"Top uart_slave ARREADY", false,-1);
        tracep->declBit(c+35,"Top uart_slave RVALID", false,-1);
        tracep->declBit(c+24,"Top uart_slave AWREADY", false,-1);
        tracep->declBit(c+27,"Top uart_slave WREADY", false,-1);
        tracep->declBit(c+30,"Top uart_slave BVALID", false,-1);
        tracep->declBit(c+334,"Top cpu clock", false,-1);
        tracep->declBit(c+335,"Top cpu reset", false,-1);
        tracep->declBit(c+45,"Top cpu io_axi4_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu io_axi4_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu io_axi4_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu io_axi4_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu io_axi4_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu io_axi4_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu io_axi4_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu io_axi4_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu io_axi4_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu io_axi4_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu io_axi4_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu io_axi4_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu io_axi4_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu io_axi4_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu io_axi4_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+59,"Top cpu io_bus_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu io_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu_reset", false,-1);
        tracep->declBit(c+45,"Top cpu cpu_io_axi4_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu cpu_io_axi4_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu cpu_io_axi4_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu cpu_io_axi4_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu cpu_io_axi4_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu cpu_io_axi4_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu cpu_io_axi4_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu cpu_io_axi4_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu cpu_io_axi4_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu cpu_io_axi4_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu cpu_io_axi4_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu cpu_io_axi4_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu cpu_io_axi4_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu cpu_io_axi4_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu cpu_io_axi4_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+59,"Top cpu cpu_io_bus_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu cpu_io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu cpu_io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu cpu_io_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu reset", false,-1);
        tracep->declBit(c+45,"Top cpu cpu io_axi4_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu cpu io_axi4_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu cpu io_axi4_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu cpu io_axi4_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu cpu io_axi4_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu cpu io_axi4_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu cpu io_axi4_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu cpu io_axi4_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu cpu io_axi4_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu cpu io_axi4_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu cpu io_axi4_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu cpu io_axi4_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu cpu io_axi4_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu cpu io_axi4_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu cpu io_axi4_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+59,"Top cpu cpu io_bus_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu cpu io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu cpu io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu cpu io_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+78,"Top cpu cpu ctrl_io_jump_flag", false,-1);
        tracep->declBit(c+79,"Top cpu cpu ctrl_io_jump_instruction_id", false,-1);
        tracep->declBit(c+80,"Top cpu cpu ctrl_io_stall_flag_if", false,-1);
        tracep->declBit(c+81,"Top cpu cpu ctrl_io_stall_flag_mem", false,-1);
        tracep->declBit(c+82,"Top cpu cpu ctrl_io_stall_flag_clint", false,-1);
        tracep->declBus(c+83,"Top cpu cpu ctrl_io_rs1_id", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu ctrl_io_rs2_id", false,-1, 4,0);
        tracep->declBit(c+85,"Top cpu cpu ctrl_io_memory_read_enable_ex", false,-1);
        tracep->declBus(c+86,"Top cpu cpu ctrl_io_rd_ex", false,-1, 4,0);
        tracep->declBit(c+87,"Top cpu cpu ctrl_io_memory_read_enable_mem", false,-1);
        tracep->declBus(c+88,"Top cpu cpu ctrl_io_rd_mem", false,-1, 4,0);
        tracep->declBit(c+89,"Top cpu cpu ctrl_io_csr_start_paging", false,-1);
        tracep->declBit(c+90,"Top cpu cpu ctrl_io_if_flush", false,-1);
        tracep->declBit(c+91,"Top cpu cpu ctrl_io_id_flush", false,-1);
        tracep->declBit(c+92,"Top cpu cpu ctrl_io_pc_stall", false,-1);
        tracep->declBit(c+93,"Top cpu cpu ctrl_io_if_stall", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ctrl_io_id_stall", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ctrl_io_ex_stall", false,-1);
        tracep->declBit(c+334,"Top cpu cpu regs_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu regs_reset", false,-1);
        tracep->declBit(c+95,"Top cpu cpu regs_io_write_enable", false,-1);
        tracep->declBus(c+96,"Top cpu cpu regs_io_write_address", false,-1, 4,0);
        tracep->declBus(c+97,"Top cpu cpu regs_io_write_data", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu regs_io_read_address1", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu regs_io_read_address2", false,-1, 4,0);
        tracep->declBus(c+98,"Top cpu cpu regs_io_read_data1", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu regs_io_read_data2", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu cpu regs_io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu cpu regs_io_debug_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu inst_fetch_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu inst_fetch_reset", false,-1);
        tracep->declBit(c+92,"Top cpu cpu inst_fetch_io_stall_flag_ctrl", false,-1);
        tracep->declBit(c+78,"Top cpu cpu inst_fetch_io_jump_flag_id", false,-1);
        tracep->declBus(c+100,"Top cpu cpu inst_fetch_io_jump_address_id", false,-1, 31,0);
        tracep->declBus(c+101,"Top cpu cpu inst_fetch_io_physical_address", false,-1, 31,0);
        tracep->declBit(c+80,"Top cpu cpu inst_fetch_io_ctrl_stall_flag", false,-1);
        tracep->declBus(c+102,"Top cpu cpu inst_fetch_io_id_instruction_address", false,-1, 31,0);
        tracep->declBus(c+361,"Top cpu cpu inst_fetch_io_id_instruction", false,-1, 31,0);
        tracep->declBit(c+103,"Top cpu cpu inst_fetch_io_pc_valid", false,-1);
        tracep->declBit(c+104,"Top cpu cpu inst_fetch_io_bus_read", false,-1);
        tracep->declBus(c+101,"Top cpu cpu inst_fetch_io_bus_address", false,-1, 31,0);
        tracep->declBus(c+362,"Top cpu cpu inst_fetch_io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+105,"Top cpu cpu inst_fetch_io_bus_read_valid", false,-1);
        tracep->declBit(c+106,"Top cpu cpu inst_fetch_io_bus_granted", false,-1);
        tracep->declBit(c+334,"Top cpu cpu if2id_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id_reset", false,-1);
        tracep->declBit(c+93,"Top cpu cpu if2id_io_stall_flag", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id_io_flush_enable", false,-1);
        tracep->declBus(c+361,"Top cpu cpu if2id_io_instruction", false,-1, 31,0);
        tracep->declBus(c+102,"Top cpu cpu if2id_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu cpu if2id_io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu if2id_io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu if2id_io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+109,"Top cpu cpu if2id_io_output_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu id_io_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu id_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+98,"Top cpu cpu id_io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu id_io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+110,"Top cpu cpu id_io_forward_from_mem", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu id_io_forward_from_wb", false,-1, 31,0);
        tracep->declBus(c+111,"Top cpu cpu id_io_reg1_forward", false,-1, 1,0);
        tracep->declBus(c+112,"Top cpu cpu id_io_reg2_forward", false,-1, 1,0);
        tracep->declBit(c+113,"Top cpu cpu id_io_interrupt_assert", false,-1);
        tracep->declBus(c+114,"Top cpu cpu id_io_interrupt_handler_address", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu id_io_regs_reg1_read_address", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu id_io_regs_reg2_read_address", false,-1, 4,0);
        tracep->declBus(c+115,"Top cpu cpu id_io_ex_immediate", false,-1, 31,0);
        tracep->declBit(c+116,"Top cpu cpu id_io_ex_aluop1_source", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id_io_ex_aluop2_source", false,-1);
        tracep->declBit(c+118,"Top cpu cpu id_io_ex_memory_read_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id_io_ex_memory_write_enable", false,-1);
        tracep->declBus(c+120,"Top cpu cpu id_io_ex_reg_write_source", false,-1, 1,0);
        tracep->declBit(c+121,"Top cpu cpu id_io_ex_reg_write_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id_io_ex_reg_write_address", false,-1, 4,0);
        tracep->declBus(c+123,"Top cpu cpu id_io_ex_csr_address", false,-1, 11,0);
        tracep->declBit(c+124,"Top cpu cpu id_io_ex_csr_write_enable", false,-1);
        tracep->declBit(c+79,"Top cpu cpu id_io_ctrl_jump_instruction", false,-1);
        tracep->declBus(c+125,"Top cpu cpu id_io_clint_jump_address", false,-1, 31,0);
        tracep->declBit(c+78,"Top cpu cpu id_io_if_jump_flag", false,-1);
        tracep->declBus(c+100,"Top cpu cpu id_io_if_jump_address", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex_reset", false,-1);
        tracep->declBit(c+94,"Top cpu cpu id2ex_io_stall_flag", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex_io_flush_enable", false,-1);
        tracep->declBus(c+107,"Top cpu cpu id2ex_io_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu id2ex_io_instruction_address", false,-1, 31,0);
        tracep->declBit(c+121,"Top cpu cpu id2ex_io_regs_write_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id2ex_io_regs_write_address", false,-1, 4,0);
        tracep->declBus(c+120,"Top cpu cpu id2ex_io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+98,"Top cpu cpu id2ex_io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu id2ex_io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+115,"Top cpu cpu id2ex_io_immediate", false,-1, 31,0);
        tracep->declBit(c+116,"Top cpu cpu id2ex_io_aluop1_source", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id2ex_io_aluop2_source", false,-1);
        tracep->declBit(c+124,"Top cpu cpu id2ex_io_csr_write_enable", false,-1);
        tracep->declBus(c+123,"Top cpu cpu id2ex_io_csr_address", false,-1, 11,0);
        tracep->declBit(c+118,"Top cpu cpu id2ex_io_memory_read_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id2ex_io_memory_write_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu id2ex_io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu id2ex_io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu id2ex_io_output_instruction_address", false,-1, 31,0);
        tracep->declBit(c+129,"Top cpu cpu id2ex_io_output_regs_write_enable", false,-1);
        tracep->declBus(c+86,"Top cpu cpu id2ex_io_output_regs_write_address", false,-1, 4,0);
        tracep->declBus(c+130,"Top cpu cpu id2ex_io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+131,"Top cpu cpu id2ex_io_output_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu id2ex_io_output_reg2_data", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu id2ex_io_output_immediate", false,-1, 31,0);
        tracep->declBit(c+134,"Top cpu cpu id2ex_io_output_aluop1_source", false,-1);
        tracep->declBit(c+135,"Top cpu cpu id2ex_io_output_aluop2_source", false,-1);
        tracep->declBit(c+136,"Top cpu cpu id2ex_io_output_csr_write_enable", false,-1);
        tracep->declBus(c+137,"Top cpu cpu id2ex_io_output_csr_address", false,-1, 11,0);
        tracep->declBit(c+85,"Top cpu cpu id2ex_io_output_memory_read_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu id2ex_io_output_memory_write_enable", false,-1);
        tracep->declBus(c+139,"Top cpu cpu id2ex_io_output_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu ex_io_instruction", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu ex_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu ex_io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu ex_io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu ex_io_immediate", false,-1, 31,0);
        tracep->declBit(c+134,"Top cpu cpu ex_io_aluop1_source", false,-1);
        tracep->declBit(c+135,"Top cpu cpu ex_io_aluop2_source", false,-1);
        tracep->declBus(c+139,"Top cpu cpu ex_io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+110,"Top cpu cpu ex_io_forward_from_mem", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu ex_io_forward_from_wb", false,-1, 31,0);
        tracep->declBus(c+140,"Top cpu cpu ex_io_reg1_forward", false,-1, 1,0);
        tracep->declBus(c+141,"Top cpu cpu ex_io_reg2_forward", false,-1, 1,0);
        tracep->declBus(c+142,"Top cpu cpu ex_io_mem_alu_result", false,-1, 31,0);
        tracep->declBus(c+143,"Top cpu cpu ex_io_csr_write_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem_reset", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ex2mem_io_stall_flag", false,-1);
        tracep->declBit(c+129,"Top cpu cpu ex2mem_io_regs_write_enable", false,-1);
        tracep->declBus(c+130,"Top cpu cpu ex2mem_io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+144,"Top cpu cpu ex2mem_io_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu ex2mem_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu ex2mem_io_instruction", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu ex2mem_io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu ex2mem_io_reg2_data", false,-1, 31,0);
        tracep->declBit(c+85,"Top cpu cpu ex2mem_io_memory_read_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu ex2mem_io_memory_write_enable", false,-1);
        tracep->declBus(c+142,"Top cpu cpu ex2mem_io_alu_result", false,-1, 31,0);
        tracep->declBus(c+139,"Top cpu cpu ex2mem_io_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+145,"Top cpu cpu ex2mem_io_output_regs_write_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu ex2mem_io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+147,"Top cpu cpu ex2mem_io_output_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu ex2mem_io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+149,"Top cpu cpu ex2mem_io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu ex2mem_io_output_reg2_data", false,-1, 31,0);
        tracep->declBit(c+87,"Top cpu cpu ex2mem_io_output_memory_read_enable", false,-1);
        tracep->declBit(c+151,"Top cpu cpu ex2mem_io_output_memory_write_enable", false,-1);
        tracep->declBus(c+152,"Top cpu cpu ex2mem_io_output_alu_result", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu ex2mem_io_output_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem_reset", false,-1);
        tracep->declBus(c+152,"Top cpu cpu mem_io_alu_result", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu mem_io_reg2_data", false,-1, 31,0);
        tracep->declBit(c+87,"Top cpu cpu mem_io_memory_read_enable", false,-1);
        tracep->declBit(c+151,"Top cpu cpu mem_io_memory_write_enable", false,-1);
        tracep->declBus(c+154,"Top cpu cpu mem_io_funct3", false,-1, 2,0);
        tracep->declBus(c+146,"Top cpu cpu mem_io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+153,"Top cpu cpu mem_io_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu mem_io_clint_exception_token", false,-1);
        tracep->declBus(c+363,"Top cpu cpu mem_io_wb_memory_read_data", false,-1, 31,0);
        tracep->declBit(c+81,"Top cpu cpu mem_io_ctrl_stall_flag", false,-1);
        tracep->declBus(c+110,"Top cpu cpu mem_io_forward_data", false,-1, 31,0);
        tracep->declBus(c+101,"Top cpu cpu mem_io_physical_address", false,-1, 31,0);
        tracep->declBit(c+156,"Top cpu cpu mem_io_bus_read", false,-1);
        tracep->declBus(c+101,"Top cpu cpu mem_io_bus_address", false,-1, 31,0);
        tracep->declBus(c+332,"Top cpu cpu mem_io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+157,"Top cpu cpu mem_io_bus_read_valid", false,-1);
        tracep->declBit(c+158,"Top cpu cpu mem_io_bus_write", false,-1);
        tracep->declBus(c+159,"Top cpu cpu mem_io_bus_write_data", false,-1, 31,0);
        tracep->declBit(c+160,"Top cpu cpu mem_io_bus_write_strobe_0", false,-1);
        tracep->declBit(c+161,"Top cpu cpu mem_io_bus_write_strobe_1", false,-1);
        tracep->declBit(c+162,"Top cpu cpu mem_io_bus_write_strobe_2", false,-1);
        tracep->declBit(c+163,"Top cpu cpu mem_io_bus_write_strobe_3", false,-1);
        tracep->declBit(c+164,"Top cpu cpu mem_io_bus_write_valid", false,-1);
        tracep->declBit(c+165,"Top cpu cpu mem_io_bus_request", false,-1);
        tracep->declBit(c+166,"Top cpu cpu mem_io_bus_granted", false,-1);
        tracep->declBit(c+334,"Top cpu cpu mem2wb_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb_reset", false,-1);
        tracep->declBus(c+148,"Top cpu cpu mem2wb_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+152,"Top cpu cpu mem2wb_io_alu_result", false,-1, 31,0);
        tracep->declBit(c+145,"Top cpu cpu mem2wb_io_regs_write_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu mem2wb_io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+147,"Top cpu cpu mem2wb_io_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+363,"Top cpu cpu mem2wb_io_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu mem2wb_io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu mem2wb_io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu mem2wb_io_output_alu_result", false,-1, 31,0);
        tracep->declBit(c+95,"Top cpu cpu mem2wb_io_output_regs_write_enable", false,-1);
        tracep->declBus(c+169,"Top cpu cpu mem2wb_io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+170,"Top cpu cpu mem2wb_io_output_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu mem2wb_io_output_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+172,"Top cpu cpu mem2wb_io_output_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu wb_io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu wb_io_alu_result", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu wb_io_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+169,"Top cpu cpu wb_io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+172,"Top cpu cpu wb_io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu wb_io_regs_write_data", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu forwarding_io_rs1_id", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu forwarding_io_rs2_id", false,-1, 4,0);
        tracep->declBus(c+173,"Top cpu cpu forwarding_io_rs1_ex", false,-1, 4,0);
        tracep->declBus(c+174,"Top cpu cpu forwarding_io_rs2_ex", false,-1, 4,0);
        tracep->declBus(c+88,"Top cpu cpu forwarding_io_rd_mem", false,-1, 4,0);
        tracep->declBit(c+145,"Top cpu cpu forwarding_io_reg_write_enable_mem", false,-1);
        tracep->declBus(c+96,"Top cpu cpu forwarding_io_rd_wb", false,-1, 4,0);
        tracep->declBit(c+95,"Top cpu cpu forwarding_io_reg_write_enable_wb", false,-1);
        tracep->declBus(c+111,"Top cpu cpu forwarding_io_reg1_forward_id", false,-1, 1,0);
        tracep->declBus(c+112,"Top cpu cpu forwarding_io_reg2_forward_id", false,-1, 1,0);
        tracep->declBus(c+140,"Top cpu cpu forwarding_io_reg1_forward_ex", false,-1, 1,0);
        tracep->declBus(c+141,"Top cpu cpu forwarding_io_reg2_forward_ex", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu clint_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu clint_reset", false,-1);
        tracep->declBus(c+109,"Top cpu cpu clint_io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu clint_io_instruction", false,-1, 31,0);
        tracep->declBus(c+102,"Top cpu cpu clint_io_instruction_address_if", false,-1, 31,0);
        tracep->declBit(c+175,"Top cpu cpu clint_io_exception_signal", false,-1);
        tracep->declBus(c+176,"Top cpu cpu clint_io_instruction_address_cause_exception", false,-1, 31,0);
        tracep->declBus(c+177,"Top cpu cpu clint_io_exception_cause", false,-1, 31,0);
        tracep->declBus(c+178,"Top cpu cpu clint_io_exception_val", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu clint_io_exception_token", false,-1);
        tracep->declBit(c+78,"Top cpu cpu clint_io_jump_flag", false,-1);
        tracep->declBus(c+125,"Top cpu cpu clint_io_jump_address", false,-1, 31,0);
        tracep->declBus(c+179,"Top cpu cpu clint_io_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+180,"Top cpu cpu clint_io_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+181,"Top cpu cpu clint_io_csr_mstatus", false,-1, 31,0);
        tracep->declBit(c+182,"Top cpu cpu clint_io_interrupt_enable", false,-1);
        tracep->declBit(c+82,"Top cpu cpu clint_io_ctrl_stall_flag", false,-1);
        tracep->declBit(c+183,"Top cpu cpu clint_io_csr_reg_write_enable", false,-1);
        tracep->declBus(c+184,"Top cpu cpu clint_io_csr_reg_write_address", false,-1, 11,0);
        tracep->declBus(c+185,"Top cpu cpu clint_io_csr_reg_write_data", false,-1, 31,0);
        tracep->declBus(c+114,"Top cpu cpu clint_io_id_interrupt_handler_address", false,-1, 31,0);
        tracep->declBit(c+113,"Top cpu cpu clint_io_id_interrupt_assert", false,-1);
        tracep->declBit(c+334,"Top cpu cpu csr_regs_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu csr_regs_reset", false,-1);
        tracep->declBit(c+136,"Top cpu cpu csr_regs_io_reg_write_enable_ex", false,-1);
        tracep->declBus(c+123,"Top cpu cpu csr_regs_io_reg_read_address_id", false,-1, 11,0);
        tracep->declBus(c+137,"Top cpu cpu csr_regs_io_reg_write_address_ex", false,-1, 11,0);
        tracep->declBus(c+143,"Top cpu cpu csr_regs_io_reg_write_data_ex", false,-1, 31,0);
        tracep->declBit(c+183,"Top cpu cpu csr_regs_io_reg_write_enable_clint", false,-1);
        tracep->declBus(c+184,"Top cpu cpu csr_regs_io_reg_write_address_clint", false,-1, 11,0);
        tracep->declBus(c+185,"Top cpu cpu csr_regs_io_reg_write_data_clint", false,-1, 31,0);
        tracep->declBit(c+182,"Top cpu cpu csr_regs_io_interrupt_enable", false,-1);
        tracep->declBit(c+186,"Top cpu cpu csr_regs_io_mmu_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu csr_regs_io_id_reg_data", false,-1, 31,0);
        tracep->declBit(c+89,"Top cpu cpu csr_regs_io_start_paging", false,-1);
        tracep->declBus(c+179,"Top cpu cpu csr_regs_io_clint_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+180,"Top cpu cpu csr_regs_io_clint_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+181,"Top cpu cpu csr_regs_io_clint_csr_mstatus", false,-1, 31,0);
        tracep->declBus(c+187,"Top cpu cpu csr_regs_io_mmu_csr_satp", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu axi4_master_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu axi4_master_reset", false,-1);
        tracep->declBit(c+45,"Top cpu cpu axi4_master_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu cpu axi4_master_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu cpu axi4_master_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu cpu axi4_master_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu cpu axi4_master_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu cpu axi4_master_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu cpu axi4_master_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu cpu axi4_master_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu cpu axi4_master_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu cpu axi4_master_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu cpu axi4_master_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu cpu axi4_master_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu cpu axi4_master_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu cpu axi4_master_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu cpu axi4_master_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+365,"Top cpu cpu axi4_master_io_channels_read_data_channel_RRESP", false,-1, 1,0);
        tracep->declBit(c+188,"Top cpu cpu axi4_master_io_bundle_read", false,-1);
        tracep->declBit(c+189,"Top cpu cpu axi4_master_io_bundle_write", false,-1);
        tracep->declBus(c+331,"Top cpu cpu axi4_master_io_bundle_read_data", false,-1, 31,0);
        tracep->declBus(c+190,"Top cpu cpu axi4_master_io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+191,"Top cpu cpu axi4_master_io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+192,"Top cpu cpu axi4_master_io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+193,"Top cpu cpu axi4_master_io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+194,"Top cpu cpu axi4_master_io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+59,"Top cpu cpu axi4_master_io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+195,"Top cpu cpu axi4_master_io_bundle_busy", false,-1);
        tracep->declBit(c+196,"Top cpu cpu axi4_master_io_bundle_read_valid", false,-1);
        tracep->declBit(c+197,"Top cpu cpu axi4_master_io_bundle_write_valid", false,-1);
        tracep->declBit(c+334,"Top cpu cpu mmu_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mmu_reset", false,-1);
        tracep->declBus(c+149,"Top cpu cpu mmu_io_instructions", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu mmu_io_instructions_address", false,-1, 31,0);
        tracep->declBus(c+198,"Top cpu cpu mmu_io_ppn_from_satp", false,-1, 19,0);
        tracep->declBus(c+199,"Top cpu cpu mmu_io_virtual_address", false,-1, 31,0);
        tracep->declBit(c+200,"Top cpu cpu mmu_io_mmu_occupied_by_mem", false,-1);
        tracep->declBit(c+201,"Top cpu cpu mmu_io_restart", false,-1);
        tracep->declBit(c+202,"Top cpu cpu mmu_io_restart_done", false,-1);
        tracep->declBit(c+203,"Top cpu cpu mmu_io_pa_valid", false,-1);
        tracep->declBus(c+204,"Top cpu cpu mmu_io_pa", false,-1, 31,0);
        tracep->declBit(c+175,"Top cpu cpu mmu_io_page_fault_signals", false,-1);
        tracep->declBus(c+178,"Top cpu cpu mmu_io_va_cause_page_fault", false,-1, 31,0);
        tracep->declBus(c+177,"Top cpu cpu mmu_io_ecause", false,-1, 31,0);
        tracep->declBus(c+176,"Top cpu cpu mmu_io_epc", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu mmu_io_page_fault_responed", false,-1);
        tracep->declBit(c+205,"Top cpu cpu mmu_io_bus_read", false,-1);
        tracep->declBus(c+206,"Top cpu cpu mmu_io_bus_address", false,-1, 31,0);
        tracep->declBus(c+333,"Top cpu cpu mmu_io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+207,"Top cpu cpu mmu_io_bus_read_valid", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu_io_bus_write", false,-1);
        tracep->declBus(c+209,"Top cpu cpu mmu_io_bus_write_data", false,-1, 31,0);
        tracep->declBit(c+208,"Top cpu cpu mmu_io_bus_write_strobe_0", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu_io_bus_write_strobe_1", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu_io_bus_write_strobe_2", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu_io_bus_write_strobe_3", false,-1);
        tracep->declBit(c+210,"Top cpu cpu mmu_io_bus_write_valid", false,-1);
        tracep->declBit(c+211,"Top cpu cpu mmu_io_bus_granted", false,-1);
        tracep->declBus(c+212,"Top cpu cpu bus_granted", false,-1, 2,0);
        tracep->declBus(c+213,"Top cpu cpu mem_access_state", false,-1, 2,0);
        tracep->declBus(c+199,"Top cpu cpu virtual_address", false,-1, 31,0);
        tracep->declBus(c+101,"Top cpu cpu physical_address", false,-1, 31,0);
        tracep->declBit(c+201,"Top cpu cpu mmu_restart", false,-1);
        tracep->declBit(c+214,"Top cpu cpu pending", false,-1);
        tracep->declBit(c+78,"Top cpu cpu ctrl io_jump_flag", false,-1);
        tracep->declBit(c+79,"Top cpu cpu ctrl io_jump_instruction_id", false,-1);
        tracep->declBit(c+80,"Top cpu cpu ctrl io_stall_flag_if", false,-1);
        tracep->declBit(c+81,"Top cpu cpu ctrl io_stall_flag_mem", false,-1);
        tracep->declBit(c+82,"Top cpu cpu ctrl io_stall_flag_clint", false,-1);
        tracep->declBus(c+83,"Top cpu cpu ctrl io_rs1_id", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu ctrl io_rs2_id", false,-1, 4,0);
        tracep->declBit(c+85,"Top cpu cpu ctrl io_memory_read_enable_ex", false,-1);
        tracep->declBus(c+86,"Top cpu cpu ctrl io_rd_ex", false,-1, 4,0);
        tracep->declBit(c+87,"Top cpu cpu ctrl io_memory_read_enable_mem", false,-1);
        tracep->declBus(c+88,"Top cpu cpu ctrl io_rd_mem", false,-1, 4,0);
        tracep->declBit(c+89,"Top cpu cpu ctrl io_csr_start_paging", false,-1);
        tracep->declBit(c+90,"Top cpu cpu ctrl io_if_flush", false,-1);
        tracep->declBit(c+91,"Top cpu cpu ctrl io_id_flush", false,-1);
        tracep->declBit(c+92,"Top cpu cpu ctrl io_pc_stall", false,-1);
        tracep->declBit(c+93,"Top cpu cpu ctrl io_if_stall", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ctrl io_id_stall", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ctrl io_ex_stall", false,-1);
        tracep->declBit(c+215,"Top cpu cpu ctrl id_hazard", false,-1);
        tracep->declBit(c+334,"Top cpu cpu regs clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu regs reset", false,-1);
        tracep->declBit(c+95,"Top cpu cpu regs io_write_enable", false,-1);
        tracep->declBus(c+96,"Top cpu cpu regs io_write_address", false,-1, 4,0);
        tracep->declBus(c+97,"Top cpu cpu regs io_write_data", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu regs io_read_address1", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu regs io_read_address2", false,-1, 4,0);
        tracep->declBus(c+98,"Top cpu cpu regs io_read_data1", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu regs io_read_data2", false,-1, 31,0);
        tracep->declBus(c+357,"Top cpu cpu regs io_debug_read_address", false,-1, 4,0);
        tracep->declBus(c+360,"Top cpu cpu regs io_debug_read_data", false,-1, 31,0);
        tracep->declBus(c+216,"Top cpu cpu regs registers_0", false,-1, 31,0);
        tracep->declBus(c+217,"Top cpu cpu regs registers_1", false,-1, 31,0);
        tracep->declBus(c+218,"Top cpu cpu regs registers_2", false,-1, 31,0);
        tracep->declBus(c+219,"Top cpu cpu regs registers_3", false,-1, 31,0);
        tracep->declBus(c+220,"Top cpu cpu regs registers_4", false,-1, 31,0);
        tracep->declBus(c+221,"Top cpu cpu regs registers_5", false,-1, 31,0);
        tracep->declBus(c+222,"Top cpu cpu regs registers_6", false,-1, 31,0);
        tracep->declBus(c+223,"Top cpu cpu regs registers_7", false,-1, 31,0);
        tracep->declBus(c+224,"Top cpu cpu regs registers_8", false,-1, 31,0);
        tracep->declBus(c+225,"Top cpu cpu regs registers_9", false,-1, 31,0);
        tracep->declBus(c+226,"Top cpu cpu regs registers_10", false,-1, 31,0);
        tracep->declBus(c+227,"Top cpu cpu regs registers_11", false,-1, 31,0);
        tracep->declBus(c+228,"Top cpu cpu regs registers_12", false,-1, 31,0);
        tracep->declBus(c+229,"Top cpu cpu regs registers_13", false,-1, 31,0);
        tracep->declBus(c+230,"Top cpu cpu regs registers_14", false,-1, 31,0);
        tracep->declBus(c+231,"Top cpu cpu regs registers_15", false,-1, 31,0);
        tracep->declBus(c+232,"Top cpu cpu regs registers_16", false,-1, 31,0);
        tracep->declBus(c+233,"Top cpu cpu regs registers_17", false,-1, 31,0);
        tracep->declBus(c+234,"Top cpu cpu regs registers_18", false,-1, 31,0);
        tracep->declBus(c+235,"Top cpu cpu regs registers_19", false,-1, 31,0);
        tracep->declBus(c+236,"Top cpu cpu regs registers_20", false,-1, 31,0);
        tracep->declBus(c+237,"Top cpu cpu regs registers_21", false,-1, 31,0);
        tracep->declBus(c+238,"Top cpu cpu regs registers_22", false,-1, 31,0);
        tracep->declBus(c+239,"Top cpu cpu regs registers_23", false,-1, 31,0);
        tracep->declBus(c+240,"Top cpu cpu regs registers_24", false,-1, 31,0);
        tracep->declBus(c+241,"Top cpu cpu regs registers_25", false,-1, 31,0);
        tracep->declBus(c+242,"Top cpu cpu regs registers_26", false,-1, 31,0);
        tracep->declBus(c+243,"Top cpu cpu regs registers_27", false,-1, 31,0);
        tracep->declBus(c+244,"Top cpu cpu regs registers_28", false,-1, 31,0);
        tracep->declBus(c+245,"Top cpu cpu regs registers_29", false,-1, 31,0);
        tracep->declBus(c+246,"Top cpu cpu regs registers_30", false,-1, 31,0);
        tracep->declBus(c+247,"Top cpu cpu regs registers_31", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu inst_fetch clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu inst_fetch reset", false,-1);
        tracep->declBit(c+92,"Top cpu cpu inst_fetch io_stall_flag_ctrl", false,-1);
        tracep->declBit(c+78,"Top cpu cpu inst_fetch io_jump_flag_id", false,-1);
        tracep->declBus(c+100,"Top cpu cpu inst_fetch io_jump_address_id", false,-1, 31,0);
        tracep->declBus(c+101,"Top cpu cpu inst_fetch io_physical_address", false,-1, 31,0);
        tracep->declBit(c+80,"Top cpu cpu inst_fetch io_ctrl_stall_flag", false,-1);
        tracep->declBus(c+102,"Top cpu cpu inst_fetch io_id_instruction_address", false,-1, 31,0);
        tracep->declBus(c+361,"Top cpu cpu inst_fetch io_id_instruction", false,-1, 31,0);
        tracep->declBit(c+103,"Top cpu cpu inst_fetch io_pc_valid", false,-1);
        tracep->declBit(c+104,"Top cpu cpu inst_fetch io_bus_read", false,-1);
        tracep->declBus(c+101,"Top cpu cpu inst_fetch io_bus_address", false,-1, 31,0);
        tracep->declBus(c+362,"Top cpu cpu inst_fetch io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+105,"Top cpu cpu inst_fetch io_bus_read_valid", false,-1);
        tracep->declBit(c+106,"Top cpu cpu inst_fetch io_bus_granted", false,-1);
        tracep->declBit(c+248,"Top cpu cpu inst_fetch pending_jump", false,-1);
        tracep->declBus(c+102,"Top cpu cpu inst_fetch pc", false,-1, 31,0);
        tracep->declBit(c+249,"Top cpu cpu inst_fetch state", false,-1);
        tracep->declBit(c+103,"Top cpu cpu inst_fetch pc_valid", false,-1);
        tracep->declBit(c+334,"Top cpu cpu if2id clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id reset", false,-1);
        tracep->declBit(c+93,"Top cpu cpu if2id io_stall_flag", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id io_flush_enable", false,-1);
        tracep->declBus(c+361,"Top cpu cpu if2id io_instruction", false,-1, 31,0);
        tracep->declBus(c+102,"Top cpu cpu if2id io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+359,"Top cpu cpu if2id io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu if2id io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu if2id io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+109,"Top cpu cpu if2id io_output_interrupt_flag", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id instruction_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id instruction_reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id instruction_io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id instruction_io_flush_enable", false,-1);
        tracep->declBus(c+361,"Top cpu cpu if2id instruction_io_in", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu if2id instruction_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id instruction_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id instruction_address_reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id instruction_address_io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id instruction_address_io_flush_enable", false,-1);
        tracep->declBus(c+102,"Top cpu cpu if2id instruction_address_io_in", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu if2id instruction_address_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id interrupt_flag_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id interrupt_flag_reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id interrupt_flag_io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id interrupt_flag_io_flush_enable", false,-1);
        tracep->declBus(c+359,"Top cpu cpu if2id interrupt_flag_io_in", false,-1, 31,0);
        tracep->declBus(c+109,"Top cpu cpu if2id interrupt_flag_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id instruction clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id instruction reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id instruction io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id instruction io_flush_enable", false,-1);
        tracep->declBus(c+361,"Top cpu cpu if2id instruction io_in", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu if2id instruction io_out", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu if2id instruction reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id instruction_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id instruction_address reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id instruction_address io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id instruction_address io_flush_enable", false,-1);
        tracep->declBus(c+102,"Top cpu cpu if2id instruction_address io_in", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu if2id instruction_address io_out", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu if2id instruction_address reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu if2id interrupt_flag clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu if2id interrupt_flag reset", false,-1);
        tracep->declBit(c+250,"Top cpu cpu if2id interrupt_flag io_write_enable", false,-1);
        tracep->declBit(c+90,"Top cpu cpu if2id interrupt_flag io_flush_enable", false,-1);
        tracep->declBus(c+359,"Top cpu cpu if2id interrupt_flag io_in", false,-1, 31,0);
        tracep->declBus(c+109,"Top cpu cpu if2id interrupt_flag io_out", false,-1, 31,0);
        tracep->declBus(c+109,"Top cpu cpu if2id interrupt_flag reg_", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu id io_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu id io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+98,"Top cpu cpu id io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu id io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+110,"Top cpu cpu id io_forward_from_mem", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu id io_forward_from_wb", false,-1, 31,0);
        tracep->declBus(c+111,"Top cpu cpu id io_reg1_forward", false,-1, 1,0);
        tracep->declBus(c+112,"Top cpu cpu id io_reg2_forward", false,-1, 1,0);
        tracep->declBit(c+113,"Top cpu cpu id io_interrupt_assert", false,-1);
        tracep->declBus(c+114,"Top cpu cpu id io_interrupt_handler_address", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu id io_regs_reg1_read_address", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu id io_regs_reg2_read_address", false,-1, 4,0);
        tracep->declBus(c+115,"Top cpu cpu id io_ex_immediate", false,-1, 31,0);
        tracep->declBit(c+116,"Top cpu cpu id io_ex_aluop1_source", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id io_ex_aluop2_source", false,-1);
        tracep->declBit(c+118,"Top cpu cpu id io_ex_memory_read_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id io_ex_memory_write_enable", false,-1);
        tracep->declBus(c+120,"Top cpu cpu id io_ex_reg_write_source", false,-1, 1,0);
        tracep->declBit(c+121,"Top cpu cpu id io_ex_reg_write_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id io_ex_reg_write_address", false,-1, 4,0);
        tracep->declBus(c+123,"Top cpu cpu id io_ex_csr_address", false,-1, 11,0);
        tracep->declBit(c+124,"Top cpu cpu id io_ex_csr_write_enable", false,-1);
        tracep->declBit(c+79,"Top cpu cpu id io_ctrl_jump_instruction", false,-1);
        tracep->declBus(c+125,"Top cpu cpu id io_clint_jump_address", false,-1, 31,0);
        tracep->declBit(c+78,"Top cpu cpu id io_if_jump_flag", false,-1);
        tracep->declBus(c+100,"Top cpu cpu id io_if_jump_address", false,-1, 31,0);
        tracep->declBus(c+251,"Top cpu cpu id opcode", false,-1, 6,0);
        tracep->declBus(c+252,"Top cpu cpu id funct3", false,-1, 2,0);
        tracep->declBus(c+122,"Top cpu cpu id rd", false,-1, 4,0);
        tracep->declBus(c+253,"Top cpu cpu id rs1", false,-1, 4,0);
        tracep->declBus(c+254,"Top cpu cpu id reg1_data", false,-1, 31,0);
        tracep->declBus(c+255,"Top cpu cpu id reg2_data", false,-1, 31,0);
        tracep->declBit(c+256,"Top cpu cpu id instruction_jump_flag", false,-1);
        tracep->declBus(c+257,"Top cpu cpu id instruction_jump_address", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex reset", false,-1);
        tracep->declBit(c+94,"Top cpu cpu id2ex io_stall_flag", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex io_flush_enable", false,-1);
        tracep->declBus(c+107,"Top cpu cpu id2ex io_instruction", false,-1, 31,0);
        tracep->declBus(c+108,"Top cpu cpu id2ex io_instruction_address", false,-1, 31,0);
        tracep->declBit(c+121,"Top cpu cpu id2ex io_regs_write_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id2ex io_regs_write_address", false,-1, 4,0);
        tracep->declBus(c+120,"Top cpu cpu id2ex io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+98,"Top cpu cpu id2ex io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+99,"Top cpu cpu id2ex io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+115,"Top cpu cpu id2ex io_immediate", false,-1, 31,0);
        tracep->declBit(c+116,"Top cpu cpu id2ex io_aluop1_source", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id2ex io_aluop2_source", false,-1);
        tracep->declBit(c+124,"Top cpu cpu id2ex io_csr_write_enable", false,-1);
        tracep->declBus(c+123,"Top cpu cpu id2ex io_csr_address", false,-1, 11,0);
        tracep->declBit(c+118,"Top cpu cpu id2ex io_memory_read_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id2ex io_memory_write_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu id2ex io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu id2ex io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu id2ex io_output_instruction_address", false,-1, 31,0);
        tracep->declBit(c+129,"Top cpu cpu id2ex io_output_regs_write_enable", false,-1);
        tracep->declBus(c+86,"Top cpu cpu id2ex io_output_regs_write_address", false,-1, 4,0);
        tracep->declBus(c+130,"Top cpu cpu id2ex io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+131,"Top cpu cpu id2ex io_output_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu id2ex io_output_reg2_data", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu id2ex io_output_immediate", false,-1, 31,0);
        tracep->declBit(c+134,"Top cpu cpu id2ex io_output_aluop1_source", false,-1);
        tracep->declBit(c+135,"Top cpu cpu id2ex io_output_aluop2_source", false,-1);
        tracep->declBit(c+136,"Top cpu cpu id2ex io_output_csr_write_enable", false,-1);
        tracep->declBus(c+137,"Top cpu cpu id2ex io_output_csr_address", false,-1, 11,0);
        tracep->declBit(c+85,"Top cpu cpu id2ex io_output_memory_read_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu id2ex io_output_memory_write_enable", false,-1);
        tracep->declBus(c+139,"Top cpu cpu id2ex io_output_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex instruction_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex instruction_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex instruction_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex instruction_io_flush_enable", false,-1);
        tracep->declBus(c+107,"Top cpu cpu id2ex instruction_io_in", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu id2ex instruction_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex instruction_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex instruction_address_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex instruction_address_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex instruction_address_io_flush_enable", false,-1);
        tracep->declBus(c+108,"Top cpu cpu id2ex instruction_address_io_in", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu id2ex instruction_address_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+121,"Top cpu cpu id2ex regs_write_enable_io_in", false,-1);
        tracep->declBit(c+129,"Top cpu cpu id2ex regs_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_address_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_address_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_address_io_flush_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id2ex regs_write_address_io_in", false,-1, 4,0);
        tracep->declBus(c+86,"Top cpu cpu id2ex regs_write_address_io_out", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_source_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_source_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_source_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_source_io_flush_enable", false,-1);
        tracep->declBus(c+120,"Top cpu cpu id2ex regs_write_source_io_in", false,-1, 1,0);
        tracep->declBus(c+130,"Top cpu cpu id2ex regs_write_source_io_out", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex reg1_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex reg1_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex reg1_data_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex reg1_data_io_flush_enable", false,-1);
        tracep->declBus(c+98,"Top cpu cpu id2ex reg1_data_io_in", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu id2ex reg1_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex reg2_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex reg2_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex reg2_data_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex reg2_data_io_flush_enable", false,-1);
        tracep->declBus(c+99,"Top cpu cpu id2ex reg2_data_io_in", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu id2ex reg2_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex immediate_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex immediate_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex immediate_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex immediate_io_flush_enable", false,-1);
        tracep->declBus(c+115,"Top cpu cpu id2ex immediate_io_in", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu id2ex immediate_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex aluop1_source_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex aluop1_source_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex aluop1_source_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex aluop1_source_io_flush_enable", false,-1);
        tracep->declBit(c+116,"Top cpu cpu id2ex aluop1_source_io_in", false,-1);
        tracep->declBit(c+134,"Top cpu cpu id2ex aluop1_source_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex aluop2_source_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex aluop2_source_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex aluop2_source_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex aluop2_source_io_flush_enable", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id2ex aluop2_source_io_in", false,-1);
        tracep->declBit(c+135,"Top cpu cpu id2ex aluop2_source_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_write_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+124,"Top cpu cpu id2ex csr_write_enable_io_in", false,-1);
        tracep->declBit(c+136,"Top cpu cpu id2ex csr_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_address_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_address_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_address_io_flush_enable", false,-1);
        tracep->declBus(c+123,"Top cpu cpu id2ex csr_address_io_in", false,-1, 11,0);
        tracep->declBus(c+137,"Top cpu cpu id2ex csr_address_io_out", false,-1, 11,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex memory_read_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex memory_read_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex memory_read_enable_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex memory_read_enable_io_flush_enable", false,-1);
        tracep->declBit(c+118,"Top cpu cpu id2ex memory_read_enable_io_in", false,-1);
        tracep->declBit(c+85,"Top cpu cpu id2ex memory_read_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex memory_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex memory_write_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex memory_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex memory_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id2ex memory_write_enable_io_in", false,-1);
        tracep->declBit(c+138,"Top cpu cpu id2ex memory_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_read_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_read_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_read_data_io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_read_data_io_flush_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu id2ex csr_read_data_io_in", false,-1, 31,0);
        tracep->declBus(c+139,"Top cpu cpu id2ex csr_read_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex instruction clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex instruction reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex instruction io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex instruction io_flush_enable", false,-1);
        tracep->declBus(c+107,"Top cpu cpu id2ex instruction io_in", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu id2ex instruction io_out", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu id2ex instruction reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex instruction_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex instruction_address reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex instruction_address io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex instruction_address io_flush_enable", false,-1);
        tracep->declBus(c+108,"Top cpu cpu id2ex instruction_address io_in", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu id2ex instruction_address io_out", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu id2ex instruction_address reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_enable io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+121,"Top cpu cpu id2ex regs_write_enable io_in", false,-1);
        tracep->declBit(c+129,"Top cpu cpu id2ex regs_write_enable io_out", false,-1);
        tracep->declBit(c+129,"Top cpu cpu id2ex regs_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_address reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_address io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_address io_flush_enable", false,-1);
        tracep->declBus(c+122,"Top cpu cpu id2ex regs_write_address io_in", false,-1, 4,0);
        tracep->declBus(c+86,"Top cpu cpu id2ex regs_write_address io_out", false,-1, 4,0);
        tracep->declBus(c+86,"Top cpu cpu id2ex regs_write_address reg_", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex regs_write_source clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex regs_write_source reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex regs_write_source io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex regs_write_source io_flush_enable", false,-1);
        tracep->declBus(c+120,"Top cpu cpu id2ex regs_write_source io_in", false,-1, 1,0);
        tracep->declBus(c+130,"Top cpu cpu id2ex regs_write_source io_out", false,-1, 1,0);
        tracep->declBus(c+130,"Top cpu cpu id2ex regs_write_source reg_", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex reg1_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex reg1_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex reg1_data io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex reg1_data io_flush_enable", false,-1);
        tracep->declBus(c+98,"Top cpu cpu id2ex reg1_data io_in", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu id2ex reg1_data io_out", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu id2ex reg1_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex reg2_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex reg2_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex reg2_data io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex reg2_data io_flush_enable", false,-1);
        tracep->declBus(c+99,"Top cpu cpu id2ex reg2_data io_in", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu id2ex reg2_data io_out", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu id2ex reg2_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex immediate clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex immediate reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex immediate io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex immediate io_flush_enable", false,-1);
        tracep->declBus(c+115,"Top cpu cpu id2ex immediate io_in", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu id2ex immediate io_out", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu id2ex immediate reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex aluop1_source clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex aluop1_source reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex aluop1_source io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex aluop1_source io_flush_enable", false,-1);
        tracep->declBit(c+116,"Top cpu cpu id2ex aluop1_source io_in", false,-1);
        tracep->declBit(c+134,"Top cpu cpu id2ex aluop1_source io_out", false,-1);
        tracep->declBit(c+134,"Top cpu cpu id2ex aluop1_source reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex aluop2_source clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex aluop2_source reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex aluop2_source io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex aluop2_source io_flush_enable", false,-1);
        tracep->declBit(c+117,"Top cpu cpu id2ex aluop2_source io_in", false,-1);
        tracep->declBit(c+135,"Top cpu cpu id2ex aluop2_source io_out", false,-1);
        tracep->declBit(c+135,"Top cpu cpu id2ex aluop2_source reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_write_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_write_enable io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+124,"Top cpu cpu id2ex csr_write_enable io_in", false,-1);
        tracep->declBit(c+136,"Top cpu cpu id2ex csr_write_enable io_out", false,-1);
        tracep->declBit(c+136,"Top cpu cpu id2ex csr_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_address reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_address io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_address io_flush_enable", false,-1);
        tracep->declBus(c+123,"Top cpu cpu id2ex csr_address io_in", false,-1, 11,0);
        tracep->declBus(c+137,"Top cpu cpu id2ex csr_address io_out", false,-1, 11,0);
        tracep->declBus(c+137,"Top cpu cpu id2ex csr_address reg_", false,-1, 11,0);
        tracep->declBit(c+334,"Top cpu cpu id2ex memory_read_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex memory_read_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex memory_read_enable io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex memory_read_enable io_flush_enable", false,-1);
        tracep->declBit(c+118,"Top cpu cpu id2ex memory_read_enable io_in", false,-1);
        tracep->declBit(c+85,"Top cpu cpu id2ex memory_read_enable io_out", false,-1);
        tracep->declBit(c+85,"Top cpu cpu id2ex memory_read_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex memory_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex memory_write_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex memory_write_enable io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex memory_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+119,"Top cpu cpu id2ex memory_write_enable io_in", false,-1);
        tracep->declBit(c+138,"Top cpu cpu id2ex memory_write_enable io_out", false,-1);
        tracep->declBit(c+138,"Top cpu cpu id2ex memory_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu id2ex csr_read_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu id2ex csr_read_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu id2ex csr_read_data io_write_enable", false,-1);
        tracep->declBit(c+91,"Top cpu cpu id2ex csr_read_data io_flush_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu id2ex csr_read_data io_in", false,-1, 31,0);
        tracep->declBus(c+139,"Top cpu cpu id2ex csr_read_data io_out", false,-1, 31,0);
        tracep->declBus(c+139,"Top cpu cpu id2ex csr_read_data reg_", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu ex io_instruction", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu ex io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu ex io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu ex io_reg2_data", false,-1, 31,0);
        tracep->declBus(c+133,"Top cpu cpu ex io_immediate", false,-1, 31,0);
        tracep->declBit(c+134,"Top cpu cpu ex io_aluop1_source", false,-1);
        tracep->declBit(c+135,"Top cpu cpu ex io_aluop2_source", false,-1);
        tracep->declBus(c+139,"Top cpu cpu ex io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+110,"Top cpu cpu ex io_forward_from_mem", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu ex io_forward_from_wb", false,-1, 31,0);
        tracep->declBus(c+140,"Top cpu cpu ex io_reg1_forward", false,-1, 1,0);
        tracep->declBus(c+141,"Top cpu cpu ex io_reg2_forward", false,-1, 1,0);
        tracep->declBus(c+142,"Top cpu cpu ex io_mem_alu_result", false,-1, 31,0);
        tracep->declBus(c+143,"Top cpu cpu ex io_csr_write_data", false,-1, 31,0);
        tracep->declBus(c+259,"Top cpu cpu ex alu_io_func", false,-1, 3,0);
        tracep->declBus(c+260,"Top cpu cpu ex alu_io_op1", false,-1, 31,0);
        tracep->declBus(c+261,"Top cpu cpu ex alu_io_op2", false,-1, 31,0);
        tracep->declBus(c+142,"Top cpu cpu ex alu_io_result", false,-1, 31,0);
        tracep->declBus(c+262,"Top cpu cpu ex alu_ctrl_io_opcode", false,-1, 6,0);
        tracep->declBus(c+263,"Top cpu cpu ex alu_ctrl_io_funct3", false,-1, 2,0);
        tracep->declBus(c+264,"Top cpu cpu ex alu_ctrl_io_funct7", false,-1, 6,0);
        tracep->declBus(c+259,"Top cpu cpu ex alu_ctrl_io_alu_funct", false,-1, 3,0);
        tracep->declBus(c+263,"Top cpu cpu ex funct3", false,-1, 2,0);
        tracep->declBus(c+173,"Top cpu cpu ex uimm", false,-1, 4,0);
        tracep->declBus(c+259,"Top cpu cpu ex alu io_func", false,-1, 3,0);
        tracep->declBus(c+260,"Top cpu cpu ex alu io_op1", false,-1, 31,0);
        tracep->declBus(c+261,"Top cpu cpu ex alu io_op2", false,-1, 31,0);
        tracep->declBus(c+142,"Top cpu cpu ex alu io_result", false,-1, 31,0);
        tracep->declBus(c+262,"Top cpu cpu ex alu_ctrl io_opcode", false,-1, 6,0);
        tracep->declBus(c+263,"Top cpu cpu ex alu_ctrl io_funct3", false,-1, 2,0);
        tracep->declBus(c+264,"Top cpu cpu ex alu_ctrl io_funct7", false,-1, 6,0);
        tracep->declBus(c+259,"Top cpu cpu ex alu_ctrl io_alu_funct", false,-1, 3,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem reset", false,-1);
        tracep->declBit(c+94,"Top cpu cpu ex2mem io_stall_flag", false,-1);
        tracep->declBit(c+129,"Top cpu cpu ex2mem io_regs_write_enable", false,-1);
        tracep->declBus(c+130,"Top cpu cpu ex2mem io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+144,"Top cpu cpu ex2mem io_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+128,"Top cpu cpu ex2mem io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+127,"Top cpu cpu ex2mem io_instruction", false,-1, 31,0);
        tracep->declBus(c+131,"Top cpu cpu ex2mem io_reg1_data", false,-1, 31,0);
        tracep->declBus(c+132,"Top cpu cpu ex2mem io_reg2_data", false,-1, 31,0);
        tracep->declBit(c+85,"Top cpu cpu ex2mem io_memory_read_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu ex2mem io_memory_write_enable", false,-1);
        tracep->declBus(c+142,"Top cpu cpu ex2mem io_alu_result", false,-1, 31,0);
        tracep->declBus(c+139,"Top cpu cpu ex2mem io_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+145,"Top cpu cpu ex2mem io_output_regs_write_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu ex2mem io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+147,"Top cpu cpu ex2mem io_output_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu ex2mem io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+149,"Top cpu cpu ex2mem io_output_instruction", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu ex2mem io_output_reg2_data", false,-1, 31,0);
        tracep->declBit(c+87,"Top cpu cpu ex2mem io_output_memory_read_enable", false,-1);
        tracep->declBit(c+151,"Top cpu cpu ex2mem io_output_memory_write_enable", false,-1);
        tracep->declBus(c+152,"Top cpu cpu ex2mem io_output_alu_result", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu ex2mem io_output_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+129,"Top cpu cpu ex2mem regs_write_enable_io_in", false,-1);
        tracep->declBit(c+145,"Top cpu cpu ex2mem regs_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_source_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_source_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_source_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_source_io_flush_enable", false,-1);
        tracep->declBus(c+130,"Top cpu cpu ex2mem regs_write_source_io_in", false,-1, 1,0);
        tracep->declBus(c+146,"Top cpu cpu ex2mem regs_write_source_io_out", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_address_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_address_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_address_io_flush_enable", false,-1);
        tracep->declBus(c+86,"Top cpu cpu ex2mem regs_write_address_io_in", false,-1, 4,0);
        tracep->declBus(c+88,"Top cpu cpu ex2mem regs_write_address_io_out", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem instruction_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem instruction_address_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem instruction_address_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem instruction_address_io_flush_enable", false,-1);
        tracep->declBus(c+128,"Top cpu cpu ex2mem instruction_address_io_in", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu ex2mem instruction_address_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem instruction_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem instruction_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem instruction_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem instruction_io_flush_enable", false,-1);
        tracep->declBus(c+127,"Top cpu cpu ex2mem instruction_io_in", false,-1, 31,0);
        tracep->declBus(c+149,"Top cpu cpu ex2mem instruction_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem reg1_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem reg1_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem reg1_data_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem reg1_data_io_flush_enable", false,-1);
        tracep->declBus(c+131,"Top cpu cpu ex2mem reg1_data_io_in", false,-1, 31,0);
        tracep->declBus(c+265,"Top cpu cpu ex2mem reg1_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem reg2_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem reg2_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem reg2_data_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem reg2_data_io_flush_enable", false,-1);
        tracep->declBus(c+132,"Top cpu cpu ex2mem reg2_data_io_in", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu ex2mem reg2_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem alu_result_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem alu_result_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem alu_result_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem alu_result_io_flush_enable", false,-1);
        tracep->declBus(c+142,"Top cpu cpu ex2mem alu_result_io_in", false,-1, 31,0);
        tracep->declBus(c+152,"Top cpu cpu ex2mem alu_result_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem memory_read_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem memory_read_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem memory_read_enable_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem memory_read_enable_io_flush_enable", false,-1);
        tracep->declBit(c+85,"Top cpu cpu ex2mem memory_read_enable_io_in", false,-1);
        tracep->declBit(c+87,"Top cpu cpu ex2mem memory_read_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem memory_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem memory_write_enable_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem memory_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem memory_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu ex2mem memory_write_enable_io_in", false,-1);
        tracep->declBit(c+151,"Top cpu cpu ex2mem memory_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem csr_read_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem csr_read_data_reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem csr_read_data_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem csr_read_data_io_flush_enable", false,-1);
        tracep->declBus(c+139,"Top cpu cpu ex2mem csr_read_data_io_in", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu ex2mem csr_read_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_enable io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+129,"Top cpu cpu ex2mem regs_write_enable io_in", false,-1);
        tracep->declBit(c+145,"Top cpu cpu ex2mem regs_write_enable io_out", false,-1);
        tracep->declBit(c+145,"Top cpu cpu ex2mem regs_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_source clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_source reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_source io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_source io_flush_enable", false,-1);
        tracep->declBus(c+130,"Top cpu cpu ex2mem regs_write_source io_in", false,-1, 1,0);
        tracep->declBus(c+146,"Top cpu cpu ex2mem regs_write_source io_out", false,-1, 1,0);
        tracep->declBus(c+146,"Top cpu cpu ex2mem regs_write_source reg_", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem regs_write_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem regs_write_address reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem regs_write_address io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem regs_write_address io_flush_enable", false,-1);
        tracep->declBus(c+86,"Top cpu cpu ex2mem regs_write_address io_in", false,-1, 4,0);
        tracep->declBus(c+88,"Top cpu cpu ex2mem regs_write_address io_out", false,-1, 4,0);
        tracep->declBus(c+88,"Top cpu cpu ex2mem regs_write_address reg_", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem instruction_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem instruction_address reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem instruction_address io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem instruction_address io_flush_enable", false,-1);
        tracep->declBus(c+128,"Top cpu cpu ex2mem instruction_address io_in", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu ex2mem instruction_address io_out", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu ex2mem instruction_address reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem instruction clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem instruction reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem instruction io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem instruction io_flush_enable", false,-1);
        tracep->declBus(c+127,"Top cpu cpu ex2mem instruction io_in", false,-1, 31,0);
        tracep->declBus(c+149,"Top cpu cpu ex2mem instruction io_out", false,-1, 31,0);
        tracep->declBus(c+149,"Top cpu cpu ex2mem instruction reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem reg1_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem reg1_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem reg1_data io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem reg1_data io_flush_enable", false,-1);
        tracep->declBus(c+131,"Top cpu cpu ex2mem reg1_data io_in", false,-1, 31,0);
        tracep->declBus(c+265,"Top cpu cpu ex2mem reg1_data io_out", false,-1, 31,0);
        tracep->declBus(c+265,"Top cpu cpu ex2mem reg1_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem reg2_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem reg2_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem reg2_data io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem reg2_data io_flush_enable", false,-1);
        tracep->declBus(c+132,"Top cpu cpu ex2mem reg2_data io_in", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu ex2mem reg2_data io_out", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu ex2mem reg2_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem alu_result clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem alu_result reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem alu_result io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem alu_result io_flush_enable", false,-1);
        tracep->declBus(c+142,"Top cpu cpu ex2mem alu_result io_in", false,-1, 31,0);
        tracep->declBus(c+152,"Top cpu cpu ex2mem alu_result io_out", false,-1, 31,0);
        tracep->declBus(c+152,"Top cpu cpu ex2mem alu_result reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu ex2mem memory_read_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem memory_read_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem memory_read_enable io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem memory_read_enable io_flush_enable", false,-1);
        tracep->declBit(c+85,"Top cpu cpu ex2mem memory_read_enable io_in", false,-1);
        tracep->declBit(c+87,"Top cpu cpu ex2mem memory_read_enable io_out", false,-1);
        tracep->declBit(c+87,"Top cpu cpu ex2mem memory_read_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem memory_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem memory_write_enable reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem memory_write_enable io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem memory_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+138,"Top cpu cpu ex2mem memory_write_enable io_in", false,-1);
        tracep->declBit(c+151,"Top cpu cpu ex2mem memory_write_enable io_out", false,-1);
        tracep->declBit(c+151,"Top cpu cpu ex2mem memory_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu ex2mem csr_read_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu ex2mem csr_read_data reset", false,-1);
        tracep->declBit(c+258,"Top cpu cpu ex2mem csr_read_data io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu ex2mem csr_read_data io_flush_enable", false,-1);
        tracep->declBus(c+139,"Top cpu cpu ex2mem csr_read_data io_in", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu ex2mem csr_read_data io_out", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu ex2mem csr_read_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem reset", false,-1);
        tracep->declBus(c+152,"Top cpu cpu mem io_alu_result", false,-1, 31,0);
        tracep->declBus(c+150,"Top cpu cpu mem io_reg2_data", false,-1, 31,0);
        tracep->declBit(c+87,"Top cpu cpu mem io_memory_read_enable", false,-1);
        tracep->declBit(c+151,"Top cpu cpu mem io_memory_write_enable", false,-1);
        tracep->declBus(c+154,"Top cpu cpu mem io_funct3", false,-1, 2,0);
        tracep->declBus(c+146,"Top cpu cpu mem io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+153,"Top cpu cpu mem io_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu mem io_clint_exception_token", false,-1);
        tracep->declBus(c+363,"Top cpu cpu mem io_wb_memory_read_data", false,-1, 31,0);
        tracep->declBit(c+81,"Top cpu cpu mem io_ctrl_stall_flag", false,-1);
        tracep->declBus(c+110,"Top cpu cpu mem io_forward_data", false,-1, 31,0);
        tracep->declBus(c+101,"Top cpu cpu mem io_physical_address", false,-1, 31,0);
        tracep->declBit(c+156,"Top cpu cpu mem io_bus_read", false,-1);
        tracep->declBus(c+101,"Top cpu cpu mem io_bus_address", false,-1, 31,0);
        tracep->declBus(c+332,"Top cpu cpu mem io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+157,"Top cpu cpu mem io_bus_read_valid", false,-1);
        tracep->declBit(c+158,"Top cpu cpu mem io_bus_write", false,-1);
        tracep->declBus(c+159,"Top cpu cpu mem io_bus_write_data", false,-1, 31,0);
        tracep->declBit(c+160,"Top cpu cpu mem io_bus_write_strobe_0", false,-1);
        tracep->declBit(c+161,"Top cpu cpu mem io_bus_write_strobe_1", false,-1);
        tracep->declBit(c+162,"Top cpu cpu mem io_bus_write_strobe_2", false,-1);
        tracep->declBit(c+163,"Top cpu cpu mem io_bus_write_strobe_3", false,-1);
        tracep->declBit(c+164,"Top cpu cpu mem io_bus_write_valid", false,-1);
        tracep->declBit(c+165,"Top cpu cpu mem io_bus_request", false,-1);
        tracep->declBit(c+166,"Top cpu cpu mem io_bus_granted", false,-1);
        tracep->declBus(c+266,"Top cpu cpu mem mem_address_index", false,-1, 1,0);
        tracep->declBus(c+267,"Top cpu cpu mem mem_access_state", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb reset", false,-1);
        tracep->declBus(c+148,"Top cpu cpu mem2wb io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+152,"Top cpu cpu mem2wb io_alu_result", false,-1, 31,0);
        tracep->declBit(c+145,"Top cpu cpu mem2wb io_regs_write_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu mem2wb io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+147,"Top cpu cpu mem2wb io_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+363,"Top cpu cpu mem2wb io_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+153,"Top cpu cpu mem2wb io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu mem2wb io_output_instruction_address", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu mem2wb io_output_alu_result", false,-1, 31,0);
        tracep->declBit(c+95,"Top cpu cpu mem2wb io_output_regs_write_enable", false,-1);
        tracep->declBus(c+169,"Top cpu cpu mem2wb io_output_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+170,"Top cpu cpu mem2wb io_output_regs_write_address", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu mem2wb io_output_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+172,"Top cpu cpu mem2wb io_output_csr_read_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb alu_result_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb alu_result_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb alu_result_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb alu_result_io_flush_enable", false,-1);
        tracep->declBus(c+152,"Top cpu cpu mem2wb alu_result_io_in", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu mem2wb alu_result_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb memory_read_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb memory_read_data_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb memory_read_data_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb memory_read_data_io_flush_enable", false,-1);
        tracep->declBus(c+363,"Top cpu cpu mem2wb memory_read_data_io_in", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu mem2wb memory_read_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_enable_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_enable_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_enable_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_enable_io_flush_enable", false,-1);
        tracep->declBit(c+145,"Top cpu cpu mem2wb regs_write_enable_io_in", false,-1);
        tracep->declBit(c+95,"Top cpu cpu mem2wb regs_write_enable_io_out", false,-1);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_source_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_source_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_source_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_source_io_flush_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu mem2wb regs_write_source_io_in", false,-1, 1,0);
        tracep->declBus(c+169,"Top cpu cpu mem2wb regs_write_source_io_out", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_address_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_address_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_address_io_flush_enable", false,-1);
        tracep->declBus(c+88,"Top cpu cpu mem2wb regs_write_address_io_in", false,-1, 4,0);
        tracep->declBus(c+96,"Top cpu cpu mem2wb regs_write_address_io_out", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb instruction_address_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb instruction_address_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb instruction_address_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb instruction_address_io_flush_enable", false,-1);
        tracep->declBus(c+148,"Top cpu cpu mem2wb instruction_address_io_in", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu mem2wb instruction_address_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb csr_read_data_clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb csr_read_data_reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb csr_read_data_io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb csr_read_data_io_flush_enable", false,-1);
        tracep->declBus(c+153,"Top cpu cpu mem2wb csr_read_data_io_in", false,-1, 31,0);
        tracep->declBus(c+172,"Top cpu cpu mem2wb csr_read_data_io_out", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb alu_result clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb alu_result reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb alu_result io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb alu_result io_flush_enable", false,-1);
        tracep->declBus(c+152,"Top cpu cpu mem2wb alu_result io_in", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu mem2wb alu_result io_out", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu mem2wb alu_result reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb memory_read_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb memory_read_data reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb memory_read_data io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb memory_read_data io_flush_enable", false,-1);
        tracep->declBus(c+363,"Top cpu cpu mem2wb memory_read_data io_in", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu mem2wb memory_read_data io_out", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu mem2wb memory_read_data reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_enable clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_enable reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_enable io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_enable io_flush_enable", false,-1);
        tracep->declBit(c+145,"Top cpu cpu mem2wb regs_write_enable io_in", false,-1);
        tracep->declBit(c+95,"Top cpu cpu mem2wb regs_write_enable io_out", false,-1);
        tracep->declBit(c+95,"Top cpu cpu mem2wb regs_write_enable reg_", false,-1);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_source clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_source reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_source io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_source io_flush_enable", false,-1);
        tracep->declBus(c+146,"Top cpu cpu mem2wb regs_write_source io_in", false,-1, 1,0);
        tracep->declBus(c+169,"Top cpu cpu mem2wb regs_write_source io_out", false,-1, 1,0);
        tracep->declBus(c+169,"Top cpu cpu mem2wb regs_write_source reg_", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb regs_write_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb regs_write_address reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb regs_write_address io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb regs_write_address io_flush_enable", false,-1);
        tracep->declBus(c+88,"Top cpu cpu mem2wb regs_write_address io_in", false,-1, 4,0);
        tracep->declBus(c+96,"Top cpu cpu mem2wb regs_write_address io_out", false,-1, 4,0);
        tracep->declBus(c+96,"Top cpu cpu mem2wb regs_write_address reg_", false,-1, 4,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb instruction_address clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb instruction_address reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb instruction_address io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb instruction_address io_flush_enable", false,-1);
        tracep->declBus(c+148,"Top cpu cpu mem2wb instruction_address io_in", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu mem2wb instruction_address io_out", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu mem2wb instruction_address reg_", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu mem2wb csr_read_data clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mem2wb csr_read_data reset", false,-1);
        tracep->declBit(c+367,"Top cpu cpu mem2wb csr_read_data io_write_enable", false,-1);
        tracep->declBit(c+366,"Top cpu cpu mem2wb csr_read_data io_flush_enable", false,-1);
        tracep->declBus(c+153,"Top cpu cpu mem2wb csr_read_data io_in", false,-1, 31,0);
        tracep->declBus(c+172,"Top cpu cpu mem2wb csr_read_data io_out", false,-1, 31,0);
        tracep->declBus(c+172,"Top cpu cpu mem2wb csr_read_data reg_", false,-1, 31,0);
        tracep->declBus(c+167,"Top cpu cpu wb io_instruction_address", false,-1, 31,0);
        tracep->declBus(c+168,"Top cpu cpu wb io_alu_result", false,-1, 31,0);
        tracep->declBus(c+171,"Top cpu cpu wb io_memory_read_data", false,-1, 31,0);
        tracep->declBus(c+169,"Top cpu cpu wb io_regs_write_source", false,-1, 1,0);
        tracep->declBus(c+172,"Top cpu cpu wb io_csr_read_data", false,-1, 31,0);
        tracep->declBus(c+97,"Top cpu cpu wb io_regs_write_data", false,-1, 31,0);
        tracep->declBus(c+83,"Top cpu cpu forwarding io_rs1_id", false,-1, 4,0);
        tracep->declBus(c+84,"Top cpu cpu forwarding io_rs2_id", false,-1, 4,0);
        tracep->declBus(c+173,"Top cpu cpu forwarding io_rs1_ex", false,-1, 4,0);
        tracep->declBus(c+174,"Top cpu cpu forwarding io_rs2_ex", false,-1, 4,0);
        tracep->declBus(c+88,"Top cpu cpu forwarding io_rd_mem", false,-1, 4,0);
        tracep->declBit(c+145,"Top cpu cpu forwarding io_reg_write_enable_mem", false,-1);
        tracep->declBus(c+96,"Top cpu cpu forwarding io_rd_wb", false,-1, 4,0);
        tracep->declBit(c+95,"Top cpu cpu forwarding io_reg_write_enable_wb", false,-1);
        tracep->declBus(c+111,"Top cpu cpu forwarding io_reg1_forward_id", false,-1, 1,0);
        tracep->declBus(c+112,"Top cpu cpu forwarding io_reg2_forward_id", false,-1, 1,0);
        tracep->declBus(c+140,"Top cpu cpu forwarding io_reg1_forward_ex", false,-1, 1,0);
        tracep->declBus(c+141,"Top cpu cpu forwarding io_reg2_forward_ex", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu clint clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu clint reset", false,-1);
        tracep->declBus(c+109,"Top cpu cpu clint io_interrupt_flag", false,-1, 31,0);
        tracep->declBus(c+107,"Top cpu cpu clint io_instruction", false,-1, 31,0);
        tracep->declBus(c+102,"Top cpu cpu clint io_instruction_address_if", false,-1, 31,0);
        tracep->declBit(c+175,"Top cpu cpu clint io_exception_signal", false,-1);
        tracep->declBus(c+176,"Top cpu cpu clint io_instruction_address_cause_exception", false,-1, 31,0);
        tracep->declBus(c+177,"Top cpu cpu clint io_exception_cause", false,-1, 31,0);
        tracep->declBus(c+178,"Top cpu cpu clint io_exception_val", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu clint io_exception_token", false,-1);
        tracep->declBit(c+78,"Top cpu cpu clint io_jump_flag", false,-1);
        tracep->declBus(c+125,"Top cpu cpu clint io_jump_address", false,-1, 31,0);
        tracep->declBus(c+179,"Top cpu cpu clint io_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+180,"Top cpu cpu clint io_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+181,"Top cpu cpu clint io_csr_mstatus", false,-1, 31,0);
        tracep->declBit(c+182,"Top cpu cpu clint io_interrupt_enable", false,-1);
        tracep->declBit(c+82,"Top cpu cpu clint io_ctrl_stall_flag", false,-1);
        tracep->declBit(c+183,"Top cpu cpu clint io_csr_reg_write_enable", false,-1);
        tracep->declBus(c+184,"Top cpu cpu clint io_csr_reg_write_address", false,-1, 11,0);
        tracep->declBus(c+185,"Top cpu cpu clint io_csr_reg_write_data", false,-1, 31,0);
        tracep->declBus(c+114,"Top cpu cpu clint io_id_interrupt_handler_address", false,-1, 31,0);
        tracep->declBit(c+113,"Top cpu cpu clint io_id_interrupt_assert", false,-1);
        tracep->declBus(c+268,"Top cpu cpu clint csr_state", false,-1, 2,0);
        tracep->declBus(c+269,"Top cpu cpu clint instruction_address", false,-1, 31,0);
        tracep->declBus(c+270,"Top cpu cpu clint cause", false,-1, 31,0);
        tracep->declBus(c+271,"Top cpu cpu clint trap_val", false,-1, 31,0);
        tracep->declBit(c+113,"Top cpu cpu clint interrupt_assert", false,-1);
        tracep->declBus(c+114,"Top cpu cpu clint interrupt_handler_address", false,-1, 31,0);
        tracep->declBit(c+183,"Top cpu cpu clint csr_reg_write_enable", false,-1);
        tracep->declBus(c+184,"Top cpu cpu clint csr_reg_write_address", false,-1, 11,0);
        tracep->declBus(c+185,"Top cpu cpu clint csr_reg_write_data", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu clint exception_token", false,-1);
        tracep->declBit(c+272,"Top cpu cpu clint exception_signal", false,-1);
        tracep->declBus(c+273,"Top cpu cpu clint interrupt_state", false,-1, 1,0);
        tracep->declBit(c+334,"Top cpu cpu csr_regs clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu csr_regs reset", false,-1);
        tracep->declBit(c+136,"Top cpu cpu csr_regs io_reg_write_enable_ex", false,-1);
        tracep->declBus(c+123,"Top cpu cpu csr_regs io_reg_read_address_id", false,-1, 11,0);
        tracep->declBus(c+137,"Top cpu cpu csr_regs io_reg_write_address_ex", false,-1, 11,0);
        tracep->declBus(c+143,"Top cpu cpu csr_regs io_reg_write_data_ex", false,-1, 31,0);
        tracep->declBit(c+183,"Top cpu cpu csr_regs io_reg_write_enable_clint", false,-1);
        tracep->declBus(c+184,"Top cpu cpu csr_regs io_reg_write_address_clint", false,-1, 11,0);
        tracep->declBus(c+185,"Top cpu cpu csr_regs io_reg_write_data_clint", false,-1, 31,0);
        tracep->declBit(c+182,"Top cpu cpu csr_regs io_interrupt_enable", false,-1);
        tracep->declBit(c+186,"Top cpu cpu csr_regs io_mmu_enable", false,-1);
        tracep->declBus(c+126,"Top cpu cpu csr_regs io_id_reg_data", false,-1, 31,0);
        tracep->declBit(c+89,"Top cpu cpu csr_regs io_start_paging", false,-1);
        tracep->declBus(c+179,"Top cpu cpu csr_regs io_clint_csr_mtvec", false,-1, 31,0);
        tracep->declBus(c+180,"Top cpu cpu csr_regs io_clint_csr_mepc", false,-1, 31,0);
        tracep->declBus(c+181,"Top cpu cpu csr_regs io_clint_csr_mstatus", false,-1, 31,0);
        tracep->declBus(c+187,"Top cpu cpu csr_regs io_mmu_csr_satp", false,-1, 31,0);
        tracep->declQuad(c+274,"Top cpu cpu csr_regs cycles", false,-1, 63,0);
        tracep->declBus(c+179,"Top cpu cpu csr_regs mtvec", false,-1, 31,0);
        tracep->declBus(c+276,"Top cpu cpu csr_regs mcause", false,-1, 31,0);
        tracep->declBus(c+180,"Top cpu cpu csr_regs mepc", false,-1, 31,0);
        tracep->declBus(c+277,"Top cpu cpu csr_regs mie", false,-1, 31,0);
        tracep->declBus(c+181,"Top cpu cpu csr_regs mstatus", false,-1, 31,0);
        tracep->declBus(c+278,"Top cpu cpu csr_regs mscratch", false,-1, 31,0);
        tracep->declBus(c+279,"Top cpu cpu csr_regs mtval", false,-1, 31,0);
        tracep->declBus(c+187,"Top cpu cpu csr_regs satp", false,-1, 31,0);
        tracep->declBus(c+280,"Top cpu cpu csr_regs reg_write_address", false,-1, 11,0);
        tracep->declBus(c+281,"Top cpu cpu csr_regs reg_write_data", false,-1, 31,0);
        tracep->declBit(c+334,"Top cpu cpu axi4_master clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu axi4_master reset", false,-1);
        tracep->declBit(c+45,"Top cpu cpu axi4_master io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top cpu cpu axi4_master io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top cpu cpu axi4_master io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top cpu cpu axi4_master io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top cpu cpu axi4_master io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top cpu cpu axi4_master io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top cpu cpu axi4_master io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top cpu cpu axi4_master io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top cpu cpu axi4_master io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top cpu cpu axi4_master io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top cpu cpu axi4_master io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top cpu cpu axi4_master io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top cpu cpu axi4_master io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top cpu cpu axi4_master io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top cpu cpu axi4_master io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+365,"Top cpu cpu axi4_master io_channels_read_data_channel_RRESP", false,-1, 1,0);
        tracep->declBit(c+188,"Top cpu cpu axi4_master io_bundle_read", false,-1);
        tracep->declBit(c+189,"Top cpu cpu axi4_master io_bundle_write", false,-1);
        tracep->declBus(c+331,"Top cpu cpu axi4_master io_bundle_read_data", false,-1, 31,0);
        tracep->declBus(c+190,"Top cpu cpu axi4_master io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+191,"Top cpu cpu axi4_master io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+192,"Top cpu cpu axi4_master io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+193,"Top cpu cpu axi4_master io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+194,"Top cpu cpu axi4_master io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+59,"Top cpu cpu axi4_master io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+195,"Top cpu cpu axi4_master io_bundle_busy", false,-1);
        tracep->declBit(c+196,"Top cpu cpu axi4_master io_bundle_read_valid", false,-1);
        tracep->declBit(c+197,"Top cpu cpu axi4_master io_bundle_write_valid", false,-1);
        tracep->declBus(c+282,"Top cpu cpu axi4_master state", false,-1, 2,0);
        tracep->declBus(c+283,"Top cpu cpu axi4_master addr", false,-1, 31,0);
        tracep->declBit(c+196,"Top cpu cpu axi4_master read_valid", false,-1);
        tracep->declBit(c+197,"Top cpu cpu axi4_master write_valid", false,-1);
        tracep->declBus(c+50,"Top cpu cpu axi4_master write_data", false,-1, 31,0);
        tracep->declBit(c+284,"Top cpu cpu axi4_master write_strobe_0", false,-1);
        tracep->declBit(c+285,"Top cpu cpu axi4_master write_strobe_1", false,-1);
        tracep->declBit(c+286,"Top cpu cpu axi4_master write_strobe_2", false,-1);
        tracep->declBit(c+287,"Top cpu cpu axi4_master write_strobe_3", false,-1);
        tracep->declBit(c+54,"Top cpu cpu axi4_master ARVALID", false,-1);
        tracep->declBit(c+58,"Top cpu cpu axi4_master RREADY", false,-1);
        tracep->declBit(c+45,"Top cpu cpu axi4_master AWVALID", false,-1);
        tracep->declBit(c+48,"Top cpu cpu axi4_master WVALID", false,-1);
        tracep->declBus(c+288,"Top cpu cpu axi4_master io_channels_write_data_channel_WSTRB_lo", false,-1, 1,0);
        tracep->declBus(c+289,"Top cpu cpu axi4_master io_channels_write_data_channel_WSTRB_hi", false,-1, 1,0);
        tracep->declBit(c+53,"Top cpu cpu axi4_master BREADY", false,-1);
        tracep->declBit(c+334,"Top cpu cpu mmu clock", false,-1);
        tracep->declBit(c+335,"Top cpu cpu mmu reset", false,-1);
        tracep->declBus(c+149,"Top cpu cpu mmu io_instructions", false,-1, 31,0);
        tracep->declBus(c+148,"Top cpu cpu mmu io_instructions_address", false,-1, 31,0);
        tracep->declBus(c+198,"Top cpu cpu mmu io_ppn_from_satp", false,-1, 19,0);
        tracep->declBus(c+199,"Top cpu cpu mmu io_virtual_address", false,-1, 31,0);
        tracep->declBit(c+200,"Top cpu cpu mmu io_mmu_occupied_by_mem", false,-1);
        tracep->declBit(c+201,"Top cpu cpu mmu io_restart", false,-1);
        tracep->declBit(c+202,"Top cpu cpu mmu io_restart_done", false,-1);
        tracep->declBit(c+203,"Top cpu cpu mmu io_pa_valid", false,-1);
        tracep->declBus(c+204,"Top cpu cpu mmu io_pa", false,-1, 31,0);
        tracep->declBit(c+175,"Top cpu cpu mmu io_page_fault_signals", false,-1);
        tracep->declBus(c+178,"Top cpu cpu mmu io_va_cause_page_fault", false,-1, 31,0);
        tracep->declBus(c+177,"Top cpu cpu mmu io_ecause", false,-1, 31,0);
        tracep->declBus(c+176,"Top cpu cpu mmu io_epc", false,-1, 31,0);
        tracep->declBit(c+155,"Top cpu cpu mmu io_page_fault_responed", false,-1);
        tracep->declBit(c+205,"Top cpu cpu mmu io_bus_read", false,-1);
        tracep->declBus(c+206,"Top cpu cpu mmu io_bus_address", false,-1, 31,0);
        tracep->declBus(c+333,"Top cpu cpu mmu io_bus_read_data", false,-1, 31,0);
        tracep->declBit(c+207,"Top cpu cpu mmu io_bus_read_valid", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu io_bus_write", false,-1);
        tracep->declBus(c+209,"Top cpu cpu mmu io_bus_write_data", false,-1, 31,0);
        tracep->declBit(c+208,"Top cpu cpu mmu io_bus_write_strobe_0", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu io_bus_write_strobe_1", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu io_bus_write_strobe_2", false,-1);
        tracep->declBit(c+208,"Top cpu cpu mmu io_bus_write_strobe_3", false,-1);
        tracep->declBit(c+210,"Top cpu cpu mmu io_bus_write_valid", false,-1);
        tracep->declBit(c+211,"Top cpu cpu mmu io_bus_granted", false,-1);
        tracep->declBus(c+290,"Top cpu cpu mmu opcode", false,-1, 6,0);
        tracep->declBus(c+291,"Top cpu cpu mmu state", false,-1, 2,0);
        tracep->declBus(c+292,"Top cpu cpu mmu vpn1", false,-1, 9,0);
        tracep->declBus(c+293,"Top cpu cpu mmu vpn0", false,-1, 9,0);
        tracep->declBus(c+294,"Top cpu cpu mmu pageoffset", false,-1, 11,0);
        tracep->declBus(c+295,"Top cpu cpu mmu pte1", false,-1, 31,0);
        tracep->declBus(c+296,"Top cpu cpu mmu pte0", false,-1, 31,0);
        tracep->declBit(c+175,"Top cpu cpu mmu page_fault_signals", false,-1);
        tracep->declBit(c+297,"Top cpu cpu mmu instructionInvalid", false,-1);
        tracep->declBit(c+298,"Top cpu cpu mmu storeInvalid", false,-1);
        tracep->declBit(c+299,"Top cpu cpu mmu loadInvalid", false,-1);
        tracep->declBit(c+334,"Top dummy clock", false,-1);
        tracep->declBit(c+335,"Top dummy reset", false,-1);
        tracep->declBit(c+60,"Top dummy io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top dummy io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+62,"Top dummy io_channels_write_address_channel_AWADDR", false,-1, 3,0);
        tracep->declBit(c+63,"Top dummy io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top dummy io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top dummy io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top dummy io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top dummy io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top dummy io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top dummy io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top dummy io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+71,"Top dummy io_channels_read_address_channel_ARADDR", false,-1, 3,0);
        tracep->declBit(c+72,"Top dummy io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top dummy io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top dummy io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+334,"Top dummy slave_clock", false,-1);
        tracep->declBit(c+335,"Top dummy slave_reset", false,-1);
        tracep->declBit(c+60,"Top dummy slave_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top dummy slave_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+300,"Top dummy slave_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+63,"Top dummy slave_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top dummy slave_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top dummy slave_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top dummy slave_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top dummy slave_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top dummy slave_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top dummy slave_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top dummy slave_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+301,"Top dummy slave_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top dummy slave_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top dummy slave_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top dummy slave_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+302,"Top dummy slave_io_bundle_read", false,-1);
        tracep->declBit(c+303,"Top dummy slave_io_bundle_write", false,-1);
        tracep->declBus(c+364,"Top dummy slave_io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+367,"Top dummy slave_io_bundle_read_valid", false,-1);
        tracep->declBus(c+304,"Top dummy slave_io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+305,"Top dummy slave_io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+306,"Top dummy slave_io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+307,"Top dummy slave_io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+308,"Top dummy slave_io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+309,"Top dummy slave_io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+334,"Top dummy slave clock", false,-1);
        tracep->declBit(c+335,"Top dummy slave reset", false,-1);
        tracep->declBit(c+60,"Top dummy slave io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top dummy slave io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+300,"Top dummy slave io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+63,"Top dummy slave io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top dummy slave io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top dummy slave io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top dummy slave io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top dummy slave io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top dummy slave io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top dummy slave io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top dummy slave io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+301,"Top dummy slave io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top dummy slave io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top dummy slave io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top dummy slave io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+302,"Top dummy slave io_bundle_read", false,-1);
        tracep->declBit(c+303,"Top dummy slave io_bundle_write", false,-1);
        tracep->declBus(c+364,"Top dummy slave io_bundle_read_data", false,-1, 31,0);
        tracep->declBit(c+367,"Top dummy slave io_bundle_read_valid", false,-1);
        tracep->declBus(c+304,"Top dummy slave io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+305,"Top dummy slave io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+306,"Top dummy slave io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+307,"Top dummy slave io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+308,"Top dummy slave io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+309,"Top dummy slave io_bundle_address", false,-1, 31,0);
        tracep->declBus(c+310,"Top dummy slave state", false,-1, 2,0);
        tracep->declBus(c+309,"Top dummy slave addr", false,-1, 31,0);
        tracep->declBit(c+302,"Top dummy slave read", false,-1);
        tracep->declBit(c+303,"Top dummy slave write", false,-1);
        tracep->declBus(c+304,"Top dummy slave write_data", false,-1, 31,0);
        tracep->declBit(c+305,"Top dummy slave write_strobe_0", false,-1);
        tracep->declBit(c+306,"Top dummy slave write_strobe_1", false,-1);
        tracep->declBit(c+307,"Top dummy slave write_strobe_2", false,-1);
        tracep->declBit(c+308,"Top dummy slave write_strobe_3", false,-1);
        tracep->declBit(c+70,"Top dummy slave ARREADY", false,-1);
        tracep->declBit(c+72,"Top dummy slave RVALID", false,-1);
        tracep->declBit(c+61,"Top dummy slave AWREADY", false,-1);
        tracep->declBit(c+64,"Top dummy slave WREADY", false,-1);
        tracep->declBit(c+67,"Top dummy slave BVALID", false,-1);
        tracep->declBit(c+334,"Top bus_switch clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch reset", false,-1);
        tracep->declBus(c+59,"Top bus_switch io_address", false,-1, 31,0);
        tracep->declBit(c+1,"Top bus_switch io_slaves_0_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+2,"Top bus_switch io_slaves_0_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+3,"Top bus_switch io_slaves_0_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+4,"Top bus_switch io_slaves_0_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+5,"Top bus_switch io_slaves_0_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+6,"Top bus_switch io_slaves_0_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+7,"Top bus_switch io_slaves_0_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+8,"Top bus_switch io_slaves_0_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+9,"Top bus_switch io_slaves_0_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+10,"Top bus_switch io_slaves_0_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+11,"Top bus_switch io_slaves_0_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+12,"Top bus_switch io_slaves_0_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+13,"Top bus_switch io_slaves_0_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+14,"Top bus_switch io_slaves_0_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+339,"Top bus_switch io_slaves_0_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch io_slaves_1_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_1_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch io_slaves_1_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_1_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch io_slaves_1_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_1_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+23,"Top bus_switch io_slaves_2_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+24,"Top bus_switch io_slaves_2_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+25,"Top bus_switch io_slaves_2_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+26,"Top bus_switch io_slaves_2_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+27,"Top bus_switch io_slaves_2_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+28,"Top bus_switch io_slaves_2_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+29,"Top bus_switch io_slaves_2_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+30,"Top bus_switch io_slaves_2_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+31,"Top bus_switch io_slaves_2_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+32,"Top bus_switch io_slaves_2_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+33,"Top bus_switch io_slaves_2_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+34,"Top bus_switch io_slaves_2_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+35,"Top bus_switch io_slaves_2_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+36,"Top bus_switch io_slaves_2_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+349,"Top bus_switch io_slaves_2_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch io_slaves_3_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_3_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch io_slaves_3_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_3_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch io_slaves_3_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_3_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch io_slaves_4_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_4_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch io_slaves_4_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_4_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch io_slaves_4_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_4_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch io_slaves_5_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_5_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch io_slaves_5_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_5_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch io_slaves_5_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_5_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+61,"Top bus_switch io_slaves_6_write_address_channel_AWREADY", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_6_write_data_channel_WREADY", false,-1);
        tracep->declBit(c+67,"Top bus_switch io_slaves_6_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_6_read_address_channel_ARREADY", false,-1);
        tracep->declBit(c+72,"Top bus_switch io_slaves_6_read_data_channel_RVALID", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_6_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+60,"Top bus_switch io_slaves_7_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch io_slaves_7_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+74,"Top bus_switch io_slaves_7_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+63,"Top bus_switch io_slaves_7_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch io_slaves_7_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+65,"Top bus_switch io_slaves_7_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+66,"Top bus_switch io_slaves_7_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch io_slaves_7_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+68,"Top bus_switch io_slaves_7_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+69,"Top bus_switch io_slaves_7_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch io_slaves_7_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+75,"Top bus_switch io_slaves_7_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch io_slaves_7_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+73,"Top bus_switch io_slaves_7_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch io_slaves_7_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+45,"Top bus_switch io_master_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+46,"Top bus_switch io_master_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+47,"Top bus_switch io_master_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+48,"Top bus_switch io_master_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+49,"Top bus_switch io_master_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+50,"Top bus_switch io_master_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+51,"Top bus_switch io_master_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+52,"Top bus_switch io_master_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+53,"Top bus_switch io_master_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+54,"Top bus_switch io_master_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+55,"Top bus_switch io_master_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+56,"Top bus_switch io_master_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+57,"Top bus_switch io_master_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+58,"Top bus_switch io_master_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+331,"Top bus_switch io_master_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+334,"Top bus_switch dummy_clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch dummy_reset", false,-1);
        tracep->declBit(c+311,"Top bus_switch dummy_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch dummy_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+312,"Top bus_switch dummy_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+313,"Top bus_switch dummy_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch dummy_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+314,"Top bus_switch dummy_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+315,"Top bus_switch dummy_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch dummy_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+316,"Top bus_switch dummy_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+317,"Top bus_switch dummy_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch dummy_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+318,"Top bus_switch dummy_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch dummy_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+319,"Top bus_switch dummy_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+320,"Top bus_switch index", false,-1, 2,0);
        tracep->declBit(c+334,"Top bus_switch dummy clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch dummy reset", false,-1);
        tracep->declBit(c+311,"Top bus_switch dummy io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch dummy io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+312,"Top bus_switch dummy io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+313,"Top bus_switch dummy io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch dummy io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+314,"Top bus_switch dummy io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+315,"Top bus_switch dummy io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch dummy io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+316,"Top bus_switch dummy io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+317,"Top bus_switch dummy io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch dummy io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+318,"Top bus_switch dummy io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch dummy io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+319,"Top bus_switch dummy io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBit(c+334,"Top bus_switch dummy master_clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch dummy master_reset", false,-1);
        tracep->declBit(c+311,"Top bus_switch dummy master_io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch dummy master_io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+312,"Top bus_switch dummy master_io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+313,"Top bus_switch dummy master_io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch dummy master_io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+314,"Top bus_switch dummy master_io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+315,"Top bus_switch dummy master_io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch dummy master_io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+316,"Top bus_switch dummy master_io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+317,"Top bus_switch dummy master_io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch dummy master_io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+318,"Top bus_switch dummy master_io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch dummy master_io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+319,"Top bus_switch dummy master_io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy master_io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+365,"Top bus_switch dummy master_io_channels_read_data_channel_RRESP", false,-1, 1,0);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_read", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_write", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy master_io_bundle_read_data", false,-1, 31,0);
        tracep->declBus(c+368,"Top bus_switch dummy master_io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master_io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+368,"Top bus_switch dummy master_io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+321,"Top bus_switch dummy master_io_bundle_busy", false,-1);
        tracep->declBit(c+322,"Top bus_switch dummy master_io_bundle_read_valid", false,-1);
        tracep->declBit(c+323,"Top bus_switch dummy master_io_bundle_write_valid", false,-1);
        tracep->declBit(c+334,"Top bus_switch dummy master clock", false,-1);
        tracep->declBit(c+335,"Top bus_switch dummy master reset", false,-1);
        tracep->declBit(c+311,"Top bus_switch dummy master io_channels_write_address_channel_AWVALID", false,-1);
        tracep->declBit(c+61,"Top bus_switch dummy master io_channels_write_address_channel_AWREADY", false,-1);
        tracep->declBus(c+312,"Top bus_switch dummy master io_channels_write_address_channel_AWADDR", false,-1, 31,0);
        tracep->declBit(c+313,"Top bus_switch dummy master io_channels_write_data_channel_WVALID", false,-1);
        tracep->declBit(c+64,"Top bus_switch dummy master io_channels_write_data_channel_WREADY", false,-1);
        tracep->declBus(c+314,"Top bus_switch dummy master io_channels_write_data_channel_WDATA", false,-1, 31,0);
        tracep->declBus(c+315,"Top bus_switch dummy master io_channels_write_data_channel_WSTRB", false,-1, 3,0);
        tracep->declBit(c+67,"Top bus_switch dummy master io_channels_write_response_channel_BVALID", false,-1);
        tracep->declBit(c+316,"Top bus_switch dummy master io_channels_write_response_channel_BREADY", false,-1);
        tracep->declBit(c+317,"Top bus_switch dummy master io_channels_read_address_channel_ARVALID", false,-1);
        tracep->declBit(c+70,"Top bus_switch dummy master io_channels_read_address_channel_ARREADY", false,-1);
        tracep->declBus(c+318,"Top bus_switch dummy master io_channels_read_address_channel_ARADDR", false,-1, 31,0);
        tracep->declBit(c+72,"Top bus_switch dummy master io_channels_read_data_channel_RVALID", false,-1);
        tracep->declBit(c+319,"Top bus_switch dummy master io_channels_read_data_channel_RREADY", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy master io_channels_read_data_channel_RDATA", false,-1, 31,0);
        tracep->declBus(c+365,"Top bus_switch dummy master io_channels_read_data_channel_RRESP", false,-1, 1,0);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_read", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_write", false,-1);
        tracep->declBus(c+364,"Top bus_switch dummy master io_bundle_read_data", false,-1, 31,0);
        tracep->declBus(c+368,"Top bus_switch dummy master io_bundle_write_data", false,-1, 31,0);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_write_strobe_0", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_write_strobe_1", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_write_strobe_2", false,-1);
        tracep->declBit(c+366,"Top bus_switch dummy master io_bundle_write_strobe_3", false,-1);
        tracep->declBus(c+368,"Top bus_switch dummy master io_bundle_address", false,-1, 31,0);
        tracep->declBit(c+321,"Top bus_switch dummy master io_bundle_busy", false,-1);
        tracep->declBit(c+322,"Top bus_switch dummy master io_bundle_read_valid", false,-1);
        tracep->declBit(c+323,"Top bus_switch dummy master io_bundle_write_valid", false,-1);
        tracep->declBus(c+324,"Top bus_switch dummy master state", false,-1, 2,0);
        tracep->declBus(c+314,"Top bus_switch dummy master addr", false,-1, 31,0);
        tracep->declBit(c+322,"Top bus_switch dummy master read_valid", false,-1);
        tracep->declBit(c+323,"Top bus_switch dummy master write_valid", false,-1);
        tracep->declBus(c+314,"Top bus_switch dummy master write_data", false,-1, 31,0);
        tracep->declBit(c+325,"Top bus_switch dummy master write_strobe_0", false,-1);
        tracep->declBit(c+326,"Top bus_switch dummy master write_strobe_1", false,-1);
        tracep->declBit(c+327,"Top bus_switch dummy master write_strobe_2", false,-1);
        tracep->declBit(c+328,"Top bus_switch dummy master write_strobe_3", false,-1);
        tracep->declBit(c+317,"Top bus_switch dummy master ARVALID", false,-1);
        tracep->declBit(c+319,"Top bus_switch dummy master RREADY", false,-1);
        tracep->declBit(c+311,"Top bus_switch dummy master AWVALID", false,-1);
        tracep->declBit(c+313,"Top bus_switch dummy master WVALID", false,-1);
        tracep->declBus(c+329,"Top bus_switch dummy master io_channels_write_data_channel_WSTRB_lo", false,-1, 1,0);
        tracep->declBus(c+330,"Top bus_switch dummy master io_channels_write_data_channel_WSTRB_hi", false,-1, 1,0);
        tracep->declBit(c+316,"Top bus_switch dummy master BREADY", false,-1);
    }
}

void VTop::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VTop::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VTop::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
        tracep->fullBit(oldp+2,(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY));
        tracep->fullIData(oldp+3,(((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                    : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
        tracep->fullBit(oldp+4,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID));
        tracep->fullBit(oldp+5,(vlTOPp->Top__DOT__mem_slave__DOT__WREADY));
        tracep->fullIData(oldp+6,(((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                 >> 0x1dU)))
                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                    : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
        tracep->fullCData(oldp+7,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB),4);
        tracep->fullBit(oldp+8,(vlTOPp->Top__DOT__mem_slave__DOT__BVALID));
        tracep->fullBit(oldp+9,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY));
        tracep->fullBit(oldp+10,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID));
        tracep->fullBit(oldp+11,(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY));
        tracep->fullIData(oldp+12,(((0U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
        tracep->fullBit(oldp+13,(vlTOPp->Top__DOT__mem_slave__DOT__RVALID));
        tracep->fullBit(oldp+14,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY));
        tracep->fullBit(oldp+15,(vlTOPp->Top__DOT__mem_slave__DOT__read));
        tracep->fullBit(oldp+16,(vlTOPp->Top__DOT__mem_slave__DOT__write));
        tracep->fullIData(oldp+17,(vlTOPp->Top__DOT__mem_slave__DOT__write_data),32);
        tracep->fullBit(oldp+18,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0));
        tracep->fullBit(oldp+19,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1));
        tracep->fullBit(oldp+20,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2));
        tracep->fullBit(oldp+21,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3));
        tracep->fullIData(oldp+22,(vlTOPp->Top__DOT__mem_slave__DOT__addr),32);
        tracep->fullBit(oldp+23,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID));
        tracep->fullBit(oldp+24,(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY));
        tracep->fullIData(oldp+25,(((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
        tracep->fullBit(oldp+26,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID));
        tracep->fullBit(oldp+27,(vlTOPp->Top__DOT__uart_slave__DOT__WREADY));
        tracep->fullIData(oldp+28,(((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
        tracep->fullCData(oldp+29,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB),4);
        tracep->fullBit(oldp+30,(vlTOPp->Top__DOT__uart_slave__DOT__BVALID));
        tracep->fullBit(oldp+31,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY));
        tracep->fullBit(oldp+32,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID));
        tracep->fullBit(oldp+33,(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY));
        tracep->fullIData(oldp+34,(((2U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
        tracep->fullBit(oldp+35,(vlTOPp->Top__DOT__uart_slave__DOT__RVALID));
        tracep->fullBit(oldp+36,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY));
        tracep->fullBit(oldp+37,(vlTOPp->Top__DOT__uart_slave__DOT__read));
        tracep->fullBit(oldp+38,(vlTOPp->Top__DOT__uart_slave__DOT__write));
        tracep->fullIData(oldp+39,(vlTOPp->Top__DOT__uart_slave__DOT__write_data),32);
        tracep->fullBit(oldp+40,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0));
        tracep->fullBit(oldp+41,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1));
        tracep->fullBit(oldp+42,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2));
        tracep->fullBit(oldp+43,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3));
        tracep->fullIData(oldp+44,(vlTOPp->Top__DOT__uart_slave__DOT__addr),32);
        tracep->fullBit(oldp+45,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID));
        tracep->fullBit(oldp+46,(vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY));
        tracep->fullIData(oldp+47,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR),32);
        tracep->fullBit(oldp+48,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID));
        tracep->fullBit(oldp+49,(vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY));
        tracep->fullIData(oldp+50,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data),32);
        tracep->fullCData(oldp+51,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB),4);
        tracep->fullBit(oldp+52,(vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID));
        tracep->fullBit(oldp+53,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY));
        tracep->fullBit(oldp+54,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID));
        tracep->fullBit(oldp+55,(((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                   ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                   : ((6U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                       ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                       : ((5U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                     >> 0x1dU)))
                                           ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                           : ((4U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
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
                                                     : (IData)(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY))))))))));
        tracep->fullIData(oldp+56,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR),32);
        tracep->fullBit(oldp+57,(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID));
        tracep->fullBit(oldp+58,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY));
        tracep->fullIData(oldp+59,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address),32);
        tracep->fullBit(oldp+60,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID));
        tracep->fullBit(oldp+61,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY));
        tracep->fullCData(oldp+62,((0xfU & ((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                             : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR))),4);
        tracep->fullBit(oldp+63,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID));
        tracep->fullBit(oldp+64,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY));
        tracep->fullIData(oldp+65,(((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
        tracep->fullCData(oldp+66,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB),4);
        tracep->fullBit(oldp+67,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID));
        tracep->fullBit(oldp+68,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY));
        tracep->fullBit(oldp+69,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID));
        tracep->fullBit(oldp+70,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY));
        tracep->fullCData(oldp+71,((0xfU & ((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                             : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR))),4);
        tracep->fullBit(oldp+72,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID));
        tracep->fullBit(oldp+73,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY));
        tracep->fullIData(oldp+74,(((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
        tracep->fullIData(oldp+75,(((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                  >> 0x1dU)))
                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                     : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
        tracep->fullCData(oldp+76,(vlTOPp->Top__DOT__mem_slave__DOT__state),3);
        tracep->fullCData(oldp+77,(vlTOPp->Top__DOT__uart_slave__DOT__state),3);
        tracep->fullBit(oldp+78,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag));
        tracep->fullBit(oldp+79,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction));
        tracep->fullBit(oldp+80,((1U & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                                        | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))));
        tracep->fullBit(oldp+81,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag));
        tracep->fullBit(oldp+82,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag));
        tracep->fullCData(oldp+83,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
        tracep->fullCData(oldp+84,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+85,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_));
        tracep->fullCData(oldp+86,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),5);
        tracep->fullBit(oldp+87,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_));
        tracep->fullCData(oldp+88,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),5);
        tracep->fullBit(oldp+89,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging));
        tracep->fullBit(oldp+90,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush));
        tracep->fullBit(oldp+91,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush));
        tracep->fullBit(oldp+92,((1U & ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
                                          | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag)) 
                                         | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard)) 
                                        | ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                                           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))))));
        tracep->fullBit(oldp+93,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall));
        tracep->fullBit(oldp+94,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall));
        tracep->fullBit(oldp+95,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_));
        tracep->fullCData(oldp+96,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),5);
        tracep->fullIData(oldp+97,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data),32);
        tracep->fullIData(oldp+98,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1),32);
        tracep->fullIData(oldp+99,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2),32);
        tracep->fullIData(oldp+100,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address),32);
        tracep->fullIData(oldp+101,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address),32);
        tracep->fullIData(oldp+102,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
        tracep->fullBit(oldp+103,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid));
        tracep->fullBit(oldp+104,(((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                   & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state)))));
        tracep->fullBit(oldp+105,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid));
        tracep->fullBit(oldp+106,((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
        tracep->fullIData(oldp+107,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_),32);
        tracep->fullIData(oldp+108,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_),32);
        tracep->fullIData(oldp+109,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_),32);
        tracep->fullIData(oldp+110,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data),32);
        tracep->fullCData(oldp+111,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id),2);
        tracep->fullCData(oldp+112,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id),2);
        tracep->fullBit(oldp+113,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert));
        tracep->fullIData(oldp+114,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address),32);
        tracep->fullIData(oldp+115,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate),32);
        tracep->fullBit(oldp+116,((((0x17U == (0x7fU 
                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                    | (0x63U == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                   | (0x6fU == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))));
        tracep->fullBit(oldp+117,((0x33U != (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        tracep->fullBit(oldp+118,((3U == (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        tracep->fullBit(oldp+119,((0x23U == (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
        tracep->fullCData(oldp+120,(((0x67U == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                      ? 3U : ((0x6fU 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                               ? 3U
                                               : ((0x73U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                                   ? 2U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                                    ? 1U
                                                    : 0U))))),2);
        tracep->fullBit(oldp+121,(((((((((0x33U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                        | (3U == (0x7fU 
                                                  & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                      | (0x37U == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                     | (0x6fU == (0x7fU 
                                                  & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                    | (0x67U == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                   | (0x73U == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))));
        tracep->fullCData(oldp+122,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 7U))),5);
        tracep->fullSData(oldp+123,((0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0x14U))),12);
        tracep->fullBit(oldp+124,(((0x73U == (0x7fU 
                                              & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                   & ((((((1U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU))) 
                                          | (5U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))) 
                                         | (2U == (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0xcU)))) 
                                        | (6U == (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))) 
                                       | (3U == (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))) 
                                      | (7U == (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))))));
        tracep->fullIData(oldp+125,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address),32);
        tracep->fullIData(oldp+126,(((0x180U == (0xfffU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0x14U)))
                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                                      : ((0x343U == 
                                          (0xfffU & 
                                           (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                            >> 0x14U)))
                                          ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval
                                          : ((0x340U 
                                              == (0xfffU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U)))
                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                              : ((0x300U 
                                                  == 
                                                  (0xfffU 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0x14U)))
                                                  ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus
                                                  : 
                                                 ((0x304U 
                                                   == 
                                                   (0xfffU 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0x14U)))
                                                   ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie
                                                   : 
                                                  ((0x341U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0x14U)))
                                                    ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc
                                                    : 
                                                   ((0x342U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0x14U)))
                                                     ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause
                                                     : 
                                                    ((0x305U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                          >> 0x14U)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec
                                                      : 
                                                     ((0xc80U 
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
                                                        : 0U))))))))))),32);
        tracep->fullIData(oldp+127,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_),32);
        tracep->fullIData(oldp+128,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_),32);
        tracep->fullBit(oldp+129,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_));
        tracep->fullCData(oldp+130,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_),2);
        tracep->fullIData(oldp+131,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_),32);
        tracep->fullIData(oldp+132,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_),32);
        tracep->fullIData(oldp+133,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_),32);
        tracep->fullBit(oldp+134,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_));
        tracep->fullBit(oldp+135,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_));
        tracep->fullBit(oldp+136,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_));
        tracep->fullSData(oldp+137,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_),12);
        tracep->fullBit(oldp+138,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_));
        tracep->fullIData(oldp+139,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_),32);
        tracep->fullCData(oldp+140,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex),2);
        tracep->fullCData(oldp+141,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex),2);
        tracep->fullIData(oldp+142,((IData)((0x7fffffffffffffffULL 
                                             & ((1U 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                 ? (QData)((IData)(
                                                                   (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                    + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                  ? (QData)((IData)(
                                                                    (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1 
                                                                     - vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct))
                                                   ? 
                                                  ((QData)((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1)) 
                                                   << 
                                                   (0x1fU 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2))
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
                                                                               < vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2)))))))))))))))),32);
        tracep->fullIData(oldp+143,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data),32);
        tracep->fullIData(oldp+144,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),32);
        tracep->fullBit(oldp+145,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_));
        tracep->fullCData(oldp+146,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_),2);
        tracep->fullIData(oldp+147,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),32);
        tracep->fullIData(oldp+148,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_),32);
        tracep->fullIData(oldp+149,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_),32);
        tracep->fullIData(oldp+150,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_),32);
        tracep->fullBit(oldp+151,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
        tracep->fullIData(oldp+152,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_),32);
        tracep->fullIData(oldp+153,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_),32);
        tracep->fullCData(oldp+154,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+155,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token));
        tracep->fullBit(oldp+156,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
                                      & (0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))))));
        tracep->fullBit(oldp+157,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid));
        tracep->fullBit(oldp+158,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                            & (2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))))))));
        tracep->fullIData(oldp+159,((IData)(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                                              ? 0ULL
                                              : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
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
                                                   : 0ULL))))),32);
        tracep->fullBit(oldp+160,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                            & ((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                                ? (0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
        tracep->fullBit(oldp+161,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                            & ((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                                ? (1U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
        tracep->fullBit(oldp+162,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                            & ((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                                ? (2U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
        tracep->fullBit(oldp+163,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                   & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                         & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                            & ((0U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                                ? (3U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
        tracep->fullBit(oldp+164,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid));
        tracep->fullBit(oldp+165,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
        tracep->fullBit(oldp+166,((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
        tracep->fullIData(oldp+167,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_),32);
        tracep->fullIData(oldp+168,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_),32);
        tracep->fullCData(oldp+169,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_),2);
        tracep->fullIData(oldp+170,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),32);
        tracep->fullIData(oldp+171,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_),32);
        tracep->fullIData(oldp+172,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_),32);
        tracep->fullCData(oldp+173,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+174,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                              >> 0x14U))),5);
        tracep->fullBit(oldp+175,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals));
        tracep->fullIData(oldp+176,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                      ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                          ? 0U : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
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
                                      : 0U)),32);
        tracep->fullIData(oldp+177,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187),32);
        tracep->fullIData(oldp+178,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                      ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                          ? 0U : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                   ? 0U
                                                   : 
                                                  ((2U 
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
                                      : 0U)),32);
        tracep->fullIData(oldp+179,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
        tracep->fullIData(oldp+180,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
        tracep->fullIData(oldp+181,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
        tracep->fullBit(oldp+182,((1U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                         >> 3U))));
        tracep->fullBit(oldp+183,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable));
        tracep->fullSData(oldp+184,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address),12);
        tracep->fullIData(oldp+185,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data),32);
        tracep->fullBit(oldp+186,((1U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                                         >> 0x1fU))));
        tracep->fullIData(oldp+187,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp),32);
        tracep->fullBit(oldp+188,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read));
        tracep->fullBit(oldp+189,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write));
        tracep->fullIData(oldp+190,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                      | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                      ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                          ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                              ? 0U : 
                                             ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                               ? 0U
                                               : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137))
                                          : 0U) : (
                                                   (2U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                                    ? (IData)(
                                                              ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
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
                                                    : 0U))),32);
        tracep->fullBit(oldp+191,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                    | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                                    : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                       & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                          & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                             & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                & ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 
                                                      (0U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                       : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))))));
        tracep->fullBit(oldp+192,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                    | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                                    : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                       & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                          & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                             & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                & ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 
                                                      (1U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                       : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))))));
        tracep->fullBit(oldp+193,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                    | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                                    : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                       & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                          & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                             & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                & ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 
                                                      (2U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                       : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))))));
        tracep->fullBit(oldp+194,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                    | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                    ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                       & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))
                                    : ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                       & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                          & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                             & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                                & ((0U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                                   & ((0U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                           >> 0xcU)))
                                                       ? 
                                                      (3U 
                                                       == 
                                                       (3U 
                                                        & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address))
                                                       : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))))));
        tracep->fullBit(oldp+195,((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))));
        tracep->fullBit(oldp+196,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
        tracep->fullBit(oldp+197,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid));
        tracep->fullIData(oldp+198,((0xfffffU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp)),20);
        tracep->fullIData(oldp+199,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address),32);
        tracep->fullBit(oldp+200,((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
        tracep->fullBit(oldp+201,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart));
        tracep->fullBit(oldp+202,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done));
        tracep->fullBit(oldp+203,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid));
        tracep->fullIData(oldp+204,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa),32);
        tracep->fullBit(oldp+205,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                   & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                      | ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                         & ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                            & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)) 
                                               & (~ 
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
                                                          >> 8U))))))))))));
        tracep->fullIData(oldp+206,((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184)),32);
        tracep->fullBit(oldp+207,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid));
        tracep->fullBit(oldp+208,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                   & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))));
        tracep->fullIData(oldp+209,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                      ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                          ? 0U : ((1U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                   ? 0U
                                                   : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137))
                                      : 0U)),32);
        tracep->fullBit(oldp+210,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid));
        tracep->fullBit(oldp+211,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted));
        tracep->fullCData(oldp+212,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted),3);
        tracep->fullCData(oldp+213,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state),3);
        tracep->fullBit(oldp+214,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending));
        tracep->fullBit(oldp+215,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard));
        tracep->fullIData(oldp+216,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0),32);
        tracep->fullIData(oldp+217,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1),32);
        tracep->fullIData(oldp+218,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2),32);
        tracep->fullIData(oldp+219,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3),32);
        tracep->fullIData(oldp+220,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4),32);
        tracep->fullIData(oldp+221,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5),32);
        tracep->fullIData(oldp+222,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6),32);
        tracep->fullIData(oldp+223,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7),32);
        tracep->fullIData(oldp+224,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8),32);
        tracep->fullIData(oldp+225,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9),32);
        tracep->fullIData(oldp+226,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10),32);
        tracep->fullIData(oldp+227,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11),32);
        tracep->fullIData(oldp+228,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12),32);
        tracep->fullIData(oldp+229,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13),32);
        tracep->fullIData(oldp+230,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14),32);
        tracep->fullIData(oldp+231,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15),32);
        tracep->fullIData(oldp+232,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16),32);
        tracep->fullIData(oldp+233,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17),32);
        tracep->fullIData(oldp+234,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18),32);
        tracep->fullIData(oldp+235,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19),32);
        tracep->fullIData(oldp+236,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20),32);
        tracep->fullIData(oldp+237,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21),32);
        tracep->fullIData(oldp+238,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22),32);
        tracep->fullIData(oldp+239,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23),32);
        tracep->fullIData(oldp+240,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24),32);
        tracep->fullIData(oldp+241,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25),32);
        tracep->fullIData(oldp+242,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26),32);
        tracep->fullIData(oldp+243,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27),32);
        tracep->fullIData(oldp+244,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28),32);
        tracep->fullIData(oldp+245,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29),32);
        tracep->fullIData(oldp+246,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30),32);
        tracep->fullIData(oldp+247,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31),32);
        tracep->fullBit(oldp+248,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump));
        tracep->fullBit(oldp+249,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state));
        tracep->fullBit(oldp+250,((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall)))));
        tracep->fullCData(oldp+251,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)),7);
        tracep->fullCData(oldp+252,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+253,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0xfU))),5);
        tracep->fullIData(oldp+254,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data),32);
        tracep->fullIData(oldp+255,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data),32);
        tracep->fullBit(oldp+256,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
                                   | ((0x63U == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                      & ((7U == (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))
                                          ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                             >= vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                          : ((6U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))
                                              ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                 < vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                              : ((5U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0xcU)))
                                                  ? 
                                                 VL_GTES_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                       >> 0xcU)))
                                                   ? 
                                                  VL_LTS_III(1,32,32, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data, vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                        >> 0xcU)))
                                                    ? 
                                                   (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                    != vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                         >> 0xcU))) 
                                                    & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                       == vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)))))))))));
        tracep->fullIData(oldp+257,((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate 
                                     + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1)),32);
        tracep->fullBit(oldp+258,((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))));
        tracep->fullCData(oldp+259,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
        tracep->fullIData(oldp+260,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1),32);
        tracep->fullIData(oldp+261,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
        tracep->fullCData(oldp+262,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)),7);
        tracep->fullCData(oldp+263,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                           >> 0xcU))),3);
        tracep->fullCData(oldp+264,((0x7fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                              >> 0x19U))),7);
        tracep->fullIData(oldp+265,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_),32);
        tracep->fullCData(oldp+266,((3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address)),2);
        tracep->fullCData(oldp+267,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state),2);
        tracep->fullCData(oldp+268,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state),3);
        tracep->fullIData(oldp+269,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address),32);
        tracep->fullIData(oldp+270,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause),32);
        tracep->fullIData(oldp+271,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val),32);
        tracep->fullBit(oldp+272,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal));
        tracep->fullCData(oldp+273,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state),2);
        tracep->fullQData(oldp+274,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles),64);
        tracep->fullIData(oldp+276,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
        tracep->fullIData(oldp+277,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie),32);
        tracep->fullIData(oldp+278,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
        tracep->fullIData(oldp+279,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval),32);
        tracep->fullSData(oldp+280,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address),12);
        tracep->fullIData(oldp+281,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data),32);
        tracep->fullCData(oldp+282,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state),3);
        tracep->fullIData(oldp+283,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr),32);
        tracep->fullBit(oldp+284,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0));
        tracep->fullBit(oldp+285,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1));
        tracep->fullBit(oldp+286,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2));
        tracep->fullBit(oldp+287,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3));
        tracep->fullCData(oldp+288,((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1) 
                                      << 1U) | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0))),2);
        tracep->fullCData(oldp+289,((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3) 
                                      << 1U) | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2))),2);
        tracep->fullCData(oldp+290,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)),7);
        tracep->fullCData(oldp+291,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state),3);
        tracep->fullSData(oldp+292,((0x3ffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                               >> 0x16U))),10);
        tracep->fullSData(oldp+293,((0x3ffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                               >> 0xcU))),10);
        tracep->fullSData(oldp+294,((0xfffU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)),12);
        tracep->fullIData(oldp+295,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1),32);
        tracep->fullIData(oldp+296,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0),32);
        tracep->fullBit(oldp+297,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid));
        tracep->fullBit(oldp+298,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid));
        tracep->fullBit(oldp+299,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid));
        tracep->fullIData(oldp+300,((0xfU & ((7U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                              : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR))),32);
        tracep->fullIData(oldp+301,((0xfU & ((7U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                              ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                              : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR))),32);
        tracep->fullBit(oldp+302,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read));
        tracep->fullBit(oldp+303,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write));
        tracep->fullIData(oldp+304,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_data),32);
        tracep->fullBit(oldp+305,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0));
        tracep->fullBit(oldp+306,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1));
        tracep->fullBit(oldp+307,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2));
        tracep->fullBit(oldp+308,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3));
        tracep->fullIData(oldp+309,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr),32);
        tracep->fullCData(oldp+310,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state),3);
        tracep->fullBit(oldp+311,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
        tracep->fullIData(oldp+312,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR),32);
        tracep->fullBit(oldp+313,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
        tracep->fullIData(oldp+314,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr),32);
        tracep->fullCData(oldp+315,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB),4);
        tracep->fullBit(oldp+316,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
        tracep->fullBit(oldp+317,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID));
        tracep->fullIData(oldp+318,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR),32);
        tracep->fullBit(oldp+319,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY));
        tracep->fullCData(oldp+320,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                           >> 0x1dU))),3);
        tracep->fullBit(oldp+321,((0U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))));
        tracep->fullBit(oldp+322,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid));
        tracep->fullBit(oldp+323,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid));
        tracep->fullCData(oldp+324,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state),3);
        tracep->fullBit(oldp+325,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0));
        tracep->fullBit(oldp+326,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1));
        tracep->fullBit(oldp+327,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2));
        tracep->fullBit(oldp+328,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3));
        tracep->fullCData(oldp+329,((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1) 
                                      << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0))),2);
        tracep->fullCData(oldp+330,((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3) 
                                      << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2))),2);
        tracep->fullIData(oldp+331,(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA),32);
        tracep->fullIData(oldp+332,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data),32);
        tracep->fullIData(oldp+333,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data),32);
        tracep->fullBit(oldp+334,(vlTOPp->clock));
        tracep->fullBit(oldp+335,(vlTOPp->reset));
        tracep->fullBit(oldp+336,(vlTOPp->io_signal_interrupt));
        tracep->fullBit(oldp+337,(vlTOPp->io_mem_slave_read));
        tracep->fullBit(oldp+338,(vlTOPp->io_mem_slave_write));
        tracep->fullIData(oldp+339,(vlTOPp->io_mem_slave_read_data),32);
        tracep->fullBit(oldp+340,(vlTOPp->io_mem_slave_read_valid));
        tracep->fullIData(oldp+341,(vlTOPp->io_mem_slave_write_data),32);
        tracep->fullBit(oldp+342,(vlTOPp->io_mem_slave_write_strobe_0));
        tracep->fullBit(oldp+343,(vlTOPp->io_mem_slave_write_strobe_1));
        tracep->fullBit(oldp+344,(vlTOPp->io_mem_slave_write_strobe_2));
        tracep->fullBit(oldp+345,(vlTOPp->io_mem_slave_write_strobe_3));
        tracep->fullIData(oldp+346,(vlTOPp->io_mem_slave_address),32);
        tracep->fullBit(oldp+347,(vlTOPp->io_uart_slave_read));
        tracep->fullBit(oldp+348,(vlTOPp->io_uart_slave_write));
        tracep->fullIData(oldp+349,(vlTOPp->io_uart_slave_read_data),32);
        tracep->fullBit(oldp+350,(vlTOPp->io_uart_slave_read_valid));
        tracep->fullIData(oldp+351,(vlTOPp->io_uart_slave_write_data),32);
        tracep->fullBit(oldp+352,(vlTOPp->io_uart_slave_write_strobe_0));
        tracep->fullBit(oldp+353,(vlTOPp->io_uart_slave_write_strobe_1));
        tracep->fullBit(oldp+354,(vlTOPp->io_uart_slave_write_strobe_2));
        tracep->fullBit(oldp+355,(vlTOPp->io_uart_slave_write_strobe_3));
        tracep->fullIData(oldp+356,(vlTOPp->io_uart_slave_address),32);
        tracep->fullCData(oldp+357,(vlTOPp->io_cpu_debug_read_address),5);
        tracep->fullIData(oldp+358,(vlTOPp->io_cpu_debug_read_data),32);
        tracep->fullIData(oldp+359,(vlTOPp->io_signal_interrupt),32);
        tracep->fullIData(oldp+360,(((0U == (IData)(vlTOPp->io_cpu_debug_read_address))
                                      ? 0U : ((((IData)(vlTOPp->io_cpu_debug_read_address) 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_)) 
                                               & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_))
                                               ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data
                                               : ((0x1fU 
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
                                                            : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT___GEN_181))))))))))))),32);
        tracep->fullIData(oldp+361,(((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid) 
                                       & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))) 
                                      & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)))
                                      ? ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                          ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
                                          : 0U) : 0x13U)),32);
        tracep->fullIData(oldp+362,(((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                      ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
                                      : 0U)),32);
        tracep->fullIData(oldp+363,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
                                      ? 0U : ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)
                                               ? ((0U 
                                                   == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))
                                                    ? 
                                                   ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid)
                                                     ? 
                                                    ((2U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                                          >> 0xcU)))
                                                      ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data
                                                      : 
                                                     ((5U 
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
                                                     : 0U)
                                                    : 0U))
                                               : 0U))),32);
        tracep->fullIData(oldp+364,(0xdeadbeefU),32);
        tracep->fullCData(oldp+365,(0U),2);
        tracep->fullBit(oldp+366,(0U));
        tracep->fullBit(oldp+367,(1U));
        tracep->fullIData(oldp+368,(0U),32);
    }
}
