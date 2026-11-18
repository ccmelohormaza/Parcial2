#include <string>
class Emergencia{
    protected:
    std::string unidad;
    std::string descripcion;
    bool enEmergencia; 
    public:
    // construcctor
    Emergencia (std::string unidad,std::string descripcion,bool enEmergencia ){
        this->unidad=unidad;
        this->descripcion=descripcion;
        this->enEmergencia=enEmergencia;
    }
    // setters 
    void setUnidad(std::string unidad);
    void setDescripcion(std::string descripcion);
    void setEmegencia (bool enEmergencia );
    //getters
    std::string getUnidad();
    std::string getDescripcion();
    bool getEmergencia;

};