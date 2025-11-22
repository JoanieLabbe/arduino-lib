#include "Arduino.h"
#include "AnalogLED.h"

AnalogLED::AnalogLED(Pin pin)
    : LED(pin)
{
}

AnalogLED::AnalogLED(Pin pin, int state)
    : LED(pin, state)
{
}

AnalogLED::~AnalogLED()
{
}

void AnalogLED::changeState(int newState)
{
    // Custom behavior can be added here before changing state
    LED::changeState(newState);
    analogWrite(pin, state);
}