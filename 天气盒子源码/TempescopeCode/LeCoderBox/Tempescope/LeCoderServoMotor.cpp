#include "LeCoderServoMotor.h"

LeCoderServoMotor::LeCoderServoMotor(){

//    default : return 2;
}

uint8_t LeCoderServoMotor::port(uint8_t port){
switch(port){
    case 7 : ServoPort = 2; break;
    case 6 : ServoPort = 12; break;
    case 5 : ServoPort = 13; break;
    case 4 : ServoPort = 9; break;
    case 3 : ServoPort = 10; break;
    case 2 : ServoPort = 7; break;
    case 1 : ServoPort = 8; break;
    }
return ServoPort;
}
