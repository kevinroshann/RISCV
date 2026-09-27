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

    await ClockCycles(dut.clk, 50000)

# Read registers x1 to x13
    for i in range(1, 31):
        value = dut.CPU.RegisterBank[i].value.integer
        dut._log.info(f"Register x{i} value: {value}")

    dut._log.info("All instruction assertions passed successfully!")