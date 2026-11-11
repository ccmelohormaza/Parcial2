#include "Bus.h"
#include "Excepciones.h"

Bus::Bus(std::string placa, int puestos,Propietario* propietario ) : Vehiculo(placa,propietario) {
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
    this->puestos = puestos;
}

// metodos generales y funciones
double Bus::calcularPeaje() const {
    double tarifaBase = 15200;
    return tarifaBase;
}

std::string Bus::getCategoria() {
    return "Bus";}