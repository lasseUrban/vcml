/******************************************************************************
 *                                                                            *
 * Copyright 2018 Jan Henrik Weinstock                                        *
 *                                                                            *
 * Licensed under the Apache License, Version 2.0 (the "License");            *
 * you may not use this file except in compliance with the License.           *
 * You may obtain a copy of the License at                                    *
 *                                                                            *
 *     http://www.apache.org/licenses/LICENSE-2.0                             *
 *                                                                            *
 * Unless required by applicable law or agreed to in writing, software        *
 * distributed under the License is distributed on an "AS IS" BASIS,          *
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
 * See the License for the specific language governing permissions and        *
 * limitations under the License.                                             *
 *                                                                            *
 ******************************************************************************/

#ifndef VCML_H
#define VCML_H

#include "vcml/common/types.h"
#include "vcml/common/strings.h"
#include "vcml/common/utils.h"
#include "vcml/common/report.h"
#include "vcml/common/version.h"
#include "vcml/common/aio.h"
#include "vcml/common/thctl.h"
#include "vcml/common/bitops.h"
#include "vcml/common/systemc.h"

#include "vcml/logging/logger.h"
#include "vcml/logging/log_file.h"
#include "vcml/logging/log_stream.h"
#include "vcml/logging/log_term.h"

#include "vcml/properties/property_base.h"
#include "vcml/properties/property.h"
#include "vcml/properties/property_provider.h"
#include "vcml/properties/property_provider_arg.h"
#include "vcml/properties/property_provider_env.h"
#include "vcml/properties/property_provider_file.h"

#include "vcml/backends/backend.h"

#include "vcml/debugging/suspender.h"
#include "vcml/debugging/rspserver.h"
#include "vcml/debugging/gdbstub.h"
#include "vcml/debugging/gdbserver.h"
#include "vcml/debugging/vspserver.h"

#include "vcml/ui/keymap.h"
#include "vcml/ui/fbmode.h"
#include "vcml/ui/display.h"

#include "vcml/elf.h"
#include "vcml/range.h"
#include "vcml/sbi.h"
#include "vcml/exmon.h"
#include "vcml/ports.h"
#include "vcml/stubs.h"
#include "vcml/dmi_cache.h"
#include "vcml/command.h"
#include "vcml/module.h"
#include "vcml/component.h"
#include "vcml/adapters.h"
#include "vcml/master_socket.h"
#include "vcml/slave_socket.h"
#include "vcml/register.h"
#include "vcml/peripheral.h"
#include "vcml/processor.h"
#include "vcml/system.h"
#include "vcml/setup.h"
#include "vcml/spi.h"
#include "vcml/sd.h"

#include "vcml/models/generic/clock.h"
#include "vcml/models/generic/reset.h"
#include "vcml/models/generic/bus.h"
#include "vcml/models/generic/memory.h"
#include "vcml/models/generic/gpio.h"
#include "vcml/models/generic/simdev.h"
#include "vcml/models/generic/crossbar.h"
#include "vcml/models/generic/uart8250.h"
#include "vcml/models/generic/rtc1742.h"
#include "vcml/models/generic/spibus.h"
#include "vcml/models/generic/spi2sd.h"
#include "vcml/models/generic/sdcard.h"
#include "vcml/models/generic/sdhci.h"
#include "vcml/models/generic/hwrng.h"
#include "vcml/models/generic/fbdev.h"
#include "vcml/models/generic/throttle.h"

#include "vcml/models/virtio/virtio.h"
#include "vcml/models/virtio/mmio.h"
#include "vcml/models/virtio/rng.h"
#include "vcml/models/virtio/console.h"
#include "vcml/models/virtio/input.h"

#include "vcml/models/opencores/ompic.h"
#include "vcml/models/opencores/ethoc.h"
#include "vcml/models/opencores/ockbd.h"
#include "vcml/models/opencores/ocfbc.h"
#include "vcml/models/opencores/ocspi.h"

#include "vcml/models/arm/pl011uart.h"
#include "vcml/models/arm/pl190vic.h"
#include "vcml/models/arm/sp804timer.h"
#include "vcml/models/arm/syscon.h"
#include "vcml/models/arm/gic400.h"

#include "vcml/models/riscv/clint.h"
#include "vcml/models/riscv/plic.h"
#include "vcml/models/riscv/simdev.h"

#endif
