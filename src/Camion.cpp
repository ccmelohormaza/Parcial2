#include "Camion.h"
#include "Excepciones.h"

Camion::Camion(std::string placa, int ejes) : Vehiculo(placa) {
    if (ejes < 2) {
        throw DatosInvalidosException("Error: Un camion debe tener al menos 2 ejes.");
    }
    this->ejes = ejes;
}

void Camion::agregarEje() {
    this->ejes++;
}   