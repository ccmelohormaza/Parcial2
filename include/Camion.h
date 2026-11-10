#ifndef CAMION_H
#define CAMION_H
#include "Vehiculo.h"
class Camion : public Vehiculo {
private:
    int ejes;
public:
    Camion(std::string placa,int ejes);

    //getters
    int getEjes();
    //setters
    void setEjes(int ejes);
    // metodos generales:
    void agregarEje();
    double calcularPeaje() const override;

};
#endif