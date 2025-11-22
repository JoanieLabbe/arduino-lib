#ifndef BUZZER_H
#define BUZZER_H

#include <Arduino.h>
#include "../Pin.h"
#include "Pitches.h"

class Buzzer
{
protected:
    Pin pin;

public:
    Buzzer(Pin pin);
    ~Buzzer();

    virtual void playTone(int frequency, int duration);
    virtual void stopTone();
    virtual void playNote(Note note, int duration);
    void playMelody(Note *melody, int *noteDurations, int length);
};

#endif