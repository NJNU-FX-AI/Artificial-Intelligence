#ifndef LECODERSERVOMOTOR
#define LECODERSERVOMOTOR
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Arduino.h>

class LeCoderServoMotor{
public :LeCoderServoMotor();
uint8_t port(uint8_t port);
 private:
    volatile uint8_t ServoPort;

};


#endif // LECODERSERVOMOTOR

