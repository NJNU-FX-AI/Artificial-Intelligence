#ifndef LECODERPORT
#define LECODERPORT
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Arduino.h>

class LeCoderPort{
public:LeCoderPort(uint8_t port);

    void SetLEDStatus(uint8_t status);
    uint8_t ButtonPort(uint8_t port);
    uint8_t ISensorPort(uint8_t port);
    uint8_t LSensorPort(uint8_t port);
    uint8_t DigitalPort(uint8_t port);
    uint8_t AnalogPort(uint8_t port);
private:
   volatile uint8_t ControlPort;
   volatile uint8_t Button;
   volatile uint8_t ISensor;
   volatile uint8_t LSensor;
   volatile uint8_t Digital;
   volatile uint8_t Analog;
};

#endif // LECODERPORT

