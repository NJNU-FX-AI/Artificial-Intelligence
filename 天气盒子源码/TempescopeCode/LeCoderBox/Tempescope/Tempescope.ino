#include <Arduino.h>
#include <Wire.h>
#include <Servo.h>
#include <SoftwareSerial.h>

#include "LeCoderDcMotor.h"

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
char Cmd;
LeCoderDcMotor DcMotor1(1);
LeCoderDcMotor DcMotor2(2);



void setup(){
    	pinMode(7,OUTPUT);
    Serial.begin(9600);
    	pinMode(8,OUTPUT);
    	pinMode(9,OUTPUT);
      pinMode(10,OUTPUT);
    DcMotor1.run(0);
    DcMotor2.run(0);
    digitalWrite(7,1);
//    Cmd = 0;
    
}

void loop(){
    
    if(Serial.available()){
        Cmd = Serial.read();
        switch(Cmd){
            case 'R'://rain
                 DcMotor2.run(-255);
                 digitalWrite(8,1);
                 digitalWrite(9,1);
                 digitalWrite(10,0);
                 DcMotor1.run(0);
                 digitalWrite(7,1);
             break;
             case 'S'://sun
                 DcMotor2.run(0);
                 digitalWrite(8,0);
                 digitalWrite(9,0);
                 digitalWrite(10,0);
                 DcMotor1.run(0);
                 digitalWrite(7,1);
             break;
             case 'F'://fog
                 digitalWrite(7,0);
                 DcMotor1.run(-180);
                 DcMotor2.run(0);
                 digitalWrite(8,1);
                 digitalWrite(9,0);
                  digitalWrite(10,0);
//                 DcMotor1.run(0);
//                 DcMotor2.run(0);
             break;
             case 'L'://lighting
                 DcMotor1.run(0);
                 DcMotor2.run(0);
                 digitalWrite(7,1);
                 digitalWrite(8,1);
                 digitalWrite(9,0);
                 delay(1000*0.5);
                 digitalWrite(8,0);
                 digitalWrite(9,1);
                 delay(1000*0.5);
             break;

             case 'W'://wind
                 digitalWrite(7,1);
                 DcMotor2.run(0);
                 DcMotor1.run(-255);
              break;

               case 'A'://Fan ON
                   DcMotor1.run(-255);
                   break;
               case 'B'://Fan OFF
                   DcMotor1.run(0);
                   break;
               case 'C'://Water ON
                   DcMotor2.run(-255);
                   break;
               case 'D'://Water OFF
                   DcMotor2.run(0);
                   break;
               case 'G'://Fog ON
                   digitalWrite(7,0);
                   break;
               case 'H'://Fog OFF
                   digitalWrite(7,1);
                   break;
               case 'J'://LED1 ON
                    digitalWrite(8,0);
                    break;
               case 'K'://LED1 OFF
                    digitalWrite(8,1);
                    break;
               case 'M'://LED2 ON
                   digitalWrite(9,0);
                   break;
               case 'N'://LED2 OFF
                   digitalWrite(9,1);
                   break;
               case 'P'://LED3 ON
                    digitalWrite(10,0);
                    break;
               case 'Q'://LED3 OFF
                    digitalWrite(10,1);
                    break;
}
//        if(((Cmd)==('R'))){
//            DcMotor2.run(255);
//            digitalWrite(8,1);
//            digitalWrite(9,1);
//            DcMotor1.run(0);
//        }
//        if(((Cmd)==('S'))){
//            DcMotor2.run(0);
//            digitalWrite(8,0);
//            digitalWrite(9,0);
//            DcMotor1.run(0);
//        }
//        if(((Cmd)==('F'))){
//            digitalWrite(7,0);
//            DcMotor1.run(255);
//            DcMotor2.run(0);
//            digitalWrite(8,1);
//            digitalWrite(9,0);
//            DcMotor1.run(0);
//            DcMotor2.run(0);
//        }
//        if(((Cmd)==('L'))){
//            DcMotor1.run(0);
//            DcMotor2.run(0);
//            digitalWrite(8,1);
//            digitalWrite(9,0);
//            delay(1000*0.5);
//            digitalWrite(8,0);
//            digitalWrite(9,1);
//            delay(1000*0.5);
//        }
    }
    
}

