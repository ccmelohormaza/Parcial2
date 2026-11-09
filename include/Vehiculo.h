#ifndef VEHICULO_H
#define VEHICULO_H
#include <string>

class Vehiculo {
    protected:
        std::string placa;
    public:
        Vehiculo(std::string placa);
};

#endif