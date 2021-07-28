

 /*
 * Copyright 2020 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 *
 * Generated code from MX8M_DDR_tool
 * Align with uboot-imx_v2017.03_4.9.51_imx8m_ga
 */

#include <common.h>
#include <asm/io.h>
#include <asm/arch/ddr_memory_map.h>
#include "ddr.h"

extern void wait_ddrphy_training_complete(void);

void phy_io_write(uint32_t addr, uint16_t data)
{
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * addr, data);
}

void ddrphy_phyinit_A_bringupPower(void) {
}

void ddrphy_phyinit_B_startClockResetPhy(void) {
}

void ddrphy_phyinit_C_phyConfigure(void) {

    //##############################################################
    // TxPreDrvMode[2] = userInputBasic.Lp4xMode 
    //##############################################################
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxSlewRate::TxPreDrvMode to 0x1
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxSlewRate::TxPreP to 0xf
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxSlewRate::TxPreN to 0xf
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for TxSlewRate::TxPreP and TxSlewRate::TxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x1005f, 0x1ff);
    phy_io_write(0x1015f, 0x1ff);
    phy_io_write(0x1105f, 0x1ff);
    phy_io_write(0x1115f, 0x1ff);
    phy_io_write(0x1205f, 0x1ff);
    phy_io_write(0x1215f, 0x1ff);
    phy_io_write(0x1305f, 0x1ff);
    phy_io_write(0x1315f, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=0
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=0
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=0
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x55, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=1
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=1
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=1
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x1055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=2
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=2
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=2
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x2055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=3
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=3
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=3
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x3055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=4
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=4
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=4
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x4055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=5
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=5
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=5
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x5055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=6
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=6
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=6
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x6055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=7
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=7
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=7
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x7055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=8
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=8
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=8
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x8055, 0x1ff);
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreDrvMode to 0x1, ANIB=9
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreP to 0xf, ANIB=9
    // [phyinit_C_initPhyConfig] Programming ATxSlewRate::ATxPreN to 0xf, ANIB=9
    // [phyinit_C_initPhyConfig] ### NOTE ### Optimal setting for ATxSlewRate::ATxPreP and ATxSlewRate::ATxPreP are technology specific.
    // [phyinit_C_initPhyConfig] ### NOTE ### Please consult the "Output Slew Rate" section of HSpice Model App Note in specific technology for recommended settings

    phy_io_write(0x9055, 0x1ff);
    phy_io_write(0x200c5, 0x19);
    // [phyinit_C_initPhyConfig] Pstate=0,  Memclk=1500MHz, Programming PllCtrl2 to 19 based on DfiClk frequency = 750.

    //##############################################################
    //
    // Program ARdPtrInitVal based on Frequency and PLL Bypass inputs
    // The values programmed here assume ideal properties of DfiClk
    // and Pclk including:
    // - DfiClk skew
    // - DfiClk jitter
    // - DfiClk PVT variations
    // - Pclk skew
    // - Pclk jitter
    //
    // PLL Bypassed mode:
    //     For MemClk frequency > 933MHz, the valid range of ARdPtrInitVal_p0[3:0] is: 2-6
    //     For MemClk frequency < 933MHz, the valid range of ARdPtrInitVal_p0[3:0] is: 1-6
    //
    // PLL Enabled mode:
    //     For MemClk frequency > 933MHz, the valid range of ARdPtrInitVal_p0[3:0] is: 1-6
    //     For MemClk frequency < 933MHz, the valid range of ARdPtrInitVal_p0[3:0] is: 0-6
    //
    //##############################################################
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming ARdPtrInitVal to 0x2
    phy_io_write(0x2002e, 0x2);

    //##############################################################
    // Seq0BGPR4       = 0: Make ProcOdtAlwaysOn = 0 and ProcOdtAlwaysOff = 0 
    //##############################################################
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming ProcOdtCtl: Seq0BGPR4.ProcOdtAlwaysOff  to 0x0
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming ProcOdtCtl: Seq0BGPR4.ProcOdtAlwaysOn   to 0x0
    phy_io_write(0x90204, 0x0);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::TwoTckRxDqsPre to 0x0
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::TwoTckTxDqsPre to 0x1
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::PositionDfeInit to 0x2
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::LP4TglTwoTckTxDqsPre to 0x1
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::LP4PostambleExt to 0x1
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl::LP4SttcPreBridgeRxEn to 0x0
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DqsPreambleControl to 0x6a
    phy_io_write(0x20024, 0x6a);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DbyteDllModeCntrl to 0x2
    phy_io_write(0x2003a, 0x2);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming ProcOdtTimeCtl to 0x7
    phy_io_write(0x20056, 0x7);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxOdtDrvStren::ODTStrenP to 0x0
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxOdtDrvStren::ODTStrenN to 0x18
    phy_io_write(0x1004d, 0x600);
    phy_io_write(0x1014d, 0x600);
    phy_io_write(0x1104d, 0x600);
    phy_io_write(0x1114d, 0x600);
    phy_io_write(0x1204d, 0x600);
    phy_io_write(0x1214d, 0x600);
    phy_io_write(0x1304d, 0x600);
    phy_io_write(0x1314d, 0x600);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxImpedanceCtrl1::DrvStrenFSDqP to 0x18
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TxImpedanceCtrl1::DrvStrenFSDqN to 0x18
    phy_io_write(0x10049, 0x618);
    phy_io_write(0x10149, 0x618);
    phy_io_write(0x11049, 0x618);
    phy_io_write(0x11149, 0x618);
    phy_io_write(0x12049, 0x618);
    phy_io_write(0x12149, 0x618);
    phy_io_write(0x13049, 0x618);
    phy_io_write(0x13149, 0x618);
    // [phyinit_C_initPhyConfig] Programming ATxImpedance::ADrvStrenP to 0x1f
    // [phyinit_C_initPhyConfig] Programming ATxImpedance::ADrvStrenN to 0x1f
    phy_io_write(0x43, 0x3ff);
    phy_io_write(0x1043, 0x3ff);
    phy_io_write(0x2043, 0x3ff);
    phy_io_write(0x3043, 0x3ff);
    phy_io_write(0x4043, 0x3ff);
    phy_io_write(0x5043, 0x3ff);
    phy_io_write(0x6043, 0x3ff);
    phy_io_write(0x7043, 0x3ff);
    phy_io_write(0x8043, 0x3ff);
    phy_io_write(0x9043, 0x3ff);
    // [phyinit_C_initPhyConfig] Programming DfiMode to 0x3
    phy_io_write(0x20018, 0x3);
    // [phyinit_C_initPhyConfig] Programming DfiCAMode to 0x4
    phy_io_write(0x20075, 0x4);
    // [phyinit_C_initPhyConfig] Programming CalDrvStr0::CalDrvStrPd50 to 0x0
    // [phyinit_C_initPhyConfig] Programming CalDrvStr0::CalDrvStrPu50 to 0x0
    phy_io_write(0x20050, 0x0);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming CalUclkInfo::CalUClkTicksPer1uS to 0x2ee
    phy_io_write(0x20008, 0x2ee);
    // [phyinit_C_initPhyConfig] Programming CalRate::CalInterval to 0x9
    // [phyinit_C_initPhyConfig] Programming CalRate::CalOnce to 0x0
    phy_io_write(0x20088, 0x9);
    // [phyinit_C_initPhyConfig] Pstate=0, Programming VrefInGlobal::GlobalVrefInSel to 0x4
    // [phyinit_C_initPhyConfig] Pstate=0, Programming VrefInGlobal::GlobalVrefInDAC to 0x1b
    // [phyinit_C_initPhyConfig] Pstate=0, Programming VrefInGlobal to 0xdc
    phy_io_write(0x200b2, 0xdc);
    // [phyinit_C_initPhyConfig] Pstate=0, Programming DqDqsRcvCntrl::MajorModeDbyte to 0x2
    // [phyinit_C_initPhyConfig] Pstate=0, Programming DqDqsRcvCntrl to 0x5a1
    phy_io_write(0x10043, 0x5a1);
    phy_io_write(0x10143, 0x5a1);
    phy_io_write(0x11043, 0x5a1);
    phy_io_write(0x11143, 0x5a1);
    phy_io_write(0x12043, 0x5a1);
    phy_io_write(0x12143, 0x5a1);
    phy_io_write(0x13043, 0x5a1);
    phy_io_write(0x13143, 0x5a1);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DfiFreqRatio_p0 to 0x1
    phy_io_write(0x200fa, 0x1);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TristateModeCA::DisDynAdrTri_p0 to 0x1
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming TristateModeCA::DDR2TMode_p0 to 0x0
    phy_io_write(0x20019, 0x1);
    // [phyinit_C_initPhyConfig] Programming DfiFreqXlat*
    phy_io_write(0x200f0, 0x0);
    phy_io_write(0x200f1, 0x0);
    phy_io_write(0x200f2, 0x4444);
    phy_io_write(0x200f3, 0x8888);
    phy_io_write(0x200f4, 0x5555);
    phy_io_write(0x200f5, 0x0);
    phy_io_write(0x200f6, 0x0);
    phy_io_write(0x200f7, 0xf000);
    // [phyinit_C_initPhyConfig] Programming MasterX4Config::X4TG to 0x0
    phy_io_write(0x20025, 0x0);
    // [phyinit_C_initPhyConfig] Pstate=0, Memclk=1500MHz, Programming DMIPinPresent::RdDbiEnabled to 0x0
    phy_io_write(0x2002d, 0x0);

}

