// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


void VTop::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VTop::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_address_channel_AWVALID));
            tracep->chgBit(oldp+1,(vlTOPp->Top__DOT__mem_slave__DOT__AWREADY));
            tracep->chgIData(oldp+2,(((0U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                       : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
            tracep->chgBit(oldp+3,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WVALID));
            tracep->chgBit(oldp+4,(vlTOPp->Top__DOT__mem_slave__DOT__WREADY));
            tracep->chgIData(oldp+5,(((0U == (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                               >> 0x1dU)))
                                       ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                       : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
            tracep->chgCData(oldp+6,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_data_channel_WSTRB),4);
            tracep->chgBit(oldp+7,(vlTOPp->Top__DOT__mem_slave__DOT__BVALID));
            tracep->chgBit(oldp+8,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_write_response_channel_BREADY));
            tracep->chgBit(oldp+9,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_address_channel_ARVALID));
            tracep->chgBit(oldp+10,(vlTOPp->Top__DOT__mem_slave__DOT__ARREADY));
            tracep->chgIData(oldp+11,(((0U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
            tracep->chgBit(oldp+12,(vlTOPp->Top__DOT__mem_slave__DOT__RVALID));
            tracep->chgBit(oldp+13,(vlTOPp->Top__DOT__bus_switch_io_slaves_0_read_data_channel_RREADY));
            tracep->chgBit(oldp+14,(vlTOPp->Top__DOT__mem_slave__DOT__read));
            tracep->chgBit(oldp+15,(vlTOPp->Top__DOT__mem_slave__DOT__write));
            tracep->chgIData(oldp+16,(vlTOPp->Top__DOT__mem_slave__DOT__write_data),32);
            tracep->chgBit(oldp+17,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_0));
            tracep->chgBit(oldp+18,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_1));
            tracep->chgBit(oldp+19,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_2));
            tracep->chgBit(oldp+20,(vlTOPp->Top__DOT__mem_slave__DOT__write_strobe_3));
            tracep->chgIData(oldp+21,(vlTOPp->Top__DOT__mem_slave__DOT__addr),32);
            tracep->chgBit(oldp+22,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_address_channel_AWVALID));
            tracep->chgBit(oldp+23,(vlTOPp->Top__DOT__uart_slave__DOT__AWREADY));
            tracep->chgIData(oldp+24,(((2U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
            tracep->chgBit(oldp+25,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WVALID));
            tracep->chgBit(oldp+26,(vlTOPp->Top__DOT__uart_slave__DOT__WREADY));
            tracep->chgIData(oldp+27,(((2U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
            tracep->chgCData(oldp+28,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_data_channel_WSTRB),4);
            tracep->chgBit(oldp+29,(vlTOPp->Top__DOT__uart_slave__DOT__BVALID));
            tracep->chgBit(oldp+30,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_write_response_channel_BREADY));
            tracep->chgBit(oldp+31,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_address_channel_ARVALID));
            tracep->chgBit(oldp+32,(vlTOPp->Top__DOT__uart_slave__DOT__ARREADY));
            tracep->chgIData(oldp+33,(((2U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
            tracep->chgBit(oldp+34,(vlTOPp->Top__DOT__uart_slave__DOT__RVALID));
            tracep->chgBit(oldp+35,(vlTOPp->Top__DOT__bus_switch_io_slaves_2_read_data_channel_RREADY));
            tracep->chgBit(oldp+36,(vlTOPp->Top__DOT__uart_slave__DOT__read));
            tracep->chgBit(oldp+37,(vlTOPp->Top__DOT__uart_slave__DOT__write));
            tracep->chgIData(oldp+38,(vlTOPp->Top__DOT__uart_slave__DOT__write_data),32);
            tracep->chgBit(oldp+39,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_0));
            tracep->chgBit(oldp+40,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_1));
            tracep->chgBit(oldp+41,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_2));
            tracep->chgBit(oldp+42,(vlTOPp->Top__DOT__uart_slave__DOT__write_strobe_3));
            tracep->chgIData(oldp+43,(vlTOPp->Top__DOT__uart_slave__DOT__addr),32);
            tracep->chgBit(oldp+44,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__AWVALID));
            tracep->chgBit(oldp+45,(vlTOPp->Top__DOT__bus_switch_io_master_write_address_channel_AWREADY));
            tracep->chgIData(oldp+46,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR),32);
            tracep->chgBit(oldp+47,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__WVALID));
            tracep->chgBit(oldp+48,(vlTOPp->Top__DOT__bus_switch_io_master_write_data_channel_WREADY));
            tracep->chgIData(oldp+49,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data),32);
            tracep->chgCData(oldp+50,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_data_channel_WSTRB),4);
            tracep->chgBit(oldp+51,(vlTOPp->Top__DOT__bus_switch_io_master_write_response_channel_BVALID));
            tracep->chgBit(oldp+52,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__BREADY));
            tracep->chgBit(oldp+53,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__ARVALID));
            tracep->chgBit(oldp+54,(((7U == (7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                   >> 0x1dU)))
                                      ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                      : ((6U == (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                    >> 0x1dU)))
                                          ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                          : ((5U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                              ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                              : ((4U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                      >> 0x1dU)))
                                                  ? (IData)(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY)
                                                  : 
                                                 ((3U 
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
            tracep->chgIData(oldp+55,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR),32);
            tracep->chgBit(oldp+56,(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RVALID));
            tracep->chgBit(oldp+57,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__RREADY));
            tracep->chgIData(oldp+58,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address),32);
            tracep->chgBit(oldp+59,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_address_channel_AWVALID));
            tracep->chgBit(oldp+60,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__AWREADY));
            tracep->chgCData(oldp+61,((0xfU & ((7U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                    >> 0x1dU)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                                : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR))),4);
            tracep->chgBit(oldp+62,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WVALID));
            tracep->chgBit(oldp+63,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__WREADY));
            tracep->chgIData(oldp+64,(((7U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_data
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr)),32);
            tracep->chgCData(oldp+65,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_data_channel_WSTRB),4);
            tracep->chgBit(oldp+66,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__BVALID));
            tracep->chgBit(oldp+67,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_write_response_channel_BREADY));
            tracep->chgBit(oldp+68,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_address_channel_ARVALID));
            tracep->chgBit(oldp+69,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__ARREADY));
            tracep->chgCData(oldp+70,((0xfU & ((7U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                    >> 0x1dU)))
                                                ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                                : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR))),4);
            tracep->chgBit(oldp+71,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__RVALID));
            tracep->chgBit(oldp+72,(vlTOPp->Top__DOT__bus_switch_io_slaves_7_read_data_channel_RREADY));
            tracep->chgIData(oldp+73,(((7U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR)),32);
            tracep->chgIData(oldp+74,(((7U == (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                >> 0x1dU)))
                                        ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                        : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR)),32);
            tracep->chgCData(oldp+75,(vlTOPp->Top__DOT__mem_slave__DOT__state),3);
            tracep->chgCData(oldp+76,(vlTOPp->Top__DOT__uart_slave__DOT__state),3);
            tracep->chgBit(oldp+77,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag));
            tracep->chgBit(oldp+78,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ctrl_jump_instruction));
            tracep->chgBit(oldp+79,((1U & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                                           | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump)))));
            tracep->chgBit(oldp+80,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag));
            tracep->chgBit(oldp+81,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag));
            tracep->chgCData(oldp+82,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_regs_reg1_read_address),5);
            tracep->chgCData(oldp+83,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0x14U))),5);
            tracep->chgBit(oldp+84,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_read_enable__DOT__reg_));
            tracep->chgCData(oldp+85,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),5);
            tracep->chgBit(oldp+86,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_));
            tracep->chgCData(oldp+87,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),5);
            tracep->chgBit(oldp+88,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs_io_start_paging));
            tracep->chgBit(oldp+89,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_flush));
            tracep->chgBit(oldp+90,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_id_flush));
            tracep->chgBit(oldp+91,((1U & ((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_ctrl_stall_flag) 
                                             | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint_io_ctrl_stall_flag)) 
                                            | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard)) 
                                           | ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid)) 
                                              | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))))));
            tracep->chgBit(oldp+92,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall));
            tracep->chgBit(oldp+93,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall));
            tracep->chgBit(oldp+94,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_enable__DOT__reg_));
            tracep->chgCData(oldp+95,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),5);
            tracep->chgIData(oldp+96,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__wb_io_regs_write_data),32);
            tracep->chgIData(oldp+97,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data1),32);
            tracep->chgIData(oldp+98,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs_io_read_data2),32);
            tracep->chgIData(oldp+99,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_address),32);
            tracep->chgIData(oldp+100,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address),32);
            tracep->chgIData(oldp+101,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc),32);
            tracep->chgBit(oldp+102,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pc_valid));
            tracep->chgBit(oldp+103,(((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                      & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state)))));
            tracep->chgBit(oldp+104,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid));
            tracep->chgBit(oldp+105,((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
            tracep->chgIData(oldp+106,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_),32);
            tracep->chgIData(oldp+107,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction_address__DOT__reg_),32);
            tracep->chgIData(oldp+108,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__interrupt_flag__DOT__reg_),32);
            tracep->chgIData(oldp+109,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_forward_data),32);
            tracep->chgCData(oldp+110,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_id),2);
            tracep->chgCData(oldp+111,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_id),2);
            tracep->chgBit(oldp+112,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_assert));
            tracep->chgIData(oldp+113,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_handler_address),32);
            tracep->chgIData(oldp+114,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate),32);
            tracep->chgBit(oldp+115,((((0x17U == (0x7fU 
                                                  & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                       | (0x63U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                      | (0x6fU == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))));
            tracep->chgBit(oldp+116,((0x33U != (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
            tracep->chgBit(oldp+117,((3U == (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
            tracep->chgBit(oldp+118,((0x23U == (0x7fU 
                                                & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))));
            tracep->chgCData(oldp+119,(((0x67U == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                         ? 3U : ((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))
                                                  ? 3U
                                                  : 
                                                 ((0x73U 
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
            tracep->chgBit(oldp+120,(((((((((0x33U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                            | (0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                         | (0x37U == 
                                            (0x7fU 
                                             & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                        | (0x6fU == 
                                           (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                       | (0x67U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_))) 
                                      | (0x73U == (0x7fU 
                                                   & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)))));
            tracep->chgCData(oldp+121,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 7U))),5);
            tracep->chgSData(oldp+122,((0xfffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                  >> 0x14U))),12);
            tracep->chgBit(oldp+123,(((0x73U == (0x7fU 
                                                 & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                      & ((((((1U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU))) 
                                             | (5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0xcU)))) 
                                            | (2U == 
                                               (7U 
                                                & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                   >> 0xcU)))) 
                                           | (6U == 
                                              (7U & 
                                               (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                >> 0xcU)))) 
                                          | (3U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))) 
                                         | (7U == (7U 
                                                   & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                      >> 0xcU)))))));
            tracep->chgIData(oldp+124,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_clint_jump_address),32);
            tracep->chgIData(oldp+125,(((0x180U == 
                                         (0xfffU & 
                                          (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                           >> 0x14U)))
                                         ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp
                                         : ((0x343U 
                                             == (0xfffU 
                                                 & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                    >> 0x14U)))
                                             ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval
                                             : ((0x340U 
                                                 == 
                                                 (0xfffU 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0x14U)))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch
                                                 : 
                                                ((0x300U 
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
            tracep->chgIData(oldp+126,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_),32);
            tracep->chgIData(oldp+127,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction_address__DOT__reg_),32);
            tracep->chgBit(oldp+128,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_enable__DOT__reg_));
            tracep->chgCData(oldp+129,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_source__DOT__reg_),2);
            tracep->chgIData(oldp+130,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg1_data__DOT__reg_),32);
            tracep->chgIData(oldp+131,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__reg2_data__DOT__reg_),32);
            tracep->chgIData(oldp+132,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__immediate__DOT__reg_),32);
            tracep->chgBit(oldp+133,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop1_source__DOT__reg_));
            tracep->chgBit(oldp+134,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__aluop2_source__DOT__reg_));
            tracep->chgBit(oldp+135,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_write_enable__DOT__reg_));
            tracep->chgSData(oldp+136,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_address__DOT__reg_),12);
            tracep->chgBit(oldp+137,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__memory_write_enable__DOT__reg_));
            tracep->chgIData(oldp+138,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__csr_read_data__DOT__reg_),32);
            tracep->chgCData(oldp+139,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg1_forward_ex),2);
            tracep->chgCData(oldp+140,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__forwarding_io_reg2_forward_ex),2);
            tracep->chgIData(oldp+141,((IData)((0x7fffffffffffffffULL 
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
            tracep->chgIData(oldp+142,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex_io_csr_write_data),32);
            tracep->chgIData(oldp+143,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__regs_write_address__DOT__reg_),32);
            tracep->chgBit(oldp+144,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_enable__DOT__reg_));
            tracep->chgCData(oldp+145,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_source__DOT__reg_),2);
            tracep->chgIData(oldp+146,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__regs_write_address__DOT__reg_),32);
            tracep->chgIData(oldp+147,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction_address__DOT__reg_),32);
            tracep->chgIData(oldp+148,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_),32);
            tracep->chgIData(oldp+149,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg2_data__DOT__reg_),32);
            tracep->chgBit(oldp+150,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_));
            tracep->chgIData(oldp+151,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__alu_result__DOT__reg_),32);
            tracep->chgIData(oldp+152,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__csr_read_data__DOT__reg_),32);
            tracep->chgCData(oldp+153,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_ 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+154,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token));
            tracep->chgBit(oldp+155,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                      & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_) 
                                         & (0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state))))));
            tracep->chgBit(oldp+156,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_valid));
            tracep->chgBit(oldp+157,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
                                      & ((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_read_enable__DOT__reg_)) 
                                         & ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__memory_write_enable__DOT__reg_) 
                                            & ((0U 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state)) 
                                               & (2U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))))))));
            tracep->chgIData(oldp+158,((IData)(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
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
                                                   : 0ULL))))),32);
            tracep->chgBit(oldp+159,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
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
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
            tracep->chgBit(oldp+160,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
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
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_30))))))));
            tracep->chgBit(oldp+161,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
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
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
            tracep->chgBit(oldp+162,(((~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)) 
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
                                                   : (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT___GEN_33))))))));
            tracep->chgBit(oldp+163,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_write_valid));
            tracep->chgBit(oldp+164,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_request));
            tracep->chgBit(oldp+165,((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
            tracep->chgIData(oldp+166,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__instruction_address__DOT__reg_),32);
            tracep->chgIData(oldp+167,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__alu_result__DOT__reg_),32);
            tracep->chgCData(oldp+168,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_source__DOT__reg_),2);
            tracep->chgIData(oldp+169,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__regs_write_address__DOT__reg_),32);
            tracep->chgIData(oldp+170,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__memory_read_data__DOT__reg_),32);
            tracep->chgIData(oldp+171,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem2wb__DOT__csr_read_data__DOT__reg_),32);
            tracep->chgCData(oldp+172,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+173,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                 >> 0x14U))),5);
            tracep->chgBit(oldp+174,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__page_fault_signals));
            tracep->chgIData(oldp+175,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                         ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                             ? 0U : 
                                            ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                              ? 0U : 
                                             ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                               ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
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
                                               : ((3U 
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
            tracep->chgIData(oldp+176,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_187),32);
            tracep->chgIData(oldp+177,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                         ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                             ? 0U : 
                                            ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                              ? 0U : 
                                             ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                               ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart)
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
                                               : ((3U 
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
            tracep->chgIData(oldp+178,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtvec),32);
            tracep->chgIData(oldp+179,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mepc),32);
            tracep->chgIData(oldp+180,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus),32);
            tracep->chgBit(oldp+181,((1U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mstatus 
                                            >> 3U))));
            tracep->chgBit(oldp+182,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_enable));
            tracep->chgSData(oldp+183,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_address),12);
            tracep->chgIData(oldp+184,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_reg_write_data),32);
            tracep->chgBit(oldp+185,((1U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp 
                                            >> 0x1fU))));
            tracep->chgIData(oldp+186,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp),32);
            tracep->chgBit(oldp+187,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_read));
            tracep->chgBit(oldp+188,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_write));
            tracep->chgIData(oldp+189,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
                                         | (3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)))
                                         ? ((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                             ? ((0U 
                                                 == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                 ? 0U
                                                 : 
                                                ((1U 
                                                  == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                                  ? 0U
                                                  : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137))
                                             : 0U) : 
                                        ((2U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
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
            tracep->chgBit(oldp+190,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
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
            tracep->chgBit(oldp+191,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
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
            tracep->chgBit(oldp+192,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
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
            tracep->chgBit(oldp+193,((((4U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted)) 
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
            tracep->chgBit(oldp+194,((0U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state))));
            tracep->chgBit(oldp+195,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__read_valid));
            tracep->chgBit(oldp+196,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_valid));
            tracep->chgIData(oldp+197,((0xfffffU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__satp)),20);
            tracep->chgIData(oldp+198,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address),32);
            tracep->chgBit(oldp+199,((3U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))));
            tracep->chgBit(oldp+200,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_restart));
            tracep->chgBit(oldp+201,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_restart_done));
            tracep->chgBit(oldp+202,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa_valid));
            tracep->chgIData(oldp+203,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_pa),32);
            tracep->chgBit(oldp+204,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                      & ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                         | ((1U != (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
                                            & ((2U 
                                                == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state)) 
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
            tracep->chgIData(oldp+205,((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_184)),32);
            tracep->chgBit(oldp+206,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_valid));
            tracep->chgBit(oldp+207,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted) 
                                      & (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_175))));
            tracep->chgIData(oldp+208,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted)
                                         ? ((0U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                             ? 0U : 
                                            ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state))
                                              ? 0U : vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT___GEN_137))
                                         : 0U)),32);
            tracep->chgBit(oldp+209,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_write_valid));
            tracep->chgBit(oldp+210,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_granted));
            tracep->chgCData(oldp+211,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted),3);
            tracep->chgCData(oldp+212,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_access_state),3);
            tracep->chgBit(oldp+213,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__pending));
            tracep->chgBit(oldp+214,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl__DOT__id_hazard));
            tracep->chgIData(oldp+215,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_0),32);
            tracep->chgIData(oldp+216,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_1),32);
            tracep->chgIData(oldp+217,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_2),32);
            tracep->chgIData(oldp+218,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_3),32);
            tracep->chgIData(oldp+219,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_4),32);
            tracep->chgIData(oldp+220,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_5),32);
            tracep->chgIData(oldp+221,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_6),32);
            tracep->chgIData(oldp+222,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_7),32);
            tracep->chgIData(oldp+223,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_8),32);
            tracep->chgIData(oldp+224,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_9),32);
            tracep->chgIData(oldp+225,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_10),32);
            tracep->chgIData(oldp+226,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_11),32);
            tracep->chgIData(oldp+227,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_12),32);
            tracep->chgIData(oldp+228,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_13),32);
            tracep->chgIData(oldp+229,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_14),32);
            tracep->chgIData(oldp+230,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_15),32);
            tracep->chgIData(oldp+231,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_16),32);
            tracep->chgIData(oldp+232,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_17),32);
            tracep->chgIData(oldp+233,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_18),32);
            tracep->chgIData(oldp+234,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_19),32);
            tracep->chgIData(oldp+235,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_20),32);
            tracep->chgIData(oldp+236,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_21),32);
            tracep->chgIData(oldp+237,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_22),32);
            tracep->chgIData(oldp+238,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_23),32);
            tracep->chgIData(oldp+239,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_24),32);
            tracep->chgIData(oldp+240,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_25),32);
            tracep->chgIData(oldp+241,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_26),32);
            tracep->chgIData(oldp+242,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_27),32);
            tracep->chgIData(oldp+243,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_28),32);
            tracep->chgIData(oldp+244,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_29),32);
            tracep->chgIData(oldp+245,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_30),32);
            tracep->chgIData(oldp+246,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__regs__DOT__registers_31),32);
            tracep->chgBit(oldp+247,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump));
            tracep->chgBit(oldp+248,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__state));
            tracep->chgBit(oldp+249,((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_if_stall)))));
            tracep->chgCData(oldp+250,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)),7);
            tracep->chgCData(oldp+251,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+252,((0x1fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                 >> 0xfU))),5);
            tracep->chgIData(oldp+253,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data),32);
            tracep->chgIData(oldp+254,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data),32);
            tracep->chgBit(oldp+255,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___io_ctrl_jump_instruction_T_2) 
                                      | ((0x63U == 
                                          (0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_)) 
                                         & ((7U == 
                                             (7U & 
                                              (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                               >> 0xcU)))
                                             ? (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                >= vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                             : ((6U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__if2id__DOT__instruction__DOT__reg_ 
                                                     >> 0xcU)))
                                                 ? 
                                                (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg1_data 
                                                 < vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT__reg2_data)
                                                 : 
                                                ((5U 
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
            tracep->chgIData(oldp+256,((vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_ex_immediate 
                                        + vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id__DOT___instruction_jump_address_T_1)),32);
            tracep->chgBit(oldp+257,((1U & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ctrl_io_ex_stall)))));
            tracep->chgCData(oldp+258,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_ctrl_io_alu_funct),4);
            tracep->chgIData(oldp+259,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op1),32);
            tracep->chgIData(oldp+260,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex__DOT__alu_io_op2),32);
            tracep->chgCData(oldp+261,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_)),7);
            tracep->chgCData(oldp+262,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+263,((0x7fU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id2ex__DOT__instruction__DOT__reg_ 
                                                 >> 0x19U))),7);
            tracep->chgIData(oldp+264,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__reg1_data__DOT__reg_),32);
            tracep->chgCData(oldp+265,((3U & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__physical_address)),2);
            tracep->chgCData(oldp+266,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem__DOT__mem_access_state),2);
            tracep->chgCData(oldp+267,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__csr_state),3);
            tracep->chgIData(oldp+268,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__instruction_address),32);
            tracep->chgIData(oldp+269,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__cause),32);
            tracep->chgIData(oldp+270,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__trap_val),32);
            tracep->chgBit(oldp+271,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_signal));
            tracep->chgCData(oldp+272,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__interrupt_state),2);
            tracep->chgQData(oldp+273,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__cycles),64);
            tracep->chgIData(oldp+275,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mcause),32);
            tracep->chgIData(oldp+276,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mie),32);
            tracep->chgIData(oldp+277,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mscratch),32);
            tracep->chgIData(oldp+278,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__mtval),32);
            tracep->chgSData(oldp+279,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_address),12);
            tracep->chgIData(oldp+280,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__csr_regs__DOT__reg_write_data),32);
            tracep->chgCData(oldp+281,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__state),3);
            tracep->chgIData(oldp+282,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__addr),32);
            tracep->chgBit(oldp+283,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0));
            tracep->chgBit(oldp+284,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1));
            tracep->chgBit(oldp+285,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2));
            tracep->chgBit(oldp+286,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3));
            tracep->chgCData(oldp+287,((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_1) 
                                         << 1U) | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_0))),2);
            tracep->chgCData(oldp+288,((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_3) 
                                         << 1U) | (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master__DOT__write_strobe_2))),2);
            tracep->chgCData(oldp+289,((0x7fU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__ex2mem__DOT__instruction__DOT__reg_)),7);
            tracep->chgCData(oldp+290,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__state),3);
            tracep->chgSData(oldp+291,((0x3ffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                                  >> 0x16U))),10);
            tracep->chgSData(oldp+292,((0x3ffU & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address 
                                                  >> 0xcU))),10);
            tracep->chgSData(oldp+293,((0xfffU & vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__virtual_address)),12);
            tracep->chgIData(oldp+294,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte1),32);
            tracep->chgIData(oldp+295,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__pte0),32);
            tracep->chgBit(oldp+296,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__instructionInvalid));
            tracep->chgBit(oldp+297,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__storeInvalid));
            tracep->chgBit(oldp+298,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu__DOT__loadInvalid));
            tracep->chgIData(oldp+299,((0xfU & ((7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                     >> 0x1dU)))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_write_address_channel_AWADDR
                                                 : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR))),32);
            tracep->chgIData(oldp+300,((0xfU & ((7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                                     >> 0x1dU)))
                                                 ? vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_channels_read_address_channel_ARADDR
                                                 : vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR))),32);
            tracep->chgBit(oldp+301,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__read));
            tracep->chgBit(oldp+302,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write));
            tracep->chgIData(oldp+303,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_data),32);
            tracep->chgBit(oldp+304,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_0));
            tracep->chgBit(oldp+305,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_1));
            tracep->chgBit(oldp+306,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_2));
            tracep->chgBit(oldp+307,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__write_strobe_3));
            tracep->chgIData(oldp+308,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__addr),32);
            tracep->chgCData(oldp+309,(vlTOPp->Top__DOT__dummy__DOT__slave__DOT__state),3);
            tracep->chgBit(oldp+310,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__AWVALID));
            tracep->chgIData(oldp+311,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_address_channel_AWADDR),32);
            tracep->chgBit(oldp+312,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__WVALID));
            tracep->chgIData(oldp+313,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__addr),32);
            tracep->chgCData(oldp+314,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_write_data_channel_WSTRB),4);
            tracep->chgBit(oldp+315,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__BREADY));
            tracep->chgBit(oldp+316,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__ARVALID));
            tracep->chgIData(oldp+317,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master_io_channels_read_address_channel_ARADDR),32);
            tracep->chgBit(oldp+318,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__RREADY));
            tracep->chgCData(oldp+319,((7U & (vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__axi4_master_io_bundle_address 
                                              >> 0x1dU))),3);
            tracep->chgBit(oldp+320,((0U != (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state))));
            tracep->chgBit(oldp+321,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__read_valid));
            tracep->chgBit(oldp+322,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_valid));
            tracep->chgCData(oldp+323,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__state),3);
            tracep->chgBit(oldp+324,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0));
            tracep->chgBit(oldp+325,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1));
            tracep->chgBit(oldp+326,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2));
            tracep->chgBit(oldp+327,(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3));
            tracep->chgCData(oldp+328,((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_1) 
                                         << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_0))),2);
            tracep->chgCData(oldp+329,((((IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_3) 
                                         << 1U) | (IData)(vlTOPp->Top__DOT__bus_switch__DOT__dummy__DOT__master__DOT__write_strobe_2))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+330,(vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA),32);
            tracep->chgIData(oldp+331,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mem_io_bus_read_data),32);
            tracep->chgIData(oldp+332,(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__mmu_io_bus_read_data),32);
        }
        tracep->chgBit(oldp+333,(vlTOPp->clock));
        tracep->chgBit(oldp+334,(vlTOPp->reset));
        tracep->chgBit(oldp+335,(vlTOPp->io_signal_interrupt));
        tracep->chgBit(oldp+336,(vlTOPp->io_mem_slave_read));
        tracep->chgBit(oldp+337,(vlTOPp->io_mem_slave_write));
        tracep->chgIData(oldp+338,(vlTOPp->io_mem_slave_read_data),32);
        tracep->chgBit(oldp+339,(vlTOPp->io_mem_slave_read_valid));
        tracep->chgIData(oldp+340,(vlTOPp->io_mem_slave_write_data),32);
        tracep->chgBit(oldp+341,(vlTOPp->io_mem_slave_write_strobe_0));
        tracep->chgBit(oldp+342,(vlTOPp->io_mem_slave_write_strobe_1));
        tracep->chgBit(oldp+343,(vlTOPp->io_mem_slave_write_strobe_2));
        tracep->chgBit(oldp+344,(vlTOPp->io_mem_slave_write_strobe_3));
        tracep->chgIData(oldp+345,(vlTOPp->io_mem_slave_address),32);
        tracep->chgBit(oldp+346,(vlTOPp->io_uart_slave_read));
        tracep->chgBit(oldp+347,(vlTOPp->io_uart_slave_write));
        tracep->chgIData(oldp+348,(vlTOPp->io_uart_slave_read_data),32);
        tracep->chgBit(oldp+349,(vlTOPp->io_uart_slave_read_valid));
        tracep->chgIData(oldp+350,(vlTOPp->io_uart_slave_write_data),32);
        tracep->chgBit(oldp+351,(vlTOPp->io_uart_slave_write_strobe_0));
        tracep->chgBit(oldp+352,(vlTOPp->io_uart_slave_write_strobe_1));
        tracep->chgBit(oldp+353,(vlTOPp->io_uart_slave_write_strobe_2));
        tracep->chgBit(oldp+354,(vlTOPp->io_uart_slave_write_strobe_3));
        tracep->chgIData(oldp+355,(vlTOPp->io_uart_slave_address),32);
        tracep->chgCData(oldp+356,(vlTOPp->io_cpu_debug_read_address),5);
        tracep->chgIData(oldp+357,(vlTOPp->io_cpu_debug_read_data),32);
        tracep->chgIData(oldp+358,(vlTOPp->io_signal_interrupt),32);
        tracep->chgIData(oldp+359,(((0U == (IData)(vlTOPp->io_cpu_debug_read_address))
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
        tracep->chgIData(oldp+360,(((((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch_io_bus_read_valid) 
                                      & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__inst_fetch__DOT__pending_jump))) 
                                     & (~ (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__id_io_if_jump_flag)))
                                     ? ((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                         ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
                                         : 0U) : 0x13U)),32);
        tracep->chgIData(oldp+361,(((1U == (IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__bus_granted))
                                     ? vlTOPp->Top__DOT__bus_switch_io_master_read_data_channel_RDATA
                                     : 0U)),32);
        tracep->chgIData(oldp+362,(((IData)(vlTOPp->Top__DOT__cpu__DOT__cpu__DOT__clint__DOT__exception_token)
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
    }
}

void VTop::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VTop__Syms* __restrict vlSymsp = static_cast<VTop__Syms*>(userp);
    VTop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
    }
}
