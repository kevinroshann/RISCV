# Makefile
SIM ?= icarus
TOPLEVEL_LANG ?= verilog

VERILOG_SOURCES += $(PWD)/soc.v


TOPLEVEL = soc
MODULE = tb_soc

include $(shell cocotb-config --makefiles)/Makefile.sim
