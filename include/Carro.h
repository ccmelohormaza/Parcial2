#ifndef CARRO_H
#define CARRO_H
#include "Vehiculo.h"
class Carro : public Vehiculo {
    private:
        int pasajeros;
    public:
        Carro(std::string placa, int pasajeros, Propietario* propietario=nullptr);

        //getters 
        int getPasajeros();
        //setters
        void setPasajeros(int pasajeros);
        //metodos y funciones 
        void subirPasajero();
        double calcularPeaje() const override;
        std::string getCategoria() override;
};

#endif