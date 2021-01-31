/*
 * drivers/power/axp/axp2101/axp2101.h
 * (C) Copyright 2010-2016
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * Pannan <pannan@allwinnertech.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 */

#ifndef axp2101_H_
#define axp2101_H_

#define axp2101_RSB_RTSADDR     (0x2d)

#define axp2101_COMM_STAT0      (0x00)
#define axp2101_COMM_STAT1      (0x01)
#define axp2101_CHIP_ID         (0x03)
#define axp2101_DATA_BUFFER0    (0x04)
#define axp2101_DATA_BUFFER1    (0x05)
#define axp2101_DATA_BUFFER2    (0x06)
#define axp2101_DATA_BUFFER3    (0x07)
#define axp2101_COMM_FAULT      (0x08)
#define axp2101_COMM_CFG        (0X10)
#define axp2101_BATFET_CTRL     (0X12)
#define axp2101_DIE_TEMP_CFG    (0X13)
#define axp2101_VSYS_MIN        (0x14)
#define axp2101_VINDPM_CFG      (0x15)
#define axp2101_IIN_LIM         (0x16)
#define axp2101_RESET_CFG       (0x17)
#define axp2101_MODULE_EN       (0x18)
#define axp2101_WATCHDOG_CFG    (0x19)
#define axp2101_GAUGE_THLD      (0x1A)
#define axp2101_GPIO12_CTRL     (0x1B)
#define axp2101_GPIO34_CTRL     (0x1C)
#define axp2101_BUS_MODE_SEL    (0x1D)
#define axp2101_PWRON_STAT      (0x20)
#define axp2101_PWROFF_STAT     (0x21)
#define axp2101_PWROFF_EN       (0x22)
#define axp2101_DCDC_PWROFF_EN  (0x23)
#define axp2101_VOFF_THLD       (0x24)
#define axp2101_PWR_TIME_CTRL   (0x25)
#define axp2101_SLEEP_CFG       (0x26)
#define axp2101_PONLEVEL        (0x27)
#define axp2101_FAST_PWRON_CFG0 (0x28)
#define axp2101_FAST_PWRON_CFG1 (0x29)
#define axp2101_FAST_PWRON_CFG2 (0x2A)
#define axp2101_FAST_PWRON_CFG3 (0x2B)
#define axp2101_ADC_CH_EN0      (0x30)
#define axp2101_ADC_CH_EN1      (0x31)
#define axp2101_ADC_CH_EN2      (0x32)
#define axp2101_ADC_CH_EN3      (0x33)
#define axp2101_VBAT_H          (0x34)
#define axp2101_VBAT_L          (0x35)
#define axp2101_TS_H            (0x36)
#define axp2101_TS_L            (0x37)
#define axp2101_VBUS_H          (0x38)
#define axp2101_VBUS_L          (0x39)
#define axp2101_VSYS_H          (0x3A)
#define axp2101_VSYS_L          (0x3B)
#define axp2101_TDIE_H          (0x3C)
#define axp2101_TDIE_L          (0x3D)
#define axp2101_GPADC_H         (0x3E)
#define axp2101_GPADC_L         (0x3F)
#define axp2101_INTEN1          (0x40)
#define axp2101_INTEN2          (0x41)
#define axp2101_INTEN3          (0x42)
#define axp2101_INTSTS1         (0x48)
#define axp2101_INTSTS2         (0x49)
#define axp2101_INTSTS3         (0x4A)
#define axp2101_TS_CFG          (0x50)

