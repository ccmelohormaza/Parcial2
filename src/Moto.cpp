#include "Moto.h"
#include "Excepciones.h" 

Moto::Moto(std::string placa, int cilindraje,Propietario* propietario): Vehiculo(placa,propietario) {
  
    if (cilindraje <= 0) {
        throw DatosInvalidosException("Error: El cilindraje debe ser mayor que cero.");
    }
    this->cilindraje = cilindraje;
}
    // getters 
    int Moto::getCilindraje(){
        return this->cilindraje;    
    }
    // setters 
    void Moto::setCilindraje(int cilindraje){
        if (cilindraje <= 0) {
        throw DatosInvalidosException("Error: El cilindraje debe ser mayor que cero.");
    }
        this->cilindraje = cilindraje;
    }
    bool Moto::esAltoCilindraje(){
        if ( this->cilindraje > 400 ){
            return true;
        } else {
            return false;
        }
    }
    double Moto::calcularPeaje() const {
        return 3900;
    }


