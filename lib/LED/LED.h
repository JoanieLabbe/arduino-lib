#ifndef LED_h
#define LED_h

#include <Arduino.h>

class LED
{
protected:
    int pin;
    int state = LOW;

public:
    LED(int pin);
    LED(int pin, int state);
    ~LED();

    virtual void changeState(int newState);
    int getState();
};

#endif