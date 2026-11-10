#ifndef EXCEPCIONES_H
#define EXCEPCIONES_H
#include <exception>
#include <string>
// placa invalida
class PlacaInvalidaException:       
    public std::exception{
    private:
        std::string mensaje;
    public:
        //constructor
        PlacaInvalidaException(std::string mensaje );

        //esta linea la copie de internet porque no entiendo esto no mire en teoria. 
        const char* what() const noexcept ; 
} ;  

// datos invalidos
class DatosInvalidosException:
    public std::exception{
        private:
            std::string mensaje; 
        public:
            DatosInvalidosException(std::string mensaje);
            const char* what() const noexcept;  
    };
// descuadre  de caja 
#endif 