#include "ActiveBuzzer.h"

ActiveBuzzer::ActiveBuzzer(Pin pin) : Buzzer(pin)
{
}

ActiveBuzzer::~ActiveBuzzer()
{
}

void ActiveBuzzer::playTone(int frequency, int duration)
{
    tone(pin, frequency, duration);
}

void ActiveBuzzer::stopTone()
{
    noTone(pin);
}