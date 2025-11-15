#include "SevenSegmentDisplayNumber.h"

void SevenSegmentDisplayNumber::displayZero(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.onState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.offState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayOne(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.offState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.offState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.offState);
    model.segmentG.changeState(model.offState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayTwo(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.offState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.onState);
    model.segmentF.changeState(model.offState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayThree(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.offState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayFour(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.offState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.offState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayFive(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.offState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displaySix(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.offState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.onState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displaySeven(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.offState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.offState);
    model.segmentG.changeState(model.offState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayEight(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.onState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}

void SevenSegmentDisplayNumber::displayNine(SevenSegmentModel &model)
{
    model.segmentA.changeState(model.onState);
    model.segmentB.changeState(model.onState);
    model.segmentC.changeState(model.onState);
    model.segmentD.changeState(model.onState);
    model.segmentE.changeState(model.offState);
    model.segmentF.changeState(model.onState);
    model.segmentG.changeState(model.onState);
    model.segmentDP.changeState(model.offState);
}