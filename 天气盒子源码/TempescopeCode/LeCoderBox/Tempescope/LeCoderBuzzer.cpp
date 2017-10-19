#include "LeCoderBuzzer.h"

LeCoderBuzzer::LeCoderBuzzer(){
 pinMode(11,OUTPUT);
}

void LeCoderBuzzer::tone(uint16_t note,uint8_t beats){
    int period = 1000000L / note;
    int pulse = period / 2;
    for (long i = 0; i < beats * 1000L; i += period)
    {
      digitalWrite(11, HIGH);
      delayMicroseconds(pulse);
      digitalWrite(11, LOW);
      delayMicroseconds(pulse);
    }
}

void LeCoderBuzzer::stopTone(){
    digitalWrite(11,LOW);
}
