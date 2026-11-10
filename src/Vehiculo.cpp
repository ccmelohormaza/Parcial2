#include  "Vehiculo.h" 
#include "Excepciones.h"

// Constructor 
Vehiculo::Vehiculo(std::string placa){
    if (placa.empty()) {
        throw PlacaInvalidaException("Error: La placa del vehículo no puede estar vacía.");
    }
    this->placa = placa;}
// getters 
std::string Vehiculo::getPlaca(){
    return placa;}
// setters 
void Vehiculo::setPlaca(std::string placa){ 
    if (placa.empty()) {
        throw PlacaInvalidaException("Error: La placa del vehículo no puede estar vacía.");
    }
    this->placa = placa;
}