#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>

class Vehiculo {
    protected:
        std::string placa;
    public:
        // constructor
        Vehiculo(std::string placa);
        // getters 
        std::string getPlaca();
        // setters
        void  setPlaca(std::string placa);     
        // el metodo virtual puro 
        virtual double calcularPeaje() const = 0;
};

#endif