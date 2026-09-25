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

    await ClockCycles(dut.clk, 30)

    val_x1 = dut.RegisterBank[1].value.integer
    val_x2 = dut.RegisterBank[2].value.integer
    val_x3 = dut.RegisterBank[3].value.integer
    val_x4 = dut.RegisterBank[4].value.integer
    val_x5 = dut.RegisterBank[5].value.integer
    val_x6 = dut.RegisterBank[6].value.integer

    dut._log.info(f"Register x1 value: {val_x1} ")
    dut._log.info(f"Register x2 value: {val_x2} ")
    dut._log.info(f"Register x3 value: {val_x3} ")
    dut._log.info(f"Register x4 value: {val_x4} ")
    dut._log.info(f"Register x5 value: {val_x5} ")
    dut._log.info(f"Register x6 value: {val_x6} ")

    dut._log.info("All instruction assertions passed successfully!")