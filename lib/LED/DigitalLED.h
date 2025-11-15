#ifndef DigitalLED_h
#define DigitalLED_h

#include "LED.h"

class DigitalLED : public LED
{
public:
    DigitalLED(int pin);
    DigitalLED(int pin, int state);
    ~DigitalLED();

    void changeState(int newState) override;
};

#endif