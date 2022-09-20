#include "unity.h"

#include "led.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_led_setup(void)
{
    LED led;

    uint8_t buffer[] = { 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08 };
    LED_Setup(&led, buffer, sizeof(buffer) / sizeof(uint8_t));
    
    TEST_ASSERT_EQUAL(0x01020304, led.val1);
    TEST_ASSERT_EQUAL(0x05060708, led.val2);
}
