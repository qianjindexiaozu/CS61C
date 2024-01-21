#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    uint16_t a, b, c, d, new;
    uint16_t temp = *reg;
    a = temp & 1;
    b = (temp >> 2) & 1;
    c = (temp >> 3) & 1;
    d = (temp >> 5) & 1;
    new = a ^ b ^ c ^ d;
    temp = temp >> 1;
    temp &= ~(1 << 15);
    temp |= (new << 15);
    *reg = temp;
}

