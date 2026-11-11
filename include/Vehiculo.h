#ifndef VEHICULO_H
#define VEHICULO_H


#include <string>
#include "Propietario.h"
#include <iostream>

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
        virtual std::string getCategoria()=0;
        virtual std::string describir() = 0;
};

// aqui realizo una sobrecarga de operador --tema no enseñado en teoria 
std::ostream& operator<<(std::ostream& os, Vehiculo& v);
#endif