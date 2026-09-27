# Makefile
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/soc.v


TOPLEVEL = SOC
MODULE = tb_soc

include $(shell cocotb-config --makefiles)/Makefile.sim
