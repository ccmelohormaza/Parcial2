#ifndef PROPIETARIO_H
#define PROPIETARIO_H
#include "Persona.h"
class Propietario : public Persona  {
private:
    bool Vecino;
public:
    Propietario (std::string nombre , std::string documento ,bool Vecino);
    //getters
    bool getVecino();
    //setters
    void setVecino(bool Vecino);
    // sobreEscritura de metodos virtuales
    std::string describir() const override;
};
#endif