#include "Arduino.h"
#include "button.h"

BUTTON::BUTTON(Pin pin)
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