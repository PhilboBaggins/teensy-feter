#include "Arduino.h"
#include "TeensyFeterControl.h"

const int PIN_NUMBERS[]
{
    2,
    3,
    4,
    5,
    6,
    23,
    22,
    21,
    20,
    19,
};

TeensyFeterControl::TeensyFeterControl()
{
    begin();
}

void TeensyFeterControl::begin()
{
    // Configure all outputs and turn them off
    for (int pinIdx = 0; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        pinMode(PIN_NUMBERS[pinIdx], OUTPUT);
        digitalWriteFast(PIN_NUMBERS[pinIdx], LOW);
    }
}

void TeensyFeterControl::allOn()
{
    for (int pinIdx = 1; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        this->outputOn(pinIdx);
    }
}

void TeensyFeterControl::allOff()
{
    for (int pinIdx = 1; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        this->outputOff(pinIdx);
    }
}

void TeensyFeterControl::allToggle()
{
    for (int pinIdx = 1; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        this->outputToggle(pinIdx);
    }
}

void TeensyFeterControl::outputOn(int pinIdx)
{
    digitalWriteFast(PIN_NUMBERS[pinIdx], HIGH);
}

void TeensyFeterControl::outputOff(int pinIdx)
{
    digitalWriteFast(PIN_NUMBERS[pinIdx], LOW);
}

void TeensyFeterControl::outputToggle(int pinIdx)
{
    int pinNum = PIN_NUMBERS[pinIdx];
    digitalWriteFast(pinNum, !digitalRead(pinNum));
}
