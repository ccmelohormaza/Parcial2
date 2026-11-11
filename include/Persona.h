#ifndef PERSONA_H
#define PERSONA_H
#include <string>
class Persona {
protected:
    std::string nombre;
    std::string documento ;
public:
    Persona(std::string nombre , std::string documento);
    virtual ~Persona() = default;
    
    //getters
    std::string getNombre();
    std::string getDocumento();
    //setters
    void setNombre(std::string nombre); 
    void setDocumento(std::string documento);
    // metodos virtuales
    virtual std::string describir() const = 0;
};
#endif 