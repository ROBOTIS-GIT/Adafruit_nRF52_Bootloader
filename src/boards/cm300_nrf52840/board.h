/*
 * The MIT License (MIT)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef CM300_NRF52840_H
#define CM300_NRF52840_H

/*------------------------------------------------------------------*/
/* POWER_ENABLE
 *------------------------------------------------------------------*/
#define POWER_ENABLE_PIN    22
#define POWER_ENABLE_STATE  0

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER         1
#define LED_PRIMARY_PIN     36
#define LED_SECONDARY_PIN   14
#define LED_STATE_ON        0

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER      2
#define BUTTON_1            42
#define BUTTON_2            45
#define BUTTON_PULL         NRF_GPIO_PIN_PULLUP

/*------------------------------------------------------------------*/
/* UART
 *------------------------------------------------------------------*/
#define RX_PIN_NUMBER       27
#define TX_PIN_NUMBER       26
#define CTS_PIN_NUMBER      0
#define RTS_PIN_NUMBER      0
#define HWFC                false

// Used as model string in OTA mode
#define BLEDIS_MANUFACTURER    "ROBOTIS"
#define BLEDIS_MODEL           "CM-300"

#define UF2_PRODUCT_NAME    "ROBOTIS CM-300"
#define UF2_BOARD_ID        "CM-300-v1"
#define UF2_INDEX_URL       "http://emanual.robotis.com/"

#endif // CM300_NRF52840_H
