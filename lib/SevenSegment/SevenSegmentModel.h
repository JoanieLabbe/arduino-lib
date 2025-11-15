#ifndef SEVENSEGMENTMODEL_H
#define SEVENSEGMENTMODEL_H

#include <DigitalLED.h>

class SevenSegmentModel
{
public:
    DigitalLED segmentA;
    DigitalLED segmentB;
    DigitalLED segmentC;
    DigitalLED segmentD;
    DigitalLED segmentE;
    DigitalLED segmentF;
    DigitalLED segmentG;
    DigitalLED segmentDP;
    int onState = HIGH;
    int offState = LOW;

    SevenSegmentModel(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP, int onState, int offState);

    void Clear();
};

#endif