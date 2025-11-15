#ifndef BUTTON_h
#define BUTTON_h

#include <Arduino.h>

class BUTTON
{
private:
    int pin;

public:
    BUTTON(int pin);
    ~BUTTON();

    int readState();
};

#endif