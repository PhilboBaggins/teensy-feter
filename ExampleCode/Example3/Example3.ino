#include "TeensyFeterControl.h"

TeensyFeterControl tFets;

void setup()
{
    Serial.begin(115200);
    tFets.begin();
    tFets.allOff();
}
 
void loop()
{
    if (Serial.available())
    {
        switch(Serial.read())
        {
            case '0': tFets.outputToggle(0); break;
            case '1': tFets.outputToggle(1); break;
            case '2': tFets.outputToggle(2); break;
            case '3': tFets.outputToggle(3); break;
            case '4': tFets.outputToggle(4); break;
            case '5': tFets.outputToggle(5); break;
            case '6': tFets.outputToggle(6); break;
            case '7': tFets.outputToggle(7); break;
            case '8': tFets.outputToggle(8); break;
            case '9': tFets.outputToggle(9); break;
            default: /* Ignore anything else */ break;
        }
    }
}
