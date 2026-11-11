#include "Moto.h"
#include "Propietario.h"
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
            double tarifaBase = 3900.0;
            if (propietario != nullptr && propietario->getVecino()) {
                return tarifaBase * (100 - 35) / 100;
            }
            return tarifaBase;
    }


