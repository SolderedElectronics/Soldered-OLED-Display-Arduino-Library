/**
 **************************************************
 *
 * @file        OLED-Display-SOLDERED.h
 * @brief       OLED display driver for SOLDERED OLED Board
 *
 *
 * @copyright GNU General Public License v3.0
 * @authors     Zvonimir Haramustek for soldered.com
 ***************************************************/

#ifndef __OLED_DISPLAY__
#define __OLED_DISPLAY__

#include "Arduino.h"
#include "libs/Adafruit_SSD1306/Adafruit_SSD1306.h"

#define SCREEN_WIDTH   128 // OLED display width, in pixels
#define SCREEN_HEIGHT  64  // OLED display height, in pixels
#define SCREEN_ADDRESS 0x3C

class OLED_Display : public Adafruit_SSD1306
{
  public:
    OLED_Display() : Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1, 100000, 100000)
    {
    }

    bool begin()
    {
        return Adafruit_SSD1306::begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS);
    }
};

#endif
