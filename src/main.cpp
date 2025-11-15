#include <Arduino.h>
#include "FourBitDigitalTube.h"
// put function declarations here:
FourBitDigitalTube tube(1, 2, 3, 4, 5, 6, 7, 8, 12, 11, 10, 9);

void setup()
{
    // put your setup code here, to run once:
}

void loop()
{
    // put your main code here, to run repeatedly:
    int number = 0;
    while (true)
    {
        tube.displayNumberDuring(number, 1000);
        number = (number + 1) % 10000;
    }
}