#include "Bus.h"
#include "Excepciones.h"

Bus::Bus(std::string placa, int puestos ) : Vehiculo(placa) {
    if (puestos < 1) {
        throw DatosInvalidosException("Error: Un bus debe tener al menos 1 puesto.");
    }
    this->puestos = puestos;
}
// getters 
int Bus::getPuestos() {
    return this->puestos;
}
// setters 
void Bus::setPuestos(int puestos) {
    if (puestos < 1) {
        throw DatosInvalidosException("Error: Un bus debe tener al menos 1 puesto.");
    }
