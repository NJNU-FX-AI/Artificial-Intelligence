#include "LeCoderDcMotor.h"

//void LeCoderDcMotor::setup(void) {
//    pinMode(dir,OUTPUT);
//}

LeCoderDcMotor::LeCoderDcMotor(uint8_t addr) {

    if(addr == 1)
    {
        pwm = 5;
        dir = 3;
    }
    else{
        pwm = 6;
        dir = 4;
    }
//    setup();
 pinMode(dir,OUTPUT);


}


void LeCoderDcMotor::run(int16_t speed) {


     if(speed >= 0)
     {
        speed	= speed > 255 ? 255 : speed;
        if(pwm == 6)
        {
        digitalWrite(dir,LOW);
        }
        else{
        digitalWrite(dir,HIGH);
        }


     }
     else {
          speed	= speed < -255 ? -255 : speed;
         speed = -speed;
         if(pwm == 6)
         {
             digitalWrite(dir,HIGH);
          }
          else{
             digitalWrite(dir,LOW);
          }

     }
      analogWrite(pwm,speed);

}


