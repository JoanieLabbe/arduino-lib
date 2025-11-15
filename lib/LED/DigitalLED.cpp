#include "Arduino.h"
#include "DigitalLED.h"

DigitalLED::DigitalLED(int pin)
    : LED(pin)
{
}

DigitalLED::DigitalLED(int pin, int state)
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