#include "Buzzer.h"
/**
 * Crea instancia de buzzer y le añade un pin.
 */
Buzzer::Buzzer(byte pin){
    this->pin = pin;
}
/**
 * Inicializa el buzzer
 */
void Buzzer::init(){
    pinMode(pin, OUTPUT);
    noTone(pin);
}
/**
 * Enciende el buzzer a 1000Hz durante 200ms
 */
void Buzzer::on(){
    tone(pin,1000,200);
}