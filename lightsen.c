define DIN_LIGHT_SENSOR    1    //Digital input channel 1
 
class MyRobot: public SimpleRobot
{
    //
    // This is to declare the light sensor object to be a digital input object.
    //
    DigitalInput lightSensor;
    DriverStationLCD *dsLCD;
 
    //
    // This initialize the light sensor object specifying the digital input channel.
    //
    MyRobot():
        lightSensor(DIN_LIGHT_SENSOR),
        dsLCD(DriverStationLCD::GetInstance())
    {
    }
 
    void OperatorControl()
    {
        while (IsEnabled() && IsOperatorControl())
        {
            UINT32 value = lightSensor.Get();
            dsLCD->PrintfLine(DriverStationLCD::kUserLine1, "value=%d", value);
            Wait(0.1);
        }
    }
};