void ddrphy_phyinit_C_customPreTrain(void) {
}

void ddrphy_phyinit_D_loadIMEM(int Train2D) {
    // uboot loads both IMEM and DMEM in with this method
    if(Train2D){
        ddr_load_train_code(FW_2D_IMAGE);
    }
    else {
        ddr_load_train_code(FW_1D_IMAGE);
    }
}

void ddrphy_phyinit_E_setDfiClk(int value) {

    unsigned int tmp;
    reg32_write(0x3038a088, 0x7070000);
    reg32_write(0x3038a084, 0x4030000);
    reg32_write(0x303a00ec, 0xffff);
    tmp = reg32_read(0x303a00f8);
    tmp |= 0x20;
    reg32_write(0x303a00f8, tmp);
    reg32_write(0x30360054, 0xfa080);
    reg32_write(0x30360058, 0x0);
    tmp = reg32_read(0x30360050);
    tmp |= 0x200;
    reg32_write(0x30360050, tmp);
    tmp = reg32_read(0x30360050);
    tmp &= ~0x10;
    reg32_write(0x30360050, tmp);
    do{
        tmp=reg32_read(0x30360050);
        if(tmp&0x80000000) break;
    }while(1);
    reg32_write(0x30389808, 0x1000000);

}

void ddrphy_phyinit_F_loadDMEM(int pstate, int Train2D) {
}

void ddrphy_phyinit_F_overwriteMessageBlock_1D(void) {
    phy_io_write(0xd0000, 0x0);
    phy_io_write(0x54003, 0xbb8);
    phy_io_write(0x54004, 0x2);
    phy_io_write(0x54005, 0x3c3c);
    phy_io_write(0x54006, 0x11);
    phy_io_write(0x54008, 0x131f);
    phy_io_write(0x54009, 0xff);
    phy_io_write(0x5400b, 0x2);
    phy_io_write(0x5400d, 0x100);
    phy_io_write(0x54012, 0x110);
    phy_io_write(0x54019, 0x2dd4);
    phy_io_write(0x5401a, 0x31);
    phy_io_write(0x5401b, 0x4d66);
    phy_io_write(0x5401c, 0x4d00);
    phy_io_write(0x5401e, 0x16);
    phy_io_write(0x5401f, 0x2dd4);
    phy_io_write(0x54020, 0x31);
    phy_io_write(0x54021, 0x4d66);
    phy_io_write(0x54022, 0x4d00);
    phy_io_write(0x54024, 0x16);
    phy_io_write(0x5402b, 0x1000);
    phy_io_write(0x5402c, 0x1);
    phy_io_write(0x54032, 0xd400);
    phy_io_write(0x54033, 0x312d);
    phy_io_write(0x54034, 0x6600);
    phy_io_write(0x54035, 0x4d);
    phy_io_write(0x54036, 0x4d);
    phy_io_write(0x54037, 0x1600);
    phy_io_write(0x54038, 0xd400);
    phy_io_write(0x54039, 0x312d);
    phy_io_write(0x5403a, 0x6600);
    phy_io_write(0x5403b, 0x4d);
    phy_io_write(0x5403c, 0x4d);
    phy_io_write(0x5403d, 0x1600);
    phy_io_write(0xd0000, 0x1);
}

