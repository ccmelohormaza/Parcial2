#ifndef AMBULANCIA_H
#define AMBULANCIA_H
#include <string>
#include "Vehiculo.h"
#include "Emergencia.h"
class Ambulancia: public Vehiculo ,public  Emergencia{
    public:
    Ambulancia(std::string placa, std::string unidad, std::string descripcion,Propietario* propietario=nullptr);
    ~Ambulancia();

    double calcularPeaje() const override;
    std::string getCategoria() override;
    std::string describir() override;

};

#endif