#ifndef EMERGENCIA_H
#define EMERGENCIA_H
#include <string>
class Emergencia{
    protected:
    std::string unidad;
    std::string descripcion;
    bool enEmergencia; 
    public:
    // construcctor
    Emergencia (std::string unidad,std::string descripcion,bool enEmergencia );
    // setters 
    void setUnidad(std::string unidad);
    void setDescripcion(std::string descripcion);
    void setEmegencia (bool enEmergencia );
    //getters
    std::string getUnidad();
    std::string getDescripcion();
    bool getEmergencia();

};

#endif