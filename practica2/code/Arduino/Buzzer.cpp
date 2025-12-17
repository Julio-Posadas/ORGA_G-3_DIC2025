#include "Buzzer.h"

Buzzer::Buzzer(byte pin){
    this->pin = pin;
}

void Buzzer::init(){
    pinMode(pin, OUTPUT);
    off();   // empieza apagado
}

void Buzzer::on(){
    digitalWrite(pin, HIGH);{
    tone(pin, 1000, 200);//El buzzer suena a 1000 hz durante 2 segundos
    }
}

void Buzzer::off(){
    digitalWrite(pin, LOW);
}
