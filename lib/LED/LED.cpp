#include "Arduino.h"
#include "LED.h"

LED::LED(int pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

LED::LED(int pin, int state)
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
