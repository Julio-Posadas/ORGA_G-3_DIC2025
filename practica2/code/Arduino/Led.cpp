#include "Led.h"

/**
 * Crea una instancia con un pin determinado
 */
Led::Led(byte pin){
    this->pin = pin;
}
/**
 * Inicializa el led
 */
void Led::init(){
    pinMode(pin, OUTPUT);
}
/**
 * Enciende el led
 */
void Led::on(){
    digitalWrite(pin, HIGH);
}
/**
 * Apaga el led
 */
void Led::off(){
    digitalWrite(pin,LOW);
}