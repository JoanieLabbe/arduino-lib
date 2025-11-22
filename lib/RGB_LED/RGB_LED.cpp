#include "Arduino.h"
#include "RGB_LED.h"

RGB_LED::RGB_LED(Pin redPin, Pin greenPin, Pin bluePin)
    : red(redPin), green(greenPin), blue(bluePin)
{
}

RGB_LED::~RGB_LED()
{
}

void RGB_LED::setColor(int redValue, int greenValue, int blueValue)
{
    red.changeState(redValue);
    green.changeState(greenValue);
    blue.changeState(blueValue);
}