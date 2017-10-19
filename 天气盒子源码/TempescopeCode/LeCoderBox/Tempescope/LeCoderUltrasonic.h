#ifndef LECODERULTRASONIC
#define LECODERULTRASONIC
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Arduino.h>
class LeCoderUltrasonic{
public:LeCoderUltrasonic();
    double distanceCm(uint16_t maxCm);
    double distanceInch(uint16_t maxInch);
    double distanceCm();
    double distanceInch();
    long measure(unsigned long timeout);


};

#endif // LECODERULTRASONIC

