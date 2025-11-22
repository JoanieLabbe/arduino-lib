#ifndef SevenSegment_h
#define SevenSegment_h

#include "SevenSegmentModel.h"
#include <Arduino.h>

class SevenSegment
{
private:
    static const int SIZE = 8;

    int onState;
    int offState;

    SevenSegmentModel model;

public:
    SevenSegment(Pin pinA, Pin pinB, Pin pinC, Pin pinD, Pin pinE, Pin pinF, Pin pinG, Pin pinDP, int onState = HIGH, int offState = LOW);
    ~SevenSegment();

    void displayDigit(int digit);
    void clearDisplay();
};

#endif