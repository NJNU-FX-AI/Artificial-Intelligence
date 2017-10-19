#ifndef LECODERBUZZER
#define LECODERBUZZER
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Arduino.h>

class LeCoderBuzzer{
public:LeCoderBuzzer();
void tone(uint16_t note,uint8_t beats);
void stopTone();
};

#endif // LECODERBUZZER

