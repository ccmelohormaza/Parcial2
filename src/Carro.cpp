#include "Carro.h"
#include "Propietario.h"
#include "Excepciones.h"
#include <iostream>

Carro::Carro(std::string placa , int pasajeros,Propietario*propietario): Vehiculo(placa,propietario) {
    if (pasajeros<1){
        throw DatosInvalidosException("Error: El numero de pasajeros no puede ser menor a 1.");
    }
    this->pasajeros=pasajeros;
}  
 
Carro::~Carro() {
    std::cout << "Destruyendo Carro " << this->placa << std::endl;
}

int Carro::getPasajeros(){
    return this->pasajeros;
}

void Carro::setPasajeros(int pasajeros) {
    if (pasajeros < 1) {
        throw DatosInvalidosException("Error: Un carro debe llevar al menos 1 pasajero.");
    }
    this->pasajeros = pasajeros;
}

void Carro::subirPasajero() {
    this->pasajeros++;
}

double Carro::calcularPeaje() const {
    double tarifaBase = 11800.0;
    if (propietario != nullptr && propietario->getVecino()) {
        return tarifaBase *(100 - 35) / 100;
    }
    return tarifaBase;
}

std::string Carro::getCategoria() {
    return "Carro";
}

std::string Carro::describir() {
    return "Categoria: " + getCategoria() + ", Placa: " + this->placa + ", Pasajeros: " + std::to_string(this->pasajeros);
}
