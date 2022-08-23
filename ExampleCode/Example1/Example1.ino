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
const int NUM_OUTPUTS = sizeof(PIN_NUMBERS) / sizeof(int);

void setup()
{
    // Configure all outputs and turn them off
    for (int pinIdx = 0; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        pinMode(PIN_NUMBERS[pinIdx], OUTPUT);
        digitalWrite(PIN_NUMBERS[pinIdx], LOW);
    }
}

void loop()
{
    digitalWrite(PIN_NUMBERS[0], HIGH); // Turn on first output

    // Blink all other outputs on and off
    for (int pinIdx = 1; pinIdx < NUM_OUTPUTS; pinIdx++)
    {
        int pinNum = PIN_NUMBERS[pinIdx];
        digitalWrite(pinNum, !digitalRead(pinNum));
    }

    delay(300);
}
