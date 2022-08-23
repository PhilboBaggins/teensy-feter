#include "TeensyFeterControl.h"

TeensyFeterControl tFets;

void setup()
{
    tFets.begin();
}

void loop()
{
    tFets.outputOn(0);
    for (int pinIdx = 1; pinIdx < TeensyFeterControl::NUM_OUTPUTS; pinIdx++)
    {
        tFets.outputToggle(pinIdx);
    }
    delay(300);
}