#define axp2101_TS_HYSHL2H      (0x52)
#define axp2101_TS_HYSH21       (0x53)
#define axp2101_VLTF_CHG        (0x54)
#define axp2101_VHTF_CHG        (0x55)
#define axp2101_VLTF_WORK       (0x56)
#define axp2101_VHTF_WORK       (0x57)
#define axp2101_JEITA_CFG       (0x58)
#define axp2101_JEITA_CV_CFG    (0x59)
#define axp2101_JEITA_COOL      (0x5A)
#define axp2101_JEITA_WARM      (0x5B)
#define axp2101_TS_CFG_DATA_H   (0x5C)
#define axp2101_TS_CFG_DATA_L   (0x5D)
#define axp2101_CHG_CFG         (0x60)
#define axp2101_IPRECHG_CFG     (0x61)
#define axp2101_ICC_CFG         (0x62)
#define axp2101_ITERM_CFG       (0x63)
#define axp2101_CHG_V_CFG       (0x64)
#define axp2101_TREGU_THLD      (0x65)
#define axp2101_CHG_FREQ        (0x66)
#define axp2101_CHG_TMR_CFG     (0x67)
#define axp2101_BAT_DET         (0x68)
#define axp2101_CHGLED_CFG      (0x69)
#define axp2101_BTN_CHG_CFG     (0x6A)
#define axp2101_SW_TEST_CFG     (0x7B)
#define axp2101_DCDC_CFG0       (0x80)
#define axp2101_DCDC_CFG1       (0x81)
#define axp2101_DCDC1_CFG       (0x82)
#define axp2101_DCDC2_CFG       (0x83)
#define axp2101_DCDC3_CFG       (0x84)
#define axp2101_DCDC4_CFG       (0x85)
#define axp2101_DCDC5_CFG       (0x86)
#define axp2101_DCDC_OC_CFG     (0x87)
#define axp2101_LDO_EN_CFG0     (0x90)
#define axp2101_LDO_EN_CFG1     (0x91)
#define axp2101_ALDO1_CFG       (0x92)
#define axp2101_ALDO2_CFG       (0x93)
#define axp2101_ALDO3_CFG       (0x94)
#define axp2101_ALDO4_CFG       (0x95)
#define axp2101_BLDO1_CFG       (0x96)
#define axp2101_BLDO2_CFG       (0x97)
#define axp2101_CPUSLD_CFG      (0x98)
#define axp2101_DLDO1_CFG       (0x99)
#define axp2101_DLDO2_CFG       (0x9A)
#define axp2101_IP_VER          (0xA0)
#define axp2101_BROM            (0xA1)
#define axp2101_CONFIG          (0xA2)
#define axp2101_TEMPERATURE     (0xA3)
#define axp2101_SOC             (0xA4)
#define axp2101_TIME2EMPTY_H    (0xA6)
#define axp2101_TIME2EMPTY_L    (0xA7)
#define axp2101_TIME2FULL_H     (0xA8)
#define axp2101_TIME2FULL_L     (0xA9)
#define axp2101_FW_VERSION      (0xAB)
#define axp2101_INT0_FLAG       (0xAC)
#define axp2101_COUTER_PERIOD   (0xAD)
#define axp2101_BG_TRIM         (0xAE)
#define axp2101_OSC_TRIM        (0xAF)
#define axp2101_FG_ADDR         (0xB0)
#define axp2101_FG_DATA_H       (0xB2)
#define axp2101_FG_DATA_L       (0xB3)
#define axp2101_RAM_MBIST       (0xB4)
#define axp2101_ROM_TEST        (0xB5)
#define axp2101_ROM_TEST_RT0    (0xB6)
#define axp2101_ROM_TEST_RT1    (0xB7)
#define axp2101_ROM_TEST_RT2    (0xB8)
#define axp2101_ROM_TEST_RT3    (0xB9)
#define axp2101_WD_CLR_DIS      (0xBA)

#define axp2101_BUFFERC         (0xff)

/* bit definitions for AXP events ,irq event */
#define IRQ_NUM(offset, b)      (offset * 8 + b)

#define axp2101_IRQ_SOCWL2      IRQ_NUM(0, 7)
#define axp2101_IRQ_SOCWL1      IRQ_NUM(0, 6)
#define axp2101_IRQ_GWDT        IRQ_NUM(0, 5)
#define axp2101_IRQ_NEWSOC      IRQ_NUM(0, 4)
#define axp2101_IRQ_BCOT        IRQ_NUM(0, 3)
#define axp2101_IRQ_BCUT        IRQ_NUM(0, 2)
#define axp2101_IRQ_BWOT        IRQ_NUM(0, 1)
#define axp2101_IRQ_BWUT        IRQ_NUM(0, 0)
#define axp2101_IRQ_VINSET      IRQ_NUM(1, 7)
#define axp2101_IRQ_VREMOV      IRQ_NUM(1, 6)
#define axp2101_IRQ_BINSERT     IRQ_NUM(1, 5)
#define axp2101_IRQ_BREMOV      IRQ_NUM(1, 4)
#define axp2101_IRQ_PONS        IRQ_NUM(1, 3)
#define axp2101_IRQ_PONL        IRQ_NUM(1, 2)
#define axp2101_IRQ_PONN        IRQ_NUM(1, 1)
#define axp2101_IRQ_PONP        IRQ_NUM(1, 0)
#define axp2101_IRQ_WDEXP       IRQ_NUM(2, 7)
#define axp2101_IRQ_LDOOC       IRQ_NUM(2, 6)
#define axp2101_IRQ_BOCP        IRQ_NUM(2, 5)
#define axp2101_IRQ_CHGDN       IRQ_NUM(2, 4)
#define axp2101_IRQ_CHGST       IRQ_NUM(2, 3)
#define axp2101_IRQ_DOTL1       IRQ_NUM(2, 2)
#define axp2101_IRQ_CHGTE       IRQ_NUM(2, 1)
#define axp2101_IRQ_BOVP        IRQ_NUM(2, 0)



extern s32 axp_debug;
extern struct axp_config_info axp2101_config;

#endif /* axp2101_H_ */