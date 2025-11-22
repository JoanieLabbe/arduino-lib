#ifndef AnalogLED_h
#define AnalogLED_h

#include "LED.h"

class AnalogLED : public LED
{
public:
    AnalogLED(Pin pin);
    AnalogLED(Pin pin, int state);
    ~AnalogLED();

    void changeState(int newState) override;
};

#endif
