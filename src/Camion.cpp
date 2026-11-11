#include "Camion.h"
#include "Excepciones.h"

Camion::Camion(std::string placa, int ejes,Propietario*propietario) : Vehiculo(placa,propietario) {
    if (ejes < 2) {
        throw DatosInvalidosException("Error: Un camion debe tener al menos 2 ejes.");
    }
    this->ejes = ejes;
}

void Camion::agregarEje() {
    this->ejes++;
}   

double Camion::calcularPeaje() const {
    return this->ejes * 8400;
}