#include "Emergencia.h"
Emergencia::Emergencia(std::string unidad,std::string descripcion ){
    this->unidad=unidad;
    this->descripcion=descripcion;
    this->enEmergencia=false;
}

// setters 
void Emergencia::setUnidad(std::string unidad){
    this->unidad=unidad;
}

void Emergencia::setDescripcion(std::string descripcion){
    this->descripcion=descripcion;
}

void Emergencia::setEmegencia (bool enEmergencia ){
    this->enEmergencia=enEmergencia;
}

// getters 
std::string Emergencia::getUnidad(){
    return this->unidad;
}
std::string Emergencia::getDescripcion(){
    return this->descripcion;
}
bool Emergencia::getEmergencia(){
    return this->enEmergencia;
}