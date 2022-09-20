#ifndef LED_H
#define LED_H

#include <stdint.h>

typedef struct {

    uint32_t val1;
    uint32_t val2;

} LED;

uint8_t LED_Setup(LED * led, uint8_t * buffer, uint8_t length);

#endif // LED_H