void ddrphy_phyinit_F_overwriteMessageBlock_1D(void) {
    phy_io_write(0xd0000, 0x0);
    phy_io_write(0x54003, 0xbb8);
    phy_io_write(0x54004, 0x2);
    phy_io_write(0x54005, 0x3c3c);
    phy_io_write(0x54006, 0x11);
    phy_io_write(0x54008, 0x61);
    phy_io_write(0x54009, 0xff);
    phy_io_write(0x5400b, 0x2);
    phy_io_write(0x5400d, 0x100);
    phy_io_write(0x5400f, 0x100);
    phy_io_write(0x54010, 0x7f);
    phy_io_write(0x54012, 0x110);
    phy_io_write(0x54019, 0x2dd4);
    phy_io_write(0x5401a, 0x31);
    phy_io_write(0x5401b, 0x4d66);
    phy_io_write(0x5401c, 0x4d00);
    phy_io_write(0x5401e, 0x16);
    phy_io_write(0x5401f, 0x2dd4);
    phy_io_write(0x54020, 0x31);
    phy_io_write(0x54021, 0x4d66);
    phy_io_write(0x54022, 0x4d00);
    phy_io_write(0x54024, 0x16);
    phy_io_write(0x5402b, 0x1000);
    phy_io_write(0x5402c, 0x1);
    phy_io_write(0x54032, 0xd400);
    phy_io_write(0x54033, 0x312d);
    phy_io_write(0x54034, 0x6600);
    phy_io_write(0x54035, 0x4d);
    phy_io_write(0x54036, 0x4d);
    phy_io_write(0x54037, 0x1600);
    phy_io_write(0x54038, 0xd400);
    phy_io_write(0x54039, 0x312d);
    phy_io_write(0x5403a, 0x6600);
    phy_io_write(0x5403b, 0x4d);
    phy_io_write(0x5403c, 0x4d);
    phy_io_write(0x5403d, 0x1600);
    phy_io_write(0xd0000, 0x1);
}

void ddrphy_phyinit_G_waitFwDone(void) {
    wait_ddrphy_training_complete();
}

void ddrphy_phyinit_H_readMsgBlock(int value) {
}

