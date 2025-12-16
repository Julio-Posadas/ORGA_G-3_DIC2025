#include "Ldr.h"

/**
 * Crea instancia de ldr con un pin definido
 */
Ldr::Ldr(byte pin){
    this->pin=pin;
}
/**
 * Lee el valor de la luz y lo mapea para volverlo porcentaje,
 * devuelve un número flotante
 */
float Ldr::read(){
    float valor = analogRead(pin);
    valor = map(valor, 100, 840, 100 ,0);
    return valor;
}