#ifndef DigitalLED_h
#define DigitalLED_h

#include "LED.h"

class DigitalLED : public LED
{
public:
    DigitalLED(Pin pin);
    DigitalLED(Pin pin, int state);
    ~DigitalLED();

    void changeState(int newState) override;
};

#endif