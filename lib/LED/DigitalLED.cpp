#include "Arduino.h"
#include "DigitalLED.h"

DigitalLED::DigitalLED(Pin pin)
    : LED(pin)
{
}

DigitalLED::DigitalLED(Pin pin, int state)
    : LED(pin, state)
{
}

DigitalLED::~DigitalLED()
{
}

void DigitalLED::changeState(int newState)
{
    // Custom behavior can be added here before changing state
    LED::changeState(newState);
    digitalWrite(pin, state);
}