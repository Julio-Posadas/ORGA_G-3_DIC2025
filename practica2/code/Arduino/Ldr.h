#ifndef LDR_H
#define LDR_H
#include <Arduino.h>


class Ldr{

    private:
        byte pin;
    public:
        Ldr(byte pin);
        float read(); 

};



#endif