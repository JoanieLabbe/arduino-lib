#ifndef FourBitDigitalTube_h
#define FourBitDigitalTube_h

#include "SevenSegment.h"
#include <Arduino.h>

class FourBitDigitalTube
{
private:
    static const int DELAY = 2;

    SevenSegment sevenSegment;
    int d1;
    int d2;
    int d3;
    int d4;

public:
    FourBitDigitalTube(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP, int pinD1, int pinD2, int pinD3, int pinD4);
    ~FourBitDigitalTube();

    void displayDigitAt(int digit, int position);
    void displayNumber(int number);
    void displayNumberDuring(int number, unsigned int durationMs);
    void chooseDisplay(int position);
};

#endif