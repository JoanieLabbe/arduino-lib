#ifndef FourBitDigitalTube_h
#define FourBitDigitalTube_h

#include "SevenSegment.h"
#include <Arduino.h>

class FourBitDigitalTube
{
private:
    static const int DELAY = 2;

    SevenSegment sevenSegment;
    Pin d1;
    Pin d2;
    Pin d3;
    Pin d4;

public:
    FourBitDigitalTube(Pin pinA, Pin pinB, Pin pinC, Pin pinD, Pin pinE, Pin pinF, Pin pinG, Pin pinDP, Pin pinD1, Pin pinD2, Pin pinD3, Pin pinD4);
    ~FourBitDigitalTube();

    void displayDigitAt(int digit, int position);
    void displayNumber(int number);
    void displayNumberDuring(int number, unsigned int durationMs);
    void chooseDisplay(int position);
};

#endif