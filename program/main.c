#include <lint.h> // Hide IntelliSense errors for SDCC-specifi keywords
#include <compiler.h> // Cross-compiler wrappers for SFRs, interrupts, etc.
#include <stdint.h>
#include <stdio.h>
#include "stc8g_sfr_def.h"

#define set_bits_with_mask(target, bits, mask)         \
{                                                      \
    target = (target & (~(mask)) | ((bits) & (mask))); \
}                                                      \

int putchar(int c)
{
    while (!TI) {
        ;
    }

    TI = 0;
    SBUF = c;
    return c;
}

void gpio_init(void);
void uart_init(const uint32_t baud, const uint32_t sys_freq);


void main(void)
{
    gpio_init();
    uart_init(19200, 4e6);

    while (1) {
        // Pause between bytes
        for (uint32_t i = 0; i < 2000; i++) {
            NOP();
        }

        printf("Hello, world!\n");
    }
}

// Peripheral init functions ----------------------------------------------

void gpio_init(void)
{
    // P3: P3_1 (TXD) push-pull; others open-drain w/ pull-up
    P3M0 = 0b00000010;
    P3M1 = 0b00000000;
}

void uart_init(const uint32_t baud, const uint32_t sys_freq)
{
    set_bits_with_mask(SCON, 0b01000010, 0b11110010);
    set_bits_with_mask(TMOD, 0b00000000, 0b11110000);
    set_bits_with_mask(AUXR, 0b01000000, 0b01000001);

    T1 = 0x10000 - (sys_freq / baud / 4);
    TR1 = 1;
}
