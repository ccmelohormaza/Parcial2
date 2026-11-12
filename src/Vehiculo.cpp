#include  "Vehiculo.h" 
#include "Excepciones.h"

// Constructor 
Vehiculo::Vehiculo(std::string placa, Propietario* propietario) {
    if (placa.empty()) {
        throw PlacaInvalidaException("Error: La placa del vehiculo no puede estar vacia.");
    }
    this->placa = placa;
    this->propietario = propietario;}
// getters 
std::string Vehiculo::getPlaca(){
    return placa;}

Propietario* Vehiculo::getPropietario() {
    return propietario;
}

// setters 
void Vehiculo::setPlaca(std::string placa){ 
    if (placa.empty()) {
        throw PlacaInvalidaException("Error:  La placa del vehiculo no puede estar vacia.");
    }
    this->placa = placa;
}

void Vehiculo::setPropietario(Propietario* propietario) {
    this->propietario = propietario;
}

std::ostream& operator<<(std::ostream& os, Vehiculo& v) {
    os << v.describir();
    return os;
}