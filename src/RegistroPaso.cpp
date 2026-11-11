#include <iostream>
#include "RegistroPaso.h"

// Constructor
RegistroPaso::RegistroPaso(std::string placa, std::string categoria, double valorCobrado) {
    this->placa = placa;
    this->categoria = categoria;
    this->valorCobrado = valorCobrado;
}

//Destructor
RegistroPaso::~RegistroPaso() {
    std::cout << "Destruyendo RegistroPaso " << this->placa << std::endl;
}

// Getters
std::string RegistroPaso::getPlaca() {
    return this->placa;
}
std::string RegistroPaso::getCategoria() {
    return this->categoria;
}

double RegistroPaso::getValorCobrado() {
    return this->valorCobrado;
}

// Setters
void RegistroPaso::setPlaca(std::string placa) {
    this->placa = placa;
}

void RegistroPaso::setCategoria(std::string categoria) {
    this->categoria = categoria;
}

void RegistroPaso::setValorCobrado(double valorCobrado) {
    this->valorCobrado = valorCobrado;
}




