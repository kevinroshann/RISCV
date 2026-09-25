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

    val_x3 = dut.RegisterBank[3].value.integer
    val_x4 = dut.RegisterBank[4].value.integer
    val_x6 = dut.RegisterBank[6].value.integer

    dut._log.info(f"Register x3 value: {val_x3} (Expected: 20)")
    dut._log.info(f"Register x4 value: {val_x4} (Expected: 10)")
    dut._log.info(f"Register x6 value: {val_x6} (Expected: 30)")

    # Assertions for verification
    assert val_x3 == 20, f"Error in ADD: Expected 20, got {val_x3}"
    assert val_x4 == 10, f"Error in SUB: Expected 10, got {val_x4}"
    assert val_x6 == 30, f"Error in OR: Expected 30, got {val_x6}"

    dut._log.info("All instruction assertions passed successfully!")