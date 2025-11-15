#ifndef AnalogLED_h
#define AnalogLED_h

#include "LED.h"

class AnalogLED : public LED
{
public:
    AnalogLED(int pin);
    AnalogLED(int pin, int state);
    ~AnalogLED();

    void changeState(int newState) override;
};

#endif
