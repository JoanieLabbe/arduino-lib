#include <Arduino.h>
#include "../Pin.h"
#include "ActiveBuzzer.h"
#include "PassiveBuzzer.h"
#include "Pitches.h"

// put function declarations here:
ActiveBuzzer activeBuzzer(Pin::D9S);

Note melody[] = {
    Note::Note_C4, Note::Note_G3, Note::Note_G3, Note::Note_A3, Note::Note_G3, Note::Note_REST, Note::Note_B3, Note::Note_C4};

// note durations: 4 = quarter note, 8 = eighth note, etc.:

int noteDurations[] = {

    4, 8, 8, 4, 4, 4, 4, 4

};

void setup()
{
    // put your setup code here, to run once:
}

void loop()
{
    // put your main code here, to run repeatedly:
    activeBuzzer.playMelody(melody, noteDurations, 8);
    delay(2000);
}