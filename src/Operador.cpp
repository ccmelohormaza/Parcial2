#include "Operador.h"

Operador::Operador(std::string nombre , std::string documento, std::string codigo): Persona(nombre, documento) {
    this->codigo = codigo;
}

std::string Operador::getCodigo() {
    return codigo;
}

void Operador::setCodigo(std::string codigo) {
    this->codigo = codigo;
}   