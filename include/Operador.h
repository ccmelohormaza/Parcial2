#ifndef OPERADOR_H
#define OPERADOR_H
#include <string>
#include "Persona.h"
class Operador : public Persona  {
private:
std::string codigo; 
public:
    Operador (std::string nombre , std::string documento, std::string codigo);
    //getters
    std::string getCodigo();
    //setters
    void setCodigo(std::string codigo);
    // sobreEscritura de metodos virtuales
    std::string describir() const override;
};
#endif