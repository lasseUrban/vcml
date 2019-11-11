# VCML Documentation
The Virtual Components Modeling Library (`vcml`) is an addon library for SystemC
that provides facilities to ease construction of Virtual Platforms (VPs).
Roughly speaking, its contributions can be separated into two areas:
*Modeling Primitives* and *Hardware Models*. Modeling Primitives refer to
utilities such as improved TLM sockets, port lists and registers and are 
intended to serve as building blocks for new models.
Hardware Models, such as UARTs, Timers, Memories etc. are also available
based on actual hardware models from various vendors or common implementations.
These models generally work with their corresponding Linux device drivers and
can be used as *off-the-shelf* components to swiftly assemble an entire VP.

* Documentation files for VCML modeling primitives:
  * [Logging](logging.md)
  * [Components](components.md)
  * [Properties](properties.md)
  * [Backends](backends.md)
  * [Peripherals](peripherals.md)

* Documentation for VCML hardware models:
  * [Generic Memory](models/generic_mem.md)
  * [Generic Bus](models/generic_bus.md)
  * [Generic SDHCI](models/sdhci.md)
  * [Simulation Device](models/generic_simdev.md)
  * [8250 UART](models/uart8250.md)
  * [DS1742 RTC](models/rtc1742.md)
  * [OpenCores ETHOC](models/oc_ethoc.md)
  * [OpenCores OMPIC](models/oc_ompic.md)
  * [OpenCores OCKBD](models/oc_ockbd.md)
  * [OpenCores OCFBC](models/oc_ocfbc.md)
  * [OpenCores OCSPI](models/oc_ocspi.md)
  * [ARM PL011 UART](models/arm_pl011.md)
  * [ARM PL190 VIC](models/arm_pl190.md)
  * [ARM SP804 Dual Timer](models/arm_sp804.md)
  * [ARM GICv2](models/arm_gicv2.md)
  * [RISC-V PLIC](models/riscv_plic.md)

----
Documentation August 2019
