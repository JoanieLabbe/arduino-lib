#include "FourBitDigitalTube.h"

FourBitDigitalTube::FourBitDigitalTube(Pin pinA, Pin pinB, Pin pinC, Pin pinD, Pin pinE, Pin pinF, Pin pinG, Pin pinDP, Pin pinD1, Pin pinD2, Pin pinD3, Pin pinD4)
    : sevenSegment(pinA, pinB, pinC, pinD, pinE, pinF, pinG, pinDP, LOW, HIGH)
{
    // Initialize digit control pins
    d1 = pinD1;
    d2 = pinD2;
    d3 = pinD3;
    d4 = pinD4;

    pinMode(d1, OUTPUT);
    pinMode(d2, OUTPUT);
    pinMode(d3, OUTPUT);
    pinMode(d4, OUTPUT);
}

FourBitDigitalTube::~FourBitDigitalTube()
{
}

void FourBitDigitalTube::displayNumber(int number)
{
    displayDigitAt((number / 1000) % 10, 1);
    displayDigitAt((number / 100) % 10, 2);
    displayDigitAt((number / 10) % 10, 3);
    displayDigitAt(number % 10, 4);
}

void FourBitDigitalTube::displayNumberDuring(int number, unsigned int durationMs)
{
    unsigned long startTime = millis();
    while (millis() - startTime < durationMs)
    {
        displayNumber(number);
    }
}

void FourBitDigitalTube::displayDigitAt(int digit, int position)
{
    chooseDisplay(position);
    sevenSegment.displayDigit(digit);
    delay(DELAY);
    sevenSegment.clearDisplay();
}

void FourBitDigitalTube::chooseDisplay(int position)
{
    switch (position)
    {
    case 1:
        digitalWrite(d1, HIGH);
        digitalWrite(d2, LOW);
        digitalWrite(d3, LOW);
        digitalWrite(d4, LOW);
        break;
    case 2:
        digitalWrite(d1, LOW);
        digitalWrite(d2, HIGH);
        digitalWrite(d3, LOW);
        digitalWrite(d4, LOW);
        break;
    case 3:
        digitalWrite(d1, LOW);
        digitalWrite(d2, LOW);
        digitalWrite(d3, HIGH);
        digitalWrite(d4, LOW);
        break;
    case 4:
        digitalWrite(d1, LOW);
        digitalWrite(d2, LOW);
        digitalWrite(d3, LOW);
        digitalWrite(d4, HIGH);
        break;

    default:
        digitalWrite(d1, LOW);
        digitalWrite(d2, LOW);
        digitalWrite(d3, LOW);
        digitalWrite(d4, LOW);
        break;
    }
}