#include "Propietario.h"

Propietario::Propietario(std::string nombre , std::string documento ,bool Vecino): Persona(nombre,documento){
    this->Vecino=Vecino;
};

bool Propietario::getVecino(){
    return this->Vecino;} ; 

void Propietario::setVecino(bool Vecino){
    this->Vecino=Vecino;} ;

std::string Propietario::describir() const {
    std::string esVecinoTexto;
    
    if (Vecino) {
        esVecinoTexto = "Si";
    } else {
        esVecinoTexto = "No";
    }
    return "Propietario: " + nombre + " | Doc: " + documento + " | Vecino: " + esVecinoTexto;
}