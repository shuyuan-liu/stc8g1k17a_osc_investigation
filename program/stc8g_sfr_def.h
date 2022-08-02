#include <compiler.h>

SFR(P5M0, 0xCA);
SFR(P5M1, 0xC9);
SFR(P5, 0xC8);
    SBIT(PIN_1, 0xC8, 4);
    SBIT(PIN_3, 0xC8, 5);

SFR(P3M0, 0xB2);
SFR(P3M1, 0xB1);
SFR(P3, 0xB0);
    SBIT(PIN_5, 0xB0, 0);
    SBIT(PIN_6, 0xB0, 1);
    SBIT(PIN_7, 0xB0, 2);
    SBIT(PIN_8, 0xB0, 3);
