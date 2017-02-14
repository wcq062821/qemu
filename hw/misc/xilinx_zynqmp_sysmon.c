/*
 * QEMU model of the SYSMON Registers for System 16nm Monitor
 *
 * Copyright (c) 2017 Xilinx Inc.
 *
 * Autogenerated by xregqemu.py 2017-02-15.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "qemu/osdep.h"
#include "hw/sysbus.h"
#include "hw/register.h"
#include "qemu/bitops.h"
#include "qemu/log.h"

#ifndef XILINX_SYSMON_ERR_DEBUG
#define XILINX_SYSMON_ERR_DEBUG 0
#endif

#define TYPE_XILINX_SYSMON "xlnx,zynqmp_sysmon"

#define XILINX_SYSMON(obj) \
     OBJECT_CHECK(SYSMON, (obj), TYPE_XILINX_SYSMON)

REG32(TEMPERATURE, 0x0)
    FIELD(TEMPERATURE, TEMPERATURE, 16, 0)
REG32(SUPPLY1, 0x4)
    FIELD(SUPPLY1, SUPPLY_VAL, 16, 0)
REG32(SUPPLY2, 0x8)
    FIELD(SUPPLY2, SUPPLY_VAL, 16, 0)
REG32(SUPPLY3, 0x18)
    FIELD(SUPPLY3, SUPPLY_VAL, 16, 0)
REG32(SUPPLY4, 0x34)
    FIELD(SUPPLY4, SUPPLY_VAL, 16, 0)
REG32(SUPPLY5, 0x38)
    FIELD(SUPPLY5, SUPPLY_VAL, 16, 0)
REG32(SUPPLY6, 0x3c)
    FIELD(SUPPLY6, SUPPLY_VAL, 16, 0)
REG32(MAX_TEMPERATURE, 0x80)
    FIELD(MAX_TEMPERATURE, TEMPERATURE, 16, 0)
REG32(MAX_SUPPLY1, 0x84)
    FIELD(MAX_SUPPLY1, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY2, 0x88)
    FIELD(MAX_SUPPLY2, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY3, 0x8c)
    FIELD(MAX_SUPPLY3, SUPPLY_VAL, 16, 0)
REG32(MIN_TEMPERATURE, 0x90)
    FIELD(MIN_TEMPERATURE, TEMPERATURE, 16, 0)
REG32(MIN_SUPPLY1, 0x94)
    FIELD(MIN_SUPPLY1, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY2, 0x98)
    FIELD(MIN_SUPPLY2, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY3, 0x9c)
    FIELD(MIN_SUPPLY3, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY4, 0xa0)
    FIELD(MAX_SUPPLY4, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY5, 0xa4)
    FIELD(MAX_SUPPLY5, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY6, 0xa8)
    FIELD(MAX_SUPPLY6, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY4, 0xb0)
    FIELD(MIN_SUPPLY4, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY5, 0xb4)
    FIELD(MIN_SUPPLY5, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY6, 0xb8)
    FIELD(MIN_SUPPLY6, SUPPLY_VAL, 16, 0)
REG32(STATUS_FLAG, 0xfc)
    FIELD(STATUS_FLAG, CLK_OSC_USED, 1, 15)
    FIELD(STATUS_FLAG, BLOCK_IN_RESET, 1, 14)
    FIELD(STATUS_FLAG, JTAG_DISABLED, 1, 11)
    FIELD(STATUS_FLAG, JTAG_READ_ONLY, 1, 10)
    FIELD(STATUS_FLAG, INTERNAL_REF, 1, 9)
    FIELD(STATUS_FLAG, DISABLED, 1, 8)
    FIELD(STATUS_FLAG, ALM_6_3, 4, 4)
    FIELD(STATUS_FLAG, OT, 1, 3)
    FIELD(STATUS_FLAG, ALM_2_0, 3, 0)
REG32(CONFIG_REG0, 0x100)
    FIELD(CONFIG_REG0, AVERAGING, 2, 12)
    FIELD(CONFIG_REG0, EXTERNAL_MUX, 1, 11)
    FIELD(CONFIG_REG0, BU, 1, 10)
    FIELD(CONFIG_REG0, EC, 1, 9)
    FIELD(CONFIG_REG0, ACQ, 1, 8)
    FIELD(CONFIG_REG0, MUX_CHANNEL, 6, 0)
REG32(CONFIG_REG1, 0x104)
    FIELD(CONFIG_REG1, SEQUENCE_MODE, 4, 12)
    FIELD(CONFIG_REG1, ALARM_DISABLE6TO3, 4, 8)
    FIELD(CONFIG_REG1, ALARM_DISABLE2TO0, 3, 1)
    FIELD(CONFIG_REG1, OVER_TEMP_DISABLE, 1, 0)
REG32(CONFIG_REG2, 0x108)
    FIELD(CONFIG_REG2, CLOCK_DIVIDER, 8, 8)
    FIELD(CONFIG_REG2, POWER_DOWN, 4, 4)
    FIELD(CONFIG_REG2, TEST_CHANNEL_EN, 1, 2)
    FIELD(CONFIG_REG2, TEST_MODE, 2, 0)
REG32(CONFIG_REG3, 0x10c)
    FIELD(CONFIG_REG3, I2C_OVERRIDE_EN, 1, 15)
    FIELD(CONFIG_REG3, I2C_OVERRIDE_ADDR, 7, 8)
    FIELD(CONFIG_REG3, I2C_EN, 1, 7)
    FIELD(CONFIG_REG3, ALARM_DISABLE13TO8, 6, 0)
REG32(CONFIG_REG4, 0x110)
    FIELD(CONFIG_REG4, LOW_RATE_EOS, 2, 10)
    FIELD(CONFIG_REG4, SEQUENCE_RATE, 2, 8)
    FIELD(CONFIG_REG4, VUSER_ENABLE_HRANGE, 4, 0)
REG32(SEQ_CHANNEL2, 0x118)
    FIELD(SEQ_CHANNEL2, TEMPERATURE_REMOTE, 1, 5)
    FIELD(SEQ_CHANNEL2, VCCAMS, 1, 4)
    FIELD(SEQ_CHANNEL2, SUPPLY10, 1, 3)
    FIELD(SEQ_CHANNEL2, SUPPLY9, 1, 2)
    FIELD(SEQ_CHANNEL2, SUPPLY8, 1, 1)
    FIELD(SEQ_CHANNEL2, SUPPLY7, 1, 0)
REG32(SEQ_AVERAGE2, 0x11c)
    FIELD(SEQ_AVERAGE2, AVERAGE2, 16, 0)
REG32(SEQ_CHANNEL0, 0x120)
    FIELD(SEQ_CHANNEL0, CURRENT_MON, 1, 15)
    FIELD(SEQ_CHANNEL0, SUPPLY3, 1, 14)
    FIELD(SEQ_CHANNEL0, VREFN, 1, 13)
    FIELD(SEQ_CHANNEL0, VREFP, 1, 12)
    FIELD(SEQ_CHANNEL0, VP_VN, 1, 11)
    FIELD(SEQ_CHANNEL0, SUPPLY2, 1, 10)
    FIELD(SEQ_CHANNEL0, SUPPLY1, 1, 9)
    FIELD(SEQ_CHANNEL0, TEMPERATURE, 1, 8)
    FIELD(SEQ_CHANNEL0, SUPPLY6, 1, 7)
    FIELD(SEQ_CHANNEL0, SUPPLY5, 1, 6)
    FIELD(SEQ_CHANNEL0, SUPPLY4, 1, 5)
    FIELD(SEQ_CHANNEL0, TEST_CHANNEL, 1, 3)
    FIELD(SEQ_CHANNEL0, CALIBRATION, 1, 0)
REG32(SEQ_CHANNEL1, 0x124)
    FIELD(SEQ_CHANNEL1, VAUX0F, 1, 15)
    FIELD(SEQ_CHANNEL1, VAUX0E, 1, 14)
    FIELD(SEQ_CHANNEL1, VAUX0D, 1, 13)
    FIELD(SEQ_CHANNEL1, VAUX0C, 1, 12)
    FIELD(SEQ_CHANNEL1, VAUX0B, 1, 11)
    FIELD(SEQ_CHANNEL1, VAUX0A, 1, 10)
    FIELD(SEQ_CHANNEL1, VAUX09, 1, 9)
    FIELD(SEQ_CHANNEL1, VAUX08, 1, 8)
    FIELD(SEQ_CHANNEL1, VAUX07, 1, 7)
    FIELD(SEQ_CHANNEL1, VAUX06, 1, 6)
    FIELD(SEQ_CHANNEL1, VAUX05, 1, 5)
    FIELD(SEQ_CHANNEL1, VAUX04, 1, 4)
    FIELD(SEQ_CHANNEL1, VAUX03, 1, 3)
    FIELD(SEQ_CHANNEL1, VAUX02, 1, 2)
    FIELD(SEQ_CHANNEL1, VAUX01, 1, 1)
    FIELD(SEQ_CHANNEL1, VAUX00, 1, 0)
REG32(SEQ_AVERAGE0, 0x128)
    FIELD(SEQ_AVERAGE0, AVERAGE0, 16, 0)
REG32(SEQ_AVERAGE1, 0x12c)
    FIELD(SEQ_AVERAGE1, AVERAGE1, 16, 0)
REG32(SEQ_INPUT_MODE0, 0x130)
    FIELD(SEQ_INPUT_MODE0, INPUT_MODE0, 16, 0)
REG32(SEQ_INPUT_MODE1, 0x134)
    FIELD(SEQ_INPUT_MODE1, INPUT_MODE1, 16, 0)
REG32(SEQ_ACQ0, 0x138)
    FIELD(SEQ_ACQ0, ACQ0, 16, 0)
REG32(SEQ_ACQ1, 0x13c)
    FIELD(SEQ_ACQ1, ACQ1, 16, 0)
REG32(ALARM_TEMPERATURE_UPPER, 0x140)
    FIELD(ALARM_TEMPERATURE_UPPER, TEMPERATURE_ALARM, 16, 0)
REG32(ALARM_SUPPLY1_UPPER, 0x144)
    FIELD(ALARM_SUPPLY1_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY2_UPPER, 0x148)
    FIELD(ALARM_SUPPLY2_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_OT_UPPER, 0x14c)
    FIELD(ALARM_OT_UPPER, TEMPERATURE_ALARM, 16, 0)
REG32(ALARM_TEMPERATURE_LOWER, 0x150)
    FIELD(ALARM_TEMPERATURE_LOWER, TEMPERATURE_ALARM, 15, 1)
    FIELD(ALARM_TEMPERATURE_LOWER, THRESHOLD_MODE, 1, 0)
REG32(ALARM_SUPPLY1_LOWER, 0x154)
    FIELD(ALARM_SUPPLY1_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY2_LOWER, 0x158)
    FIELD(ALARM_SUPPLY2_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_OT_LOWER, 0x15c)
    FIELD(ALARM_OT_LOWER, TEMPERATURE_ALARM, 15, 1)
    FIELD(ALARM_OT_LOWER, THRESHOLD_MODE, 1, 0)
REG32(ALARM_SUPPLY3_UPPER, 0x160)
    FIELD(ALARM_SUPPLY3_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY4_UPPER, 0x164)
    FIELD(ALARM_SUPPLY4_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY5_UPPER, 0x168)
    FIELD(ALARM_SUPPLY5_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY6_UPPER, 0x16c)
    FIELD(ALARM_SUPPLY6_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY3_LOWER, 0x170)
    FIELD(ALARM_SUPPLY3_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY4_LOWER, 0x174)
    FIELD(ALARM_SUPPLY4_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY5_LOWER, 0x178)
    FIELD(ALARM_SUPPLY5_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY6_LOWER, 0x17c)
    FIELD(ALARM_SUPPLY6_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY7_UPPER, 0x180)
    FIELD(ALARM_SUPPLY7_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY8_UPPER, 0x184)
    FIELD(ALARM_SUPPLY8_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY9_UPPER, 0x188)
    FIELD(ALARM_SUPPLY9_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY10_UPPER, 0x18c)
    FIELD(ALARM_SUPPLY10_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_VCCAMS_UPPER, 0x190)
    FIELD(ALARM_VCCAMS_UPPER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_TREMOTE_UPPER, 0x194)
    FIELD(ALARM_TREMOTE_UPPER, TEMPERATURE_ALARM, 16, 0)
REG32(ALARM_SUPPLY7_LOWER, 0x1a0)
    FIELD(ALARM_SUPPLY7_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY8_LOWER, 0x1a4)
    FIELD(ALARM_SUPPLY8_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY9_LOWER, 0x1a8)
    FIELD(ALARM_SUPPLY9_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_SUPPLY10_LOWER, 0x1ac)
    FIELD(ALARM_SUPPLY10_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_VCCAMS_LOWER, 0x1b0)
    FIELD(ALARM_VCCAMS_LOWER, SUPPLY_ALARM, 16, 0)
REG32(ALARM_TREMOTE_LOWER, 0x1b4)
    FIELD(ALARM_TREMOTE_LOWER, TEMPERATURE_ALARM, 15, 1)
    FIELD(ALARM_TREMOTE_LOWER, THRESHOLD_MODE, 1, 0)
REG32(SEQ_INPUT_MODE2, 0x1e0)
    FIELD(SEQ_INPUT_MODE2, INPUT_MODE2, 16, 0)
REG32(SEQ_ACQ2, 0x1e4)
    FIELD(SEQ_ACQ2, ACQ2, 16, 0)
REG32(SUPPLY7, 0x200)
    FIELD(SUPPLY7, SUPPLY_VAL, 16, 0)
REG32(SUPPLY8, 0x204)
    FIELD(SUPPLY8, SUPPLY_VAL, 16, 0)
REG32(SUPPLY9, 0x208)
    FIELD(SUPPLY9, SUPPLY_VAL, 16, 0)
REG32(SUPPLY10, 0x20c)
    FIELD(SUPPLY10, SUPPLY_VAL, 16, 0)
REG32(VCCAMS, 0x210)
    FIELD(VCCAMS, SUPPLY_VAL, 16, 0)
REG32(TEMPERATURE_REMOTE, 0x214)
    FIELD(TEMPERATURE_REMOTE, TEMPERATURE, 16, 0)
REG32(MAX_SUPPLY7, 0x280)
    FIELD(MAX_SUPPLY7, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY8, 0x284)
    FIELD(MAX_SUPPLY8, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY9, 0x288)
    FIELD(MAX_SUPPLY9, SUPPLY_VAL, 16, 0)
REG32(MAX_SUPPLY10, 0x28c)
    FIELD(MAX_SUPPLY10, SUPPLY_VAL, 16, 0)
REG32(MAX_VCCAMS, 0x290)
    FIELD(MAX_VCCAMS, SUPPLY_VAL, 16, 0)
REG32(MAX_TEMPERATURE_REMOTE, 0x294)
    FIELD(MAX_TEMPERATURE_REMOTE, TEMPERATURE, 16, 0)
REG32(MIN_SUPPLY7, 0x2a0)
    FIELD(MIN_SUPPLY7, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY8, 0x2a4)
    FIELD(MIN_SUPPLY8, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY9, 0x2a8)
    FIELD(MIN_SUPPLY9, SUPPLY_VAL, 16, 0)
REG32(MIN_SUPPLY10, 0x2ac)
    FIELD(MIN_SUPPLY10, SUPPLY_VAL, 16, 0)
REG32(MIN_VCCAMS, 0x2b0)
    FIELD(MIN_VCCAMS, SUPPLY_VAL, 16, 0)
REG32(MIN_TEMPERATURE_REMOTE, 0x2b4)
    FIELD(MIN_TEMPERATURE_REMOTE, TEMPERATURE, 16, 0)

#define R_MAX (R_MIN_TEMPERATURE_REMOTE + 1)

typedef struct SYSMON {
    SysBusDevice parent_obj;
    MemoryRegion iomem;

    uint32_t regs[R_MAX];
    RegisterInfo regs_info[R_MAX];
} SYSMON;

static RegisterAccessInfo sysmon_regs_info[] = {
    {   .name = "TEMPERATURE",  .decode.addr = A_TEMPERATURE,
        .ro = 0xffff,
    },{ .name = "SUPPLY1",  .decode.addr = A_SUPPLY1,
        .ro = 0xffff,
    },{ .name = "SUPPLY2",  .decode.addr = A_SUPPLY2,
        .ro = 0xffff,
    },{ .name = "SUPPLY3",  .decode.addr = A_SUPPLY3,
        .ro = 0xffff,
    },{ .name = "SUPPLY4",  .decode.addr = A_SUPPLY4,
        .ro = 0xffff,
    },{ .name = "SUPPLY5",  .decode.addr = A_SUPPLY5,
        .ro = 0xffff,
    },{ .name = "SUPPLY6",  .decode.addr = A_SUPPLY6,
        .ro = 0xffff,
    },{ .name = "MAX_TEMPERATURE",  .decode.addr = A_MAX_TEMPERATURE,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY1",  .decode.addr = A_MAX_SUPPLY1,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY2",  .decode.addr = A_MAX_SUPPLY2,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY3",  .decode.addr = A_MAX_SUPPLY3,
        .ro = 0xffff,
    },{ .name = "MIN_TEMPERATURE",  .decode.addr = A_MIN_TEMPERATURE,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY1",  .decode.addr = A_MIN_SUPPLY1,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY2",  .decode.addr = A_MIN_SUPPLY2,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY3",  .decode.addr = A_MIN_SUPPLY3,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY4",  .decode.addr = A_MAX_SUPPLY4,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY5",  .decode.addr = A_MAX_SUPPLY5,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY6",  .decode.addr = A_MAX_SUPPLY6,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY4",  .decode.addr = A_MIN_SUPPLY4,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY5",  .decode.addr = A_MIN_SUPPLY5,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY6",  .decode.addr = A_MIN_SUPPLY6,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "STATUS_FLAG",  .decode.addr = A_STATUS_FLAG,
        .reset = 0xa00,
        .rsvd = 0x3000,
        .ro = 0xffff,
    },{ .name = "CONFIG_REG0",  .decode.addr = A_CONFIG_REG0,
        .rsvd = 0xc0c0,
    },{ .name = "CONFIG_REG1",  .decode.addr = A_CONFIG_REG1,
        .rsvd = 0xf0,
    },{ .name = "CONFIG_REG2",  .decode.addr = A_CONFIG_REG2,
        .rsvd = 0x8,
    },{ .name = "CONFIG_REG3",  .decode.addr = A_CONFIG_REG3,
        .rsvd = 0x40,
    },{ .name = "CONFIG_REG4",  .decode.addr = A_CONFIG_REG4,
        .rsvd = 0xf0f0,
    },{ .name = "SEQ_CHANNEL2",  .decode.addr = A_SEQ_CHANNEL2,
        .rsvd = 0xffc0,
    },{ .name = "SEQ_AVERAGE2",  .decode.addr = A_SEQ_AVERAGE2,
    },{ .name = "SEQ_CHANNEL0",  .decode.addr = A_SEQ_CHANNEL0,
        .rsvd = 0x16,
    },{ .name = "SEQ_CHANNEL1",  .decode.addr = A_SEQ_CHANNEL1,
    },{ .name = "SEQ_AVERAGE0",  .decode.addr = A_SEQ_AVERAGE0,
    },{ .name = "SEQ_AVERAGE1",  .decode.addr = A_SEQ_AVERAGE1,
    },{ .name = "SEQ_INPUT_MODE0",  .decode.addr = A_SEQ_INPUT_MODE0,
    },{ .name = "SEQ_INPUT_MODE1",  .decode.addr = A_SEQ_INPUT_MODE1,
    },{ .name = "SEQ_ACQ0",  .decode.addr = A_SEQ_ACQ0,
    },{ .name = "SEQ_ACQ1",  .decode.addr = A_SEQ_ACQ1,
    },{ .name = "ALARM_TEMPERATURE_UPPER",
        .decode.addr = A_ALARM_TEMPERATURE_UPPER,
    },{ .name = "ALARM_SUPPLY1_UPPER",  .decode.addr = A_ALARM_SUPPLY1_UPPER,
    },{ .name = "ALARM_SUPPLY2_UPPER",  .decode.addr = A_ALARM_SUPPLY2_UPPER,
    },{ .name = "ALARM_OT_UPPER",  .decode.addr = A_ALARM_OT_UPPER,
    },{ .name = "ALARM_TEMPERATURE_LOWER",
        .decode.addr = A_ALARM_TEMPERATURE_LOWER,
    },{ .name = "ALARM_SUPPLY1_LOWER",  .decode.addr = A_ALARM_SUPPLY1_LOWER,
    },{ .name = "ALARM_SUPPLY2_LOWER",  .decode.addr = A_ALARM_SUPPLY2_LOWER,
    },{ .name = "ALARM_OT_LOWER",  .decode.addr = A_ALARM_OT_LOWER,
    },{ .name = "ALARM_SUPPLY3_UPPER",  .decode.addr = A_ALARM_SUPPLY3_UPPER,
    },{ .name = "ALARM_SUPPLY4_UPPER",  .decode.addr = A_ALARM_SUPPLY4_UPPER,
    },{ .name = "ALARM_SUPPLY5_UPPER",  .decode.addr = A_ALARM_SUPPLY5_UPPER,
    },{ .name = "ALARM_SUPPLY6_UPPER",  .decode.addr = A_ALARM_SUPPLY6_UPPER,
    },{ .name = "ALARM_SUPPLY3_LOWER",  .decode.addr = A_ALARM_SUPPLY3_LOWER,
    },{ .name = "ALARM_SUPPLY4_LOWER",  .decode.addr = A_ALARM_SUPPLY4_LOWER,
    },{ .name = "ALARM_SUPPLY5_LOWER",  .decode.addr = A_ALARM_SUPPLY5_LOWER,
    },{ .name = "ALARM_SUPPLY6_LOWER",  .decode.addr = A_ALARM_SUPPLY6_LOWER,
    },{ .name = "ALARM_SUPPLY7_UPPER",  .decode.addr = A_ALARM_SUPPLY7_UPPER,
    },{ .name = "ALARM_SUPPLY8_UPPER",  .decode.addr = A_ALARM_SUPPLY8_UPPER,
    },{ .name = "ALARM_SUPPLY9_UPPER",  .decode.addr = A_ALARM_SUPPLY9_UPPER,
    },{ .name = "ALARM_SUPPLY10_UPPER",  .decode.addr = A_ALARM_SUPPLY10_UPPER,
    },{ .name = "ALARM_VCCAMS_UPPER",  .decode.addr = A_ALARM_VCCAMS_UPPER,
    },{ .name = "ALARM_TREMOTE_UPPER",  .decode.addr = A_ALARM_TREMOTE_UPPER,
    },{ .name = "ALARM_SUPPLY7_LOWER",  .decode.addr = A_ALARM_SUPPLY7_LOWER,
    },{ .name = "ALARM_SUPPLY8_LOWER",  .decode.addr = A_ALARM_SUPPLY8_LOWER,
    },{ .name = "ALARM_SUPPLY9_LOWER",  .decode.addr = A_ALARM_SUPPLY9_LOWER,
    },{ .name = "ALARM_SUPPLY10_LOWER",  .decode.addr = A_ALARM_SUPPLY10_LOWER,
    },{ .name = "ALARM_VCCAMS_LOWER",  .decode.addr = A_ALARM_VCCAMS_LOWER,
    },{ .name = "ALARM_TREMOTE_LOWER",  .decode.addr = A_ALARM_TREMOTE_LOWER,
    },{ .name = "SEQ_INPUT_MODE2",  .decode.addr = A_SEQ_INPUT_MODE2,
    },{ .name = "SEQ_ACQ2",  .decode.addr = A_SEQ_ACQ2,
    },{ .name = "SUPPLY7",  .decode.addr = A_SUPPLY7,
        .ro = 0xffff,
    },{ .name = "SUPPLY8",  .decode.addr = A_SUPPLY8,
        .ro = 0xffff,
    },{ .name = "SUPPLY9",  .decode.addr = A_SUPPLY9,
        .ro = 0xffff,
    },{ .name = "SUPPLY10",  .decode.addr = A_SUPPLY10,
        .ro = 0xffff,
    },{ .name = "VCCAMS",  .decode.addr = A_VCCAMS,
        .ro = 0xffff,
    },{ .name = "TEMPERATURE_REMOTE",  .decode.addr = A_TEMPERATURE_REMOTE,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY7",  .decode.addr = A_MAX_SUPPLY7,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY8",  .decode.addr = A_MAX_SUPPLY8,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY9",  .decode.addr = A_MAX_SUPPLY9,
        .ro = 0xffff,
    },{ .name = "MAX_SUPPLY10",  .decode.addr = A_MAX_SUPPLY10,
        .ro = 0xffff,
    },{ .name = "MAX_VCCAMS",  .decode.addr = A_MAX_VCCAMS,
        .ro = 0xffff,
    },{ .name = "MAX_TEMPERATURE_REMOTE",
        .decode.addr = A_MAX_TEMPERATURE_REMOTE,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY7",  .decode.addr = A_MIN_SUPPLY7,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY8",  .decode.addr = A_MIN_SUPPLY8,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY9",  .decode.addr = A_MIN_SUPPLY9,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_SUPPLY10",  .decode.addr = A_MIN_SUPPLY10,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_VCCAMS",  .decode.addr = A_MIN_VCCAMS,
        .reset = 0xffff,
        .ro = 0xffff,
    },{ .name = "MIN_TEMPERATURE_REMOTE",
        .decode.addr = A_MIN_TEMPERATURE_REMOTE,
        .reset = 0xffff,
        .ro = 0xffff,
    }
};

static void sysmon_reset(DeviceState *dev)
{
    SYSMON *s = XILINX_SYSMON(dev);
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(s->regs_info); ++i) {
        register_reset(&s->regs_info[i]);
    }

}

static uint64_t sysmon_read(void *opaque, hwaddr addr, unsigned size)
{
    SYSMON *s = XILINX_SYSMON(opaque);
    RegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log("%s: Decode error: read from %" HWADDR_PRIx "\n",
                 object_get_canonical_path(OBJECT(s)),
                 addr);
        return 0;
    }
    return register_read(r);
}

static void sysmon_write(void *opaque, hwaddr addr, uint64_t value,
                      unsigned size)
{
    SYSMON *s = XILINX_SYSMON(opaque);
    RegisterInfo *r = &s->regs_info[addr / 4];

    if (!r->data) {
        qemu_log("%s: Decode error: write to %" HWADDR_PRIx "=%" PRIx64 "\n",
                 object_get_canonical_path(OBJECT(s)),
                 addr, value);
        return;
    }
    register_write(r, value, ~0);
}

static const MemoryRegionOps sysmon_ops = {
    .read = sysmon_read,
    .write = sysmon_write,
    .endianness = DEVICE_LITTLE_ENDIAN,
    .valid = {
        .min_access_size = 4,
        .max_access_size = 4,
    },
};

static void sysmon_realize(DeviceState *dev, Error **errp)
{
    SYSMON *s = XILINX_SYSMON(dev);
    const char *prefix = object_get_canonical_path(OBJECT(dev));
    unsigned int i;

    for (i = 0; i < ARRAY_SIZE(sysmon_regs_info); ++i) {
        RegisterInfo *r;

        r = &s->regs_info[sysmon_regs_info[i].decode.addr / 4];
        *r = (RegisterInfo) {
            .data = (uint8_t *)&s->regs[
                    sysmon_regs_info[i].decode.addr / 4],
            .data_size = sizeof(uint32_t),
            .access = &sysmon_regs_info[i],
            .debug = XILINX_SYSMON_ERR_DEBUG,
            .prefix = prefix,
            .opaque = s,
        };
    }
}

static void sysmon_init(Object *obj)
{
    SYSMON *s = XILINX_SYSMON(obj);
    SysBusDevice *sbd = SYS_BUS_DEVICE(obj);

    memory_region_init_io(&s->iomem, obj, &sysmon_ops, s,
                          TYPE_XILINX_SYSMON, R_MAX * 4);
    sysbus_init_mmio(sbd, &s->iomem);
}

static const VMStateDescription vmstate_sysmon = {
    .name = TYPE_XILINX_SYSMON,
    .version_id = 1,
    .minimum_version_id = 1,
    .minimum_version_id_old = 1,
    .fields = (VMStateField[]) {
        VMSTATE_UINT32_ARRAY(regs, SYSMON, R_MAX),
        VMSTATE_END_OF_LIST(),
    }
};

static void sysmon_class_init(ObjectClass *klass, void *data)
{
    DeviceClass *dc = DEVICE_CLASS(klass);

    dc->reset = sysmon_reset;
    dc->realize = sysmon_realize;
    dc->vmsd = &vmstate_sysmon;
}

static const TypeInfo sysmon_info = {
    .name          = TYPE_XILINX_SYSMON,
    .parent        = TYPE_SYS_BUS_DEVICE,
    .instance_size = sizeof(SYSMON),
    .class_init    = sysmon_class_init,
    .instance_init = sysmon_init,
};

static void sysmon_register_types(void)
{
    type_register_static(&sysmon_info);
}

type_init(sysmon_register_types)
