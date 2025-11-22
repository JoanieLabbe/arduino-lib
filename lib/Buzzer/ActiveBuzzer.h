#ifndef ACTIVEBUZZER_h
#define ACTIVEBUZZER_h

#include "Buzzer.h"

class ActiveBuzzer : public Buzzer
{
public:
    ActiveBuzzer(Pin pin);
    ~ActiveBuzzer();

    void playTone(int frequency, int duration);
    void stopTone();
};

#endif