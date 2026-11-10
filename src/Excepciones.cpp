#include "Excepciones.h"

PlacaInvalidaException::PlacaInvalidaException(std::string mensaje) {
    this->mensaje = mensaje;
}

const char* PlacaInvalidaException::what() const noexcept {
    return this->mensaje.c_str();
}

// dato invalidos


DatosInvalidosException::DatosInvalidosException(std::string mensaje) {
    this->mensaje = mensaje;
}   
const char* DatosInvalidosException::what() const noexcept {
    return this->mensaje.c_str();
}
