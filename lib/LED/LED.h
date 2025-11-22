#ifndef LED_h
#define LED_h

#include <Arduino.h>
#include "Pin.h"
class LED
{
protected:
    Pin pin;
    int state = LOW;

public:
    LED(Pin pin);
    LED(Pin pin, int state);
    ~LED();

    virtual void changeState(int newState);
    int getState();
};

#endif