#include "Arduino.h"
#include "LED.h"

LED::LED(Pin pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

LED::LED(Pin pin, int state)
    : LED(pin)
{
    this->state = state;
}

LED::~LED()
{
}

void LED::changeState(int newState)
{
    state = newState;
}

int LED::getState()
{
    return state;
}
