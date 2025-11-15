#ifndef ISevenSegmentDisplay_h
#define ISevenSegmentDisplay_h

#include "SevenSegmentModel.h"

class SevenSegmentDisplayNumber
{
public:
    static void displayZero(SevenSegmentModel &model);
    static void displayOne(SevenSegmentModel &model);
    static void displayTwo(SevenSegmentModel &model);
    static void displayThree(SevenSegmentModel &model);
    static void displayFour(SevenSegmentModel &model);
    static void displayFive(SevenSegmentModel &model);
    static void displaySix(SevenSegmentModel &model);
    static void displaySeven(SevenSegmentModel &model);
    static void displayEight(SevenSegmentModel &model);
    static void displayNine(SevenSegmentModel &model);
};

#endif