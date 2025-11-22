#include "SevenSegmentModel.h"

SevenSegmentModel::SevenSegmentModel(Pin pinA, Pin pinB, Pin pinC, Pin pinD, Pin pinE, Pin pinF, Pin pinG, Pin pinDP, int onState, int offState)
    : segmentA(pinA), segmentB(pinB), segmentC(pinC), segmentD(pinD),
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