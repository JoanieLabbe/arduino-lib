#include "Arduino.h"
#include "button.h"

BUTTON::BUTTON(int pin)
{
    this->pin = pin;
    pinMode(pin, INPUT_PULLUP);
}

BUTTON::~BUTTON()
{
}

int BUTTON::readState()
{
    return digitalRead(pin);
}