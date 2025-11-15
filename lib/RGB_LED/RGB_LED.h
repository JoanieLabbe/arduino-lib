#ifndef RGB_LED_h
#define RGB_LED_h

#include "AnalogLED.h"
#include <Arduino.h>

class RGB_LED
{
private:
    AnalogLED red;
    AnalogLED green;
    AnalogLED blue;

public:
    RGB_LED(int redPin, int greenPin, int bluePin);
    ~RGB_LED();

    void setColor(int redValue, int greenValue, int blueValue);
};

#endif