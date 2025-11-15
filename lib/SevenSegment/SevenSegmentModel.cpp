#include "SevenSegmentModel.h"

SevenSegmentModel::SevenSegmentModel(int pinA, int pinB, int pinC, int pinD, int pinE, int pinF, int pinG, int pinDP, int onState, int offState)
    : segmentA(pinA),
      segmentB(pinB), segmentC(pinC), segmentD(pinD),
      segmentE(pinE), segmentF(pinF), segmentG(pinG), segmentDP(pinDP)
{
    this->onState = onState;
    this->offState = offState;
}

void SevenSegmentModel::Clear()
{
    segmentA.changeState(offState);
    segmentB.changeState(offState);
    segmentC.changeState(offState);
    segmentD.changeState(offState);
    segmentE.changeState(offState);
    segmentF.changeState(offState);
    segmentG.changeState(offState);
    segmentDP.changeState(offState);
}