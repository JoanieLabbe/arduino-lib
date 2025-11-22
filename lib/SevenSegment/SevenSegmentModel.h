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

    SevenSegmentModel(Pin pinA, Pin pinB, Pin pinC, Pin pinD, Pin pinE, Pin pinF, Pin pinG, Pin pinDP, int onState, int offState);

    void Clear();
};

#endif