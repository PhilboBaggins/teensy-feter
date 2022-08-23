
class TeensyFeterControl
{
public:
    TeensyFeterControl();

    static const int NUM_OUTPUTS = 10;

    void begin();

    void allOn();
    void allOff();
    void allToggle();

    void outputOn(int pinIdx);
    void outputOff(int pinIdx);
    void outputToggle(int pinIdx);
};
