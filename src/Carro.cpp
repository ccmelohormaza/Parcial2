#include "Carro.h"
#include "Excepciones.h"

Carro::Carro(std::string placa , int pasajeros,Propietario*propietario): Vehiculo(placa,propietario) {
    if (pasajeros<1){
        throw DatosInvalidosException("Error: El numero de pasajeros no puede ser menor a 1.");
    }
    this->pasajeros=pasajeros;
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
        return tarifaBase * 0.80;
    }
    return tarifaBase;
}
