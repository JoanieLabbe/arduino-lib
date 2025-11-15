#include "SevenSegment.h"
#include "SevenSegmentDisplayNumber.h"

SevenSegment::SevenSegment(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP, int onState = HIGH, int offState = LOW)
    : model(pinA, pinB, pinC, pinD,
            pinE, pinF, pinG, pinDP, onState, offState)
{
    this->onState = onState;
    this->offState = offState;
}

SevenSegment::~SevenSegment()
{
}

void SevenSegment::displayDigit(int digit)
{
    switch (digit)
    {
    case 0:
        SevenSegmentDisplayNumber::displayZero(model);
        break;
    case 1:
        SevenSegmentDisplayNumber::displayOne(model);
        break;
    case 2:
        SevenSegmentDisplayNumber::displayTwo(model);
        break;
    case 3:
        SevenSegmentDisplayNumber::displayThree(model);
        break;
    case 4:
        SevenSegmentDisplayNumber::displayFour(model);
        break;
    case 5:
        SevenSegmentDisplayNumber::displayFive(model);
        break;
    case 6:
        SevenSegmentDisplayNumber::displaySix(model);
        break;
    case 7:
        SevenSegmentDisplayNumber::displaySeven(model);
        break;
    case 8:
        SevenSegmentDisplayNumber::displayEight(model);
        break;
    case 9:
        SevenSegmentDisplayNumber::displayNine(model);
        break;

    default:
        break;
    }
}

void SevenSegment::clearDisplay()
{
    model.Clear();
}
