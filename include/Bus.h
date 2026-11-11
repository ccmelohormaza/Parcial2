#ifndef BUS_H
#define BUS_H
#include "Vehiculo.h"


class Bus : public Vehiculo {
private:
    int puestos;
public:
    //constructor
    Bus(std::string placa,int puestos, Propietario* propietario=nullptr);
    // destructor
    ~Bus() override;
    // getter
    int getPuestos();
    // setterr
    void setPuestos(int puestos);  
    // metodos generales: 
    double calcularPeaje() const override;
    std::string getCategoria() override;
    std::string describir() override;

};

#endif