#include "LeCoderPort.h"

LeCoderPort::LeCoderPort(uint8_t port){
    switch (port) {
    case 1: ControlPort =8;
            Digital = 8;
            Button = 8;
            ISensor = 8;

            Analog = 1;
            LSensor = 1;
        break;
    case 2: ControlPort =7;
            Digital = 7;
            Button = 7;
            ISensor = 7;

            Analog = 0;
            LSensor = 0;
        break;
    case 3: ControlPort =10;
            Digital = 10;
            Button = 10;
            ISensor = 10;

            Analog = 3;
            LSensor = 3;
        break;
    case 4: ControlPort = 9;
            Digital = 9;
            Button = 9;
            ISensor = 9;

            Analog = 2;
            LSensor = 2;
        break;
//    default:
//        break;
    }

}

void LeCoderPort::SetLEDStatus(uint8_t status){
    pinMode(ControlPort,OUTPUT);
    digitalWrite(ControlPort,status);
}


uint8_t LeCoderPort::DigitalPort(uint8_t port){
    return Digital;
}

uint8_t LeCoderPort::ButtonPort(uint8_t port){
    return Button;
}

uint8_t LeCoderPort::ISensorPort(uint8_t port){
    return ISensor;
}


uint8_t LeCoderPort::AnalogPort(uint8_t port){
    return Analog;
}

uint8_t LeCoderPort::LSensorPort(uint8_t port){
    return LSensor;
}

