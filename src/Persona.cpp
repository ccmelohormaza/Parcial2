#include "Persona.h"
Persona::Persona(std::string nombre , std::string documento){
    this->nombre=nombre;
    this->documento=documento;
}
// getters 
std::string Persona::getNombre(){
    return this->nombre;
}
std::string Persona::getDocumento(){
    return this->documento;
}

//setters
void Persona::setNombre(std::string nombre){
    this->nombre=nombre;
}
void Persona::setDocumento(std::string documento){
    this->documento=documento;
}
