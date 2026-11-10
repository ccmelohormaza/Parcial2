#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H
#include <exception>
#include <string>
// placa invalida
class PlacaInvalidaException: public std::exception{
    private:
        std::string mensaje;
    public:
        // constructor
        PlacaInvalidaException(std::string mensaje );
        

} ;     
// datos invalidos
// descuadre  de caja 
#endif 