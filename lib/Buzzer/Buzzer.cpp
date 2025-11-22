#include "Buzzer.h"

Buzzer::Buzzer(Pin pin)
{
    this->pin = pin;
    pinMode(pin, OUTPUT);
}

Buzzer::~Buzzer()
{
}

void Buzzer::playTone(int frequency, int duration)
{
}

void Buzzer::stopTone()
{
}

void Buzzer::playNote(Note note, int duration)
{
    this->playTone(note, duration);
}

void Buzzer::playMelody(Note *melody, int *noteDurations, int length)
{
    for (int i = 0; i < length; i++)
    {
        int noteDuration = 1000 / noteDurations[i];
        playNote(melody[i], noteDuration);

        int pauseBetweenNotes = noteDuration * 1.30;

        delay(pauseBetweenNotes);

        stopTone();
    }
}