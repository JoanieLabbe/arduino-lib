#ifndef BUTTON_h
#define BUTTON_h

#include <Arduino.h>
#include "Pin.h"

class BUTTON
{
private:
    Pin pin;

public:
    BUTTON(Pin pin);
    ~BUTTON();

    int readState();
};

#endif