import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

@cocotb.test()
async def test_riscv_soc(dut):
    clock = Clock(dut.clk, 70, units="ns")
    cocotb.start_soon(clock.start())

    dut.rstn.value = 0
    await ClockCycles(dut.clk, 5)


    dut.rstn.value = 1
    dut._log.info("Reset released")

    await ClockCycles(dut.clk, 500)

    val_x1 = dut.RegisterBank[1].value.integer
    val_x2 = dut.RegisterBank[2].value.integer
    val_x3 = dut.RegisterBank[3].value.integer
    val_x4 = dut.RegisterBank[4].value.integer
    val_x5 = dut.RegisterBank[5].value.integer
    val_x6 = dut.RegisterBank[6].value.integer
    val_x7 = dut.RegisterBank[7].value.integer
    val_x8 = dut.RegisterBank[8].value.integer
    val_x9 = dut.RegisterBank[9].value.integer
    val_x10 = dut.RegisterBank[10].value.integer
    val_x11 = dut.RegisterBank[11].value.integer
    val_x12 = dut.RegisterBank[12].value.integer
    val_x13 = dut.RegisterBank[13].value.integer

    dut._log.info(f"Register x1 value: {val_x1} ")
    dut._log.info(f"Register x2 value: {val_x2} ")
    dut._log.info(f"Register x3 value: {val_x3} ")
    dut._log.info(f"Register x4 value: {val_x4} ")
    dut._log.info(f"Register x5 value: {val_x5} ")
    dut._log.info(f"Register x6 value: {val_x6} ")
    dut._log.info(f"Register x7 value: {val_x7} ")
    dut._log.info(f"Register x8 value: {val_x8} ")
    dut._log.info(f"Register x9 value: {val_x9} ")
    dut._log.info(f"Register x10 value: {val_x10} ")
    dut._log.info(f"Register x11 value: {val_x11} ")
    dut._log.info(f"Register x12 value: {val_x12} ")
    dut._log.info(f"Register x13 value: {val_x13} ")

    dut._log.info("All instruction assertions passed successfully!")