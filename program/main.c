#include <stdint.h>
#include <compiler.h>
#include "stc8g_sfr_def.h"

void uart_init(void)
{
    ; // TODO
}


void main(void)
{
    uart_init();
    
    P5M0 = 0x00;
    P5M1 = 0x00;

    while (1) {
        P5++;
    }
}

