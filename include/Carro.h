#ifndef CARRO_H
#define CARRO_H
#include "Vehiculo.h"
class Carro : public Vehiculo {
    private:
        int pasajeros;
    public:
        Carro(std::string placa);
        int getPasajerso();
        void setPasajeros(int pasajeros);
        void subirPasajero();
};

#endif