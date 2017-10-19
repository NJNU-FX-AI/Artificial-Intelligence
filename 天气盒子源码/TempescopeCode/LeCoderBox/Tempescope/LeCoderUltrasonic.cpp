
#include "LeCoderUltrasonic.h"

LeCoderUltrasonic::LeCoderUltrasonic(){

}

double LeCoderUltrasonic::distanceCm(uint16_t maxCm)
{
    long distance = measure(maxCm * 55 + 200);
    return (double)distance / 58.0;
}

double LeCoderUltrasonic::distanceInch(uint16_t maxInch)
{
    long distance = measure(maxInch * 145 + 200);
    return (double)(distance / 148.0);
}

double LeCoderUltrasonic::distanceCm(){
  return distanceCm(400);
}
double LeCoderUltrasonic::distanceInch(){
  return distanceInch(5);
}
long LeCoderUltrasonic::measure(unsigned long timeout)
{
    long duration;
    pinMode(13,OUTPUT);
    digitalWrite(13,LOW);
    delayMicroseconds(2);
    digitalWrite(13,HIGH);
    delayMicroseconds(15);
    digitalWrite(13,LOW);
    pinMode(12, INPUT);
    duration = pulseIn(12, HIGH, timeout);
    return duration;
}
