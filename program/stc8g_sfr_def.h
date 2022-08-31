#pragma once

#include <compiler.h>

// GPIOs and their mode registers -----------------------------------------

SFR(P3M0, 0xB2);
SFR(P3M1, 0xB1);
SFR(P3, 0xB0);
    SBIT(P3_0, 0xB0, 0);
    SBIT(P3_1, 0xB0, 1);
    SBIT(P3_2, 0xB0, 2);
    SBIT(P3_3, 0xB0, 3);

SFR(P5M0, 0xCA);
SFR(P5M1, 0xC9);
SFR(P5, 0xC8);
    SBIT(P5_4, 0xC8, 4);
    SBIT(P5_5, 0xC8, 5);

// UART -------------------------------------------------------------------

SFR(SCON, 0x98);
    SBIT(SM0, 0x98, 7);
    SBIT(SM1, 0x98, 6);
    SBIT(SM2, 0x98, 5);
    SBIT(REN, 0x98, 4);
    SBIT(TB8, 0x98, 3);
    SBIT(RB8, 0x98, 2);
    SBIT(TI, 0x98, 1);
    SBIT(RI, 0x98, 0);

SFR(SBUF, 0x99);

SFR(PCON, 0x87);

// Timers -----------------------------------------------------------------

SFR(TCON, 0x88);
    SBIT(TF1, 0x88, 7);
    SBIT(TR1, 0x88, 6);
    SBIT(TF0, 0x88, 5);
    SBIT(TR0, 0x88, 4);
    SBIT(IE1, 0x88, 3);
    SBIT(IT1, 0x88, 2);
    SBIT(IE0, 0x88, 1);
    SBIT(IT0, 0x88, 0);

SFR(TMOD, 0x89);

SFR16E(T0, 0x8C8A);
SFR16E(T1, 0x8D8B);

SFR(AUXR, 0x8E);