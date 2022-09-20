#include "led.h"

#include <xc.h>

uint8_t LED_Setup(LED * led, uint8_t * buffer, uint8_t length) {
    if (length < 8) {
        return 1;
    }

    led->val1 = (((uint32_t) buffer[0]) << 24) | (((uint32_t) buffer[1]) << 16) | (((uint32_t) buffer[2]) << 8) | buffer[3];
    led->val2 = (((uint32_t) buffer[4]) << 24) | (((uint32_t) buffer[5]) << 16) | (((uint32_t) buffer[6]) << 8) | buffer[7];
    return 0;
}