void ddrphy_phyinit_I_loadPIE(void) {


    //##############################################################
    //
    // (I) Load PHY Init Engine Image 
    // 
    // Load the PHY Initialization Engine memory with the provided initialization sequence.
    // See PhyInit App Note for detailed description and function usage
    // 
    // For LPDDR3/LPDDR4, this sequence will include the necessary retraining code.
    // 
    //##############################################################


    // Enable access to the internal CSRs by setting the MicroContMuxSel CSR to 0. 
    // This allows the memory controller unrestricted access to the configuration CSRs. 
    phy_io_write(0xd0000, 0x0);
    // [phyinit_I_loadPIEImage] Programming PIE Production Code
    phy_io_write(0x90000, 0x10);
    phy_io_write(0x90001, 0x400);
    phy_io_write(0x90002, 0x10e);
    phy_io_write(0x90003, 0x0);
    phy_io_write(0x90004, 0x0);
    phy_io_write(0x90005, 0x8);
    phy_io_write(0x90029, 0xb);
    phy_io_write(0x9002a, 0x480);
    phy_io_write(0x9002b, 0x109);
    phy_io_write(0x9002c, 0x8);
    phy_io_write(0x9002d, 0x448);
    phy_io_write(0x9002e, 0x139);
    phy_io_write(0x9002f, 0x8);
    phy_io_write(0x90030, 0x478);
    phy_io_write(0x90031, 0x109);
    phy_io_write(0x90032, 0x0);
    phy_io_write(0x90033, 0xe8);
    phy_io_write(0x90034, 0x109);
    phy_io_write(0x90035, 0x2);
    phy_io_write(0x90036, 0x10);
    phy_io_write(0x90037, 0x139);
    phy_io_write(0x90038, 0xf);
    phy_io_write(0x90039, 0x7c0);
    phy_io_write(0x9003a, 0x139);
    phy_io_write(0x9003b, 0x44);
    phy_io_write(0x9003c, 0x630);
    phy_io_write(0x9003d, 0x159);
    phy_io_write(0x9003e, 0x14f);
    phy_io_write(0x9003f, 0x630);
    phy_io_write(0x90040, 0x159);
    phy_io_write(0x90041, 0x47);
    phy_io_write(0x90042, 0x630);
    phy_io_write(0x90043, 0x149);
    phy_io_write(0x90044, 0x4f);
    phy_io_write(0x90045, 0x630);
    phy_io_write(0x90046, 0x179);
    phy_io_write(0x90047, 0x8);
    phy_io_write(0x90048, 0xe0);
    phy_io_write(0x90049, 0x109);
    phy_io_write(0x9004a, 0x0);
    phy_io_write(0x9004b, 0x7c8);
    phy_io_write(0x9004c, 0x109);
    phy_io_write(0x9004d, 0x0);
    phy_io_write(0x9004e, 0x1);
    phy_io_write(0x9004f, 0x8);
    phy_io_write(0x90050, 0x0);
    phy_io_write(0x90051, 0x45a);
    phy_io_write(0x90052, 0x9);
    phy_io_write(0x90053, 0x0);
    phy_io_write(0x90054, 0x448);
    phy_io_write(0x90055, 0x109);
    phy_io_write(0x90056, 0x40);
    phy_io_write(0x90057, 0x630);
    phy_io_write(0x90058, 0x179);
    phy_io_write(0x90059, 0x1);
    phy_io_write(0x9005a, 0x618);
    phy_io_write(0x9005b, 0x109);
    phy_io_write(0x9005c, 0x40c0);
    phy_io_write(0x9005d, 0x630);
    phy_io_write(0x9005e, 0x149);
    phy_io_write(0x9005f, 0x8);
    phy_io_write(0x90060, 0x4);
    phy_io_write(0x90061, 0x48);
    phy_io_write(0x90062, 0x4040);
    phy_io_write(0x90063, 0x630);
    phy_io_write(0x90064, 0x149);
    phy_io_write(0x90065, 0x0);
    phy_io_write(0x90066, 0x4);
    phy_io_write(0x90067, 0x48);
    phy_io_write(0x90068, 0x40);
    phy_io_write(0x90069, 0x630);
    phy_io_write(0x9006a, 0x149);
    phy_io_write(0x9006b, 0x10);
    phy_io_write(0x9006c, 0x4);
    phy_io_write(0x9006d, 0x18);
    phy_io_write(0x9006e, 0x0);
    phy_io_write(0x9006f, 0x4);
    phy_io_write(0x90070, 0x78);
    phy_io_write(0x90071, 0x549);
    phy_io_write(0x90072, 0x630);
    phy_io_write(0x90073, 0x159);
    phy_io_write(0x90074, 0xd49);
    phy_io_write(0x90075, 0x630);
    phy_io_write(0x90076, 0x159);
    phy_io_write(0x90077, 0x94a);
    phy_io_write(0x90078, 0x630);
    phy_io_write(0x90079, 0x159);
    phy_io_write(0x9007a, 0x441);
    phy_io_write(0x9007b, 0x630);
    phy_io_write(0x9007c, 0x149);
    phy_io_write(0x9007d, 0x42);
    phy_io_write(0x9007e, 0x630);
    phy_io_write(0x9007f, 0x149);
    phy_io_write(0x90080, 0x1);
    phy_io_write(0x90081, 0x630);
    phy_io_write(0x90082, 0x149);
    phy_io_write(0x90083, 0x0);
    phy_io_write(0x90084, 0xe0);
    phy_io_write(0x90085, 0x109);
    phy_io_write(0x90086, 0xa);
    phy_io_write(0x90087, 0x10);
    phy_io_write(0x90088, 0x109);
    phy_io_write(0x90089, 0x9);
    phy_io_write(0x9008a, 0x3c0);
    phy_io_write(0x9008b, 0x149);
    phy_io_write(0x9008c, 0x9);
    phy_io_write(0x9008d, 0x3c0);
    phy_io_write(0x9008e, 0x159);
    phy_io_write(0x9008f, 0x18);
    phy_io_write(0x90090, 0x10);
    phy_io_write(0x90091, 0x109);
    phy_io_write(0x90092, 0x0);
    phy_io_write(0x90093, 0x3c0);
    phy_io_write(0x90094, 0x109);
    phy_io_write(0x90095, 0x18);
    phy_io_write(0x90096, 0x4);
    phy_io_write(0x90097, 0x48);
    phy_io_write(0x90098, 0x18);
    phy_io_write(0x90099, 0x4);
    phy_io_write(0x9009a, 0x58);
    phy_io_write(0x9009b, 0xa);
    phy_io_write(0x9009c, 0x10);
    phy_io_write(0x9009d, 0x109);
    phy_io_write(0x9009e, 0x2);
    phy_io_write(0x9009f, 0x10);
    phy_io_write(0x900a0, 0x109);
    phy_io_write(0x900a1, 0x5);
    phy_io_write(0x900a2, 0x7c0);
    phy_io_write(0x900a3, 0x109);
    phy_io_write(0x900a4, 0x10);
    phy_io_write(0x900a5, 0x10);
    phy_io_write(0x900a6, 0x109);
    phy_io_write(0x40000, 0x811);
    phy_io_write(0x40020, 0x880);
    phy_io_write(0x40040, 0x0);
    phy_io_write(0x40060, 0x0);
    phy_io_write(0x40001, 0x4008);
    phy_io_write(0x40021, 0x83);
    phy_io_write(0x40041, 0x4f);
    phy_io_write(0x40061, 0x0);
    phy_io_write(0x40002, 0x4040);
    phy_io_write(0x40022, 0x83);
    phy_io_write(0x40042, 0x51);
    phy_io_write(0x40062, 0x0);
    phy_io_write(0x40003, 0x811);
    phy_io_write(0x40023, 0x880);
    phy_io_write(0x40043, 0x0);
    phy_io_write(0x40063, 0x0);
    phy_io_write(0x40004, 0x720);
    phy_io_write(0x40024, 0xf);
    phy_io_write(0x40044, 0x1740);
    phy_io_write(0x40064, 0x0);
    phy_io_write(0x40005, 0x16);
    phy_io_write(0x40025, 0x83);
    phy_io_write(0x40045, 0x4b);
    phy_io_write(0x40065, 0x0);
    phy_io_write(0x40006, 0x716);
    phy_io_write(0x40026, 0xf);
    phy_io_write(0x40046, 0x2001);
    phy_io_write(0x40066, 0x0);
    phy_io_write(0x40007, 0x716);
    phy_io_write(0x40027, 0xf);
    phy_io_write(0x40047, 0x2800);
    phy_io_write(0x40067, 0x0);
    phy_io_write(0x40008, 0x716);
    phy_io_write(0x40028, 0xf);
    phy_io_write(0x40048, 0xf00);
    phy_io_write(0x40068, 0x0);
    phy_io_write(0x40009, 0x720);
    phy_io_write(0x40029, 0xf);
    phy_io_write(0x40049, 0x1400);
    phy_io_write(0x40069, 0x0);
    phy_io_write(0x4000a, 0xe08);
    phy_io_write(0x4002a, 0xc15);
    phy_io_write(0x4004a, 0x0);
    phy_io_write(0x4006a, 0x0);
    phy_io_write(0x4000b, 0x623);
    phy_io_write(0x4002b, 0x15);
    phy_io_write(0x4004b, 0x0);
    phy_io_write(0x4006b, 0x0);
    phy_io_write(0x4000c, 0x4028);
    phy_io_write(0x4002c, 0x80);
    phy_io_write(0x4004c, 0x0);
    phy_io_write(0x4006c, 0x0);
    phy_io_write(0x4000d, 0xe08);
    phy_io_write(0x4002d, 0xc1a);
    phy_io_write(0x4004d, 0x0);
    phy_io_write(0x4006d, 0x0);
    phy_io_write(0x4000e, 0x623);
    phy_io_write(0x4002e, 0x1a);
    phy_io_write(0x4004e, 0x0);
    phy_io_write(0x4006e, 0x0);
    phy_io_write(0x4000f, 0x4040);
    phy_io_write(0x4002f, 0x80);
    phy_io_write(0x4004f, 0x0);
    phy_io_write(0x4006f, 0x0);
    phy_io_write(0x40010, 0x2604);
    phy_io_write(0x40030, 0x15);
    phy_io_write(0x40050, 0x0);
    phy_io_write(0x40070, 0x0);
    phy_io_write(0x40011, 0x708);
    phy_io_write(0x40031, 0x5);
    phy_io_write(0x40051, 0x0);
    phy_io_write(0x40071, 0x2002);
    phy_io_write(0x40012, 0x8);
    phy_io_write(0x40032, 0x80);
    phy_io_write(0x40052, 0x0);
    phy_io_write(0x40072, 0x0);
    phy_io_write(0x40013, 0x2604);
    phy_io_write(0x40033, 0x1a);
    phy_io_write(0x40053, 0x0);
    phy_io_write(0x40073, 0x0);
    phy_io_write(0x40014, 0x708);
    phy_io_write(0x40034, 0xa);
    phy_io_write(0x40054, 0x0);
    phy_io_write(0x40074, 0x2002);
    phy_io_write(0x40015, 0x4040);
    phy_io_write(0x40035, 0x80);
    phy_io_write(0x40055, 0x0);
    phy_io_write(0x40075, 0x0);
    phy_io_write(0x40016, 0x60a);
    phy_io_write(0x40036, 0x15);
    phy_io_write(0x40056, 0x1200);
    phy_io_write(0x40076, 0x0);
    phy_io_write(0x40017, 0x61a);
    phy_io_write(0x40037, 0x15);
    phy_io_write(0x40057, 0x1300);
    phy_io_write(0x40077, 0x0);
    phy_io_write(0x40018, 0x60a);
    phy_io_write(0x40038, 0x1a);
    phy_io_write(0x40058, 0x1200);
    phy_io_write(0x40078, 0x0);
    phy_io_write(0x40019, 0x642);
    phy_io_write(0x40039, 0x1a);
    phy_io_write(0x40059, 0x1300);
    phy_io_write(0x40079, 0x0);
    phy_io_write(0x4001a, 0x4808);
    phy_io_write(0x4003a, 0x880);
    phy_io_write(0x4005a, 0x0);
    phy_io_write(0x4007a, 0x0);
    phy_io_write(0x900a7, 0x0);
    phy_io_write(0x900a8, 0x790);
    phy_io_write(0x900a9, 0x11a);
    phy_io_write(0x900aa, 0x8);
    phy_io_write(0x900ab, 0x7aa);
    phy_io_write(0x900ac, 0x2a);
    phy_io_write(0x900ad, 0x10);
    phy_io_write(0x900ae, 0x7b2);
    phy_io_write(0x900af, 0x2a);
    phy_io_write(0x900b0, 0x0);
    phy_io_write(0x900b1, 0x7c8);
    phy_io_write(0x900b2, 0x109);
    phy_io_write(0x900b3, 0x10);
    phy_io_write(0x900b4, 0x2a8);
    phy_io_write(0x900b5, 0x129);
    phy_io_write(0x900b6, 0x8);
    phy_io_write(0x900b7, 0x370);
    phy_io_write(0x900b8, 0x129);
    phy_io_write(0x900b9, 0xa);
    phy_io_write(0x900ba, 0x3c8);
    phy_io_write(0x900bb, 0x1a9);
    phy_io_write(0x900bc, 0xc);
    phy_io_write(0x900bd, 0x408);
    phy_io_write(0x900be, 0x199);
    phy_io_write(0x900bf, 0x14);
    phy_io_write(0x900c0, 0x790);
    phy_io_write(0x900c1, 0x11a);
    phy_io_write(0x900c2, 0x8);
    phy_io_write(0x900c3, 0x4);
    phy_io_write(0x900c4, 0x18);
    phy_io_write(0x900c5, 0xe);
    phy_io_write(0x900c6, 0x408);
    phy_io_write(0x900c7, 0x199);
    phy_io_write(0x900c8, 0x8);
    phy_io_write(0x900c9, 0x8568);
    phy_io_write(0x900ca, 0x108);
    phy_io_write(0x900cb, 0x18);
    phy_io_write(0x900cc, 0x790);
    phy_io_write(0x900cd, 0x16a);
    phy_io_write(0x900ce, 0x8);
    phy_io_write(0x900cf, 0x1d8);
    phy_io_write(0x900d0, 0x169);
    phy_io_write(0x900d1, 0x10);
    phy_io_write(0x900d2, 0x8558);
    phy_io_write(0x900d3, 0x168);
    phy_io_write(0x900d4, 0x70);
    phy_io_write(0x900d5, 0x788);
    phy_io_write(0x900d6, 0x16a);
    phy_io_write(0x900d7, 0x1ff8);
    phy_io_write(0x900d8, 0x85a8);
    phy_io_write(0x900d9, 0x1e8);
    phy_io_write(0x900da, 0x50);
    phy_io_write(0x900db, 0x798);
    phy_io_write(0x900dc, 0x16a);
    phy_io_write(0x900dd, 0x60);
    phy_io_write(0x900de, 0x7a0);
    phy_io_write(0x900df, 0x16a);
    phy_io_write(0x900e0, 0x8);
    phy_io_write(0x900e1, 0x8310);
    phy_io_write(0x900e2, 0x168);
    phy_io_write(0x900e3, 0x8);
    phy_io_write(0x900e4, 0xa310);
    phy_io_write(0x900e5, 0x168);
    phy_io_write(0x900e6, 0xa);
    phy_io_write(0x900e7, 0x408);
    phy_io_write(0x900e8, 0x169);
    phy_io_write(0x900e9, 0x6e);
    phy_io_write(0x900ea, 0x0);
    phy_io_write(0x900eb, 0x68);
    phy_io_write(0x900ec, 0x0);
    phy_io_write(0x900ed, 0x408);
    phy_io_write(0x900ee, 0x169);
    phy_io_write(0x900ef, 0x0);
    phy_io_write(0x900f0, 0x8310);
    phy_io_write(0x900f1, 0x168);
    phy_io_write(0x900f2, 0x0);
    phy_io_write(0x900f3, 0xa310);
    phy_io_write(0x900f4, 0x168);
    phy_io_write(0x900f5, 0x1ff8);
    phy_io_write(0x900f6, 0x85a8);
    phy_io_write(0x900f7, 0x1e8);
    phy_io_write(0x900f8, 0x68);
    phy_io_write(0x900f9, 0x798);
    phy_io_write(0x900fa, 0x16a);
    phy_io_write(0x900fb, 0x78);
    phy_io_write(0x900fc, 0x7a0);
    phy_io_write(0x900fd, 0x16a);
    phy_io_write(0x900fe, 0x68);
    phy_io_write(0x900ff, 0x790);
    phy_io_write(0x90100, 0x16a);
    phy_io_write(0x90101, 0x8);
    phy_io_write(0x90102, 0x8b10);
    phy_io_write(0x90103, 0x168);
    phy_io_write(0x90104, 0x8);
    phy_io_write(0x90105, 0xab10);
    phy_io_write(0x90106, 0x168);
    phy_io_write(0x90107, 0xa);
    phy_io_write(0x90108, 0x408);
    phy_io_write(0x90109, 0x169);
    phy_io_write(0x9010a, 0x58);
    phy_io_write(0x9010b, 0x0);
    phy_io_write(0x9010c, 0x68);
    phy_io_write(0x9010d, 0x0);
    phy_io_write(0x9010e, 0x408);
    phy_io_write(0x9010f, 0x169);
    phy_io_write(0x90110, 0x0);
    phy_io_write(0x90111, 0x8b10);
    phy_io_write(0x90112, 0x168);
    phy_io_write(0x90113, 0x0);
    phy_io_write(0x90114, 0xab10);
    phy_io_write(0x90115, 0x168);
    phy_io_write(0x90116, 0x0);
    phy_io_write(0x90117, 0x1d8);
    phy_io_write(0x90118, 0x169);
    phy_io_write(0x90119, 0x80);
    phy_io_write(0x9011a, 0x790);
    phy_io_write(0x9011b, 0x16a);
    phy_io_write(0x9011c, 0x18);
    phy_io_write(0x9011d, 0x7aa);
    phy_io_write(0x9011e, 0x6a);
    phy_io_write(0x9011f, 0xa);
    phy_io_write(0x90120, 0x0);
    phy_io_write(0x90121, 0x1e9);
    phy_io_write(0x90122, 0x8);
    phy_io_write(0x90123, 0x8080);
    phy_io_write(0x90124, 0x108);
    phy_io_write(0x90125, 0xf);
    phy_io_write(0x90126, 0x408);
    phy_io_write(0x90127, 0x169);
    phy_io_write(0x90128, 0xc);
    phy_io_write(0x90129, 0x0);
    phy_io_write(0x9012a, 0x68);
    phy_io_write(0x9012b, 0x9);
    phy_io_write(0x9012c, 0x0);
    phy_io_write(0x9012d, 0x1a9);
    phy_io_write(0x9012e, 0x0);
    phy_io_write(0x9012f, 0x408);
    phy_io_write(0x90130, 0x169);
    phy_io_write(0x90131, 0x0);
    phy_io_write(0x90132, 0x8080);
    phy_io_write(0x90133, 0x108);
    phy_io_write(0x90134, 0x8);
    phy_io_write(0x90135, 0x7aa);
    phy_io_write(0x90136, 0x6a);
    phy_io_write(0x90137, 0x0);
    phy_io_write(0x90138, 0x8568);
    phy_io_write(0x90139, 0x108);
    phy_io_write(0x9013a, 0xb7);
    phy_io_write(0x9013b, 0x790);
    phy_io_write(0x9013c, 0x16a);
    phy_io_write(0x9013d, 0x1f);
    phy_io_write(0x9013e, 0x0);
    phy_io_write(0x9013f, 0x68);
    phy_io_write(0x90140, 0x8);
    phy_io_write(0x90141, 0x8558);
    phy_io_write(0x90142, 0x168);
    phy_io_write(0x90143, 0xf);
    phy_io_write(0x90144, 0x408);
    phy_io_write(0x90145, 0x169);
    phy_io_write(0x90146, 0xc);
    phy_io_write(0x90147, 0x0);
    phy_io_write(0x90148, 0x68);
    phy_io_write(0x90149, 0x0);
    phy_io_write(0x9014a, 0x408);
    phy_io_write(0x9014b, 0x169);
    phy_io_write(0x9014c, 0x0);
    phy_io_write(0x9014d, 0x8558);
    phy_io_write(0x9014e, 0x168);
    phy_io_write(0x9014f, 0x8);
    phy_io_write(0x90150, 0x3c8);
    phy_io_write(0x90151, 0x1a9);
    phy_io_write(0x90152, 0x3);
    phy_io_write(0x90153, 0x370);
    phy_io_write(0x90154, 0x129);
    phy_io_write(0x90155, 0x20);
    phy_io_write(0x90156, 0x2aa);
    phy_io_write(0x90157, 0x9);
    phy_io_write(0x90158, 0x0);
    phy_io_write(0x90159, 0x400);
    phy_io_write(0x9015a, 0x10e);
    phy_io_write(0x9015b, 0x8);
    phy_io_write(0x9015c, 0xe8);
    phy_io_write(0x9015d, 0x109);
    phy_io_write(0x9015e, 0x0);
    phy_io_write(0x9015f, 0x8140);
    phy_io_write(0x90160, 0x10c);
    phy_io_write(0x90161, 0x10);
    phy_io_write(0x90162, 0x8138);
    phy_io_write(0x90163, 0x10c);
    phy_io_write(0x90164, 0x8);
    phy_io_write(0x90165, 0x7c8);
    phy_io_write(0x90166, 0x101);
    phy_io_write(0x90167, 0x8);
    phy_io_write(0x90168, 0x0);
    phy_io_write(0x90169, 0x8);
    phy_io_write(0x9016a, 0x8);
    phy_io_write(0x9016b, 0x448);
    phy_io_write(0x9016c, 0x109);
    phy_io_write(0x9016d, 0xf);
    phy_io_write(0x9016e, 0x7c0);
    phy_io_write(0x9016f, 0x109);
    phy_io_write(0x90170, 0x0);
    phy_io_write(0x90171, 0xe8);
    phy_io_write(0x90172, 0x109);
    phy_io_write(0x90173, 0x47);
    phy_io_write(0x90174, 0x630);
    phy_io_write(0x90175, 0x109);
    phy_io_write(0x90176, 0x8);
    phy_io_write(0x90177, 0x618);
    phy_io_write(0x90178, 0x109);
    phy_io_write(0x90179, 0x8);
    phy_io_write(0x9017a, 0xe0);
    phy_io_write(0x9017b, 0x109);
    phy_io_write(0x9017c, 0x0);
    phy_io_write(0x9017d, 0x7c8);
    phy_io_write(0x9017e, 0x109);
    phy_io_write(0x9017f, 0x8);
    phy_io_write(0x90180, 0x8140);
    phy_io_write(0x90181, 0x10c);
    phy_io_write(0x90182, 0x0);
    phy_io_write(0x90183, 0x1);
    phy_io_write(0x90184, 0x8);
    phy_io_write(0x90185, 0x8);
    phy_io_write(0x90186, 0x4);
    phy_io_write(0x90187, 0x8);
    phy_io_write(0x90188, 0x8);
    phy_io_write(0x90189, 0x7c8);
    phy_io_write(0x9018a, 0x101);
    phy_io_write(0x90006, 0x0);
    phy_io_write(0x90007, 0x0);
    phy_io_write(0x90008, 0x8);
    phy_io_write(0x90009, 0x0);
    phy_io_write(0x9000a, 0x0);
    phy_io_write(0x9000b, 0x0);
    phy_io_write(0xd00e7, 0x400);
    phy_io_write(0x90017, 0x0);
    phy_io_write(0x9001f, 0x2a);
    phy_io_write(0x90026, 0x6a);
    phy_io_write(0x400d0, 0x0);
    phy_io_write(0x400d1, 0x101);
    phy_io_write(0x400d2, 0x105);
    phy_io_write(0x400d3, 0x107);
    phy_io_write(0x400d4, 0x10f);
    phy_io_write(0x400d5, 0x202);
    phy_io_write(0x400d6, 0x20a);
    phy_io_write(0x400d7, 0x20b);
    phy_io_write(0x2003a, 0x2);
    // [phyinit_I_loadPIEImage] Pstate=0,  Memclk=1500MHz, Programming Seq0BDLY0 to 0x5d
    phy_io_write(0x2000b, 0x5d);
    // [phyinit_I_loadPIEImage] Pstate=0,  Memclk=1500MHz, Programming Seq0BDLY1 to 0xbb
    phy_io_write(0x2000c, 0xbb);
    // [phyinit_I_loadPIEImage] Pstate=0,  Memclk=1500MHz, Programming Seq0BDLY2 to 0x753
    phy_io_write(0x2000d, 0x753);
    // [phyinit_I_loadPIEImage] Pstate=0,  Memclk=1500MHz, Programming Seq0BDLY3 to 0x2c
    phy_io_write(0x2000e, 0x2c);
    phy_io_write(0x9000c, 0x0);
    phy_io_write(0x9000d, 0x173);
    phy_io_write(0x9000e, 0x60);
    phy_io_write(0x9000f, 0x6110);
    phy_io_write(0x90010, 0x2152);
    phy_io_write(0x90011, 0xdfbd);
    phy_io_write(0x90012, 0x60);
    phy_io_write(0x90013, 0x6152);
    // [phyinit_I_loadPIEImage] Enabling Phy Master Interface for DRAM drift compensation
    // [phyinit_I_loadPIEImage] Pstate=0, Memclk=1500MHz, Programming PPTTrainSetup::PhyMstrTrainInterval to 0xa
    // [phyinit_I_loadPIEImage] Pstate=0, Memclk=1500MHz, Programming PPTTrainSetup::PhyMstrMaxReqToAck to 0x5
    // [phyinit_I_loadPIEImage] Pstate=0, Memclk=1500MHz, Programming PPTTrainSetup2::PhyMstrFreqOverride to 0x3
    phy_io_write(0x20010, 0x5a);
    phy_io_write(0x20011, 0x3);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback0x0 to 0xe0
    phy_io_write(0x40080, 0xe0);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback1x0 to 0x12
    phy_io_write(0x40081, 0x12);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback0x1 to 0xe0
    phy_io_write(0x40082, 0xe0);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback1x1 to 0x12
    phy_io_write(0x40083, 0x12);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback0x2 to 0xe0
    phy_io_write(0x40084, 0xe0);
    // [phyinit_I_loadPIEImage] Pstate=0, Programming AcsmPlayback1x2 to 0x12
    phy_io_write(0x40085, 0x12);
    // [phyinit_I_loadPIEImage] Programming retraining registers
    phy_io_write(0x400fd, 0xf);
    phy_io_write(0x10011, 0x1);
    phy_io_write(0x10012, 0x1);
    phy_io_write(0x10013, 0x180);
    phy_io_write(0x10018, 0x1);
    phy_io_write(0x10002, 0x6209);
    phy_io_write(0x100b2, 0x1);
    phy_io_write(0x101b4, 0x1);
    phy_io_write(0x102b4, 0x1);
    phy_io_write(0x103b4, 0x1);
    phy_io_write(0x104b4, 0x1);
    phy_io_write(0x105b4, 0x1);
    phy_io_write(0x106b4, 0x1);
    phy_io_write(0x107b4, 0x1);
    phy_io_write(0x108b4, 0x1);
    phy_io_write(0x11011, 0x1);
    phy_io_write(0x11012, 0x1);
    phy_io_write(0x11013, 0x180);
    phy_io_write(0x11018, 0x1);
    phy_io_write(0x11002, 0x6209);
    phy_io_write(0x110b2, 0x1);
    phy_io_write(0x111b4, 0x1);
    phy_io_write(0x112b4, 0x1);
    phy_io_write(0x113b4, 0x1);
    phy_io_write(0x114b4, 0x1);
    phy_io_write(0x115b4, 0x1);
    phy_io_write(0x116b4, 0x1);
    phy_io_write(0x117b4, 0x1);
    phy_io_write(0x118b4, 0x1);
    phy_io_write(0x12011, 0x1);
    phy_io_write(0x12012, 0x1);
    phy_io_write(0x12013, 0x180);
    phy_io_write(0x12018, 0x1);
    phy_io_write(0x12002, 0x6209);
    phy_io_write(0x120b2, 0x1);
    phy_io_write(0x121b4, 0x1);
    phy_io_write(0x122b4, 0x1);
    phy_io_write(0x123b4, 0x1);
    phy_io_write(0x124b4, 0x1);
    phy_io_write(0x125b4, 0x1);
    phy_io_write(0x126b4, 0x1);
    phy_io_write(0x127b4, 0x1);
    phy_io_write(0x128b4, 0x1);
    phy_io_write(0x13011, 0x1);
    phy_io_write(0x13012, 0x1);
    phy_io_write(0x13013, 0x180);
    phy_io_write(0x13018, 0x1);
    phy_io_write(0x13002, 0x6209);
    phy_io_write(0x130b2, 0x1);
    phy_io_write(0x131b4, 0x1);
    phy_io_write(0x132b4, 0x1);
    phy_io_write(0x133b4, 0x1);
    phy_io_write(0x134b4, 0x1);
    phy_io_write(0x135b4, 0x1);
    phy_io_write(0x136b4, 0x1);
    phy_io_write(0x137b4, 0x1);
    phy_io_write(0x138b4, 0x1);
    // Set Dbyte Dll Mode )
    phy_io_write(0x2003a, 0x2);
    // Disabling Ucclk (PMU)
    phy_io_write(0xc0080, 0x2);
    // Isolate the APB access from the internal CSRs by setting the MicroContMuxSel CSR to 1. 
    phy_io_write(0xd0000, 0x1);

}

void ddr_cfg_phy(void) {

    //##############################################################
    //
    // Step (A) : Bring up VDD, VDDQ, and VAA
    //
    //############################################################## 

    ddrphy_phyinit_A_bringupPower(); 

    //##############################################################
    //
    // Step (B) Start Clocks and Reset the PHY 
    //
    //##############################################################

    ddrphy_phyinit_B_startClockResetPhy();

    //##############################################################

    //
    // Step (C) Initialize PHY Configuration 
    //
    //##############################################################

    ddrphy_phyinit_C_phyConfigure();

    //##############################################################
    //
    //dwc_ddrphy_phyihunit_userCustom_customPreTrain is a user-editable function.
    //
    //##############################################################

    ddrphy_phyinit_C_customPreTrain();

    //##############################################################
    //
    // (D) Load the 1D IMEM image
    //
    //##############################################################

    ddrphy_phyinit_D_loadIMEM(0);

    //##############################################################
    //
    // Step (E) Set the PHY input clocks to the desired frequency for pstate 0 
    //
    //##############################################################

    // ddrphy_phyinit_E_setDfiClk(0);

    //##############################################################
    //
    // (F) Load the 1D DMEM image and write the 1D Message Block parameters for the training firmware 
    //
    //##############################################################

    ddrphy_phyinit_F_loadDMEM(0, 0);

    ddrphy_phyinit_F_overwriteMessageBlock_1D();
    //##############################################################
    //
    // (G) Execute the Training Firmware
    //
    //#############################################################

    // 1.  Reset the firmware microcontroller by writing the MicroReset CSR to set the StallToMicro and 
    //    ResetToMicro fields to 1 (all other fields should be zero).
    //    Then rewrite the CSR so that only the StallToMicro remains set (all other fields should be zero).
    phy_io_write(0xd0000, 0x1);
    phy_io_write(0xd0099, 0x9);
    phy_io_write(0xd0099, 0x1);
    // 2. Begin execution of the training firmware by setting the MicroReset CSR to 4'b0000.
    phy_io_write(0xd0099, 0x0);
    // 3.   Wait for the training firmware to complete by following the procedure in "uCtrl Initialization and Mailbox Messaging
    ddrphy_phyinit_G_waitFwDone();
    // 4.   Halt the microcontroller.
    phy_io_write(0xhd0099, 0x1);

    //#############################################################
    //
    // (H) Read the Message Block results
    //
    //#############################################################
    // 1.	Enable access to the internal CSRs by setting the MicroContMuxSel CSR to 0.
    phy_io_write(0xd0000, 0x0);
    // 2. Read the Firmware Message Block to obtain the results from the training.
    ddrphy_phyinit_H_readMsgBlock(0);
    // 3.	Isolate the APB access from the internal CSRs by setting the MicroContMuxSel CSR to 1.
    phy_io_write(0xd0000, 0x1);


    //##############################################################
    // 
    // Step (E) Set the PHY input clocks to the desired frequency for pstate 0
    //
    // #############################################################

    ddrphy_phyinit_E_setDfiClk(0);

    //##############################################################
    //
    // (D) Load the 2D IMEM image
    //
    //##############################################################

    ddrphy_phyinit_D_loadIMEM(1);

    //##############################################################
    //
    // (F) Load the 2D DMEM image and write the 2D Message Block parameters for the training firmware
    //
    //##############################################################

    ddrphy_phyinit_F_loadDMEM(1);

    ddrphy_phyinit_F_overwriteMessageBlock_2D();

    //##############################################################
    //
    // (G) Execute the Training Firmware
    //
    //#############################################################

    // 1.  Reset the firmware microcontroller by writing the MicroReset CSR to set the StallToMicro and 
    //    ResetToMicro fields to 1 (all other fields should be zero).
    //    Then rewrite the CSR so that only the StallToMicro remains set (all other fields should be zero).
    phy_io_write(0xd0000, 0x1);
    phy_io_write(0xd0099, 0x9);
    phy_io_write(0xd0099, 0x1);
    // 2. Begin execution of the training firmware by setting the MicroReset CSR to 4'b0000.
    phy_io_write(0xd0099, 0x0);
    // 3.   Wait for the training firmware to complete by following the procedure in "uCtrl Initialization and Mailbox Messaging
    ddrphy_phyinit_G_waitFwDone();
    // 4.   Halt the microcontroller.
    phy_io_write(0xhd0099, 0x1);

    //#############################################################
    //
    // (H) Read the Message Block results
    //
    //#############################################################
    // 1.	Enable access to the internal CSRs by setting the MicroContMuxSel CSR to 0.
    phy_io_write(0xd0000, 0x0);
    // 2. Read the Firmware Message Block to obtain the results from the training.
    ddrphy_phyinit_H_readMsgBlock(0);
    // 3.	Isolate the APB access from the internal CSRs by setting the MicroContMuxSel CSR to 1.
    phy_io_write(0xd0000, 0x1);
    //##############################################################
    //
    // (I) Load PHY Init Engine Image
    //
    //##############################################################

    ddrphy_phyinit_I_loadPIE();

    //customer Post Train
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0x00020010, 0x0000006a);
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0x0002001d, 0x00000001);
    /*
     * CalBusy.0 =1, indicates the calibrator is actively calibrating.
     * Wait Calibrating done.
     */
    tmp_t = 1;
    while(tmp_t) {
        tmp = reg32_read(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0x20097);
        tmp_t = tmp & 0x01;
    }
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0xd0000, 0x0);
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0x2006e, 0x0);
    // disable APB bus to access DDRPHY RAM
    reg32_write(IP2APB_DDRPHY_IPS_BASE_ADDR(0) + 4 * 0xd0000, 0x1);
}

