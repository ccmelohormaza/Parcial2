#ifndef BUS_H
#define BUS_H
#include "Vehiculo.h"

class Bus : public Vehiculo {
private:
    int puestos;
public:
    Bus(std::string placa,int puestos);

    // getter
    int getPuestos();
    // setterr
    void setPuestos(int puestos);  
    // metodos generales: 
    double calcularPeaje() const override;
};

#endif