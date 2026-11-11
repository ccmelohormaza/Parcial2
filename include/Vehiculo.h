#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include "Propietario.h"

class Propietario;
class Vehiculo {
    protected:
        std::string placa;
        Propietario* propietario;
    public:
        // constructor
        Vehiculo(std::string placa, Propietario* propietario=nullptr);
        virtual ~Vehiculo()=default;  
        // getters 
        std::string getPlaca();
        Propietario* getPropietario();
        // setters
        void  setPlaca(std::string placa);     
        void setPropietario(Propietario* propietario);

        // metodo virtual puro
        virtual double calcularPeaje() const = 0;
};

#endif