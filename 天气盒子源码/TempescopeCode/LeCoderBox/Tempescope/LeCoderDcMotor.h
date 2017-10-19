#ifndef LECODERDCMOTOR
#define LECODERDCMOTOR
#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif

#include <Arduino.h>

#define M1 0x1
#define M2 0x2

class LeCoderDcMotor {
 public:  LeCoderDcMotor(uint8_t addr);
//  void setup(void);
  void run(int16_t speed);

  private:
    volatile uint8_t dir;
    volatile uint8_t pwm;


};
#endif // LECODERDCMOTOR

