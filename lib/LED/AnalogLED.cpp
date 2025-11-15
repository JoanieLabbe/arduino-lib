#include "Arduino.h"
#include "AnalogLED.h"

AnalogLED::AnalogLED(int pin)
    : LED(pin)
{
}

AnalogLED::AnalogLED(int pin, int state)
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