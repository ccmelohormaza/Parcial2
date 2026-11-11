#ifndef MOTO_H
#define MOTO_H
#include "Vehiculo.h"

class Moto: public Vehiculo {
    private:
        int cilindraje;
    public:
        Moto(std::string placa , int cilindraje);
        // getters 
        int getCilindraje();
        // setters 
        void setCilindraje(int cilindraje);
        // metodos generales y funciones 
        bool esAltoCilindraje();
        double calcularPeaje() const override;
};  
#endif