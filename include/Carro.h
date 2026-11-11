#ifndef CARRO_H
#define CARRO_H
#include "Vehiculo.h"
class Carro : public Vehiculo {
    private:
        int pasajeros;
    public:
        //constructor 
        Carro(std::string placa, int pasajeros, Propietario* propietario=nullptr);
        // destructor
        ~Carro() override;
        //getters 
        int getPasajeros();
        //setters
        void setPasajeros(int pasajeros);
        //metodos y funciones 
        void subirPasajero();
        double calcularPeaje() const override;
        std::string getCategoria() override;
        std::string describir() override;
};

#endif