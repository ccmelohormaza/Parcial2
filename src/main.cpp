#include <iostream>
#include "Vehiculo.h"
#include "Carro.h" 
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"
#include "Excepciones.h"

int main(){
   try {
        Carro miCarro("ABC-123", 2);
        std::cout << " Placa: " << miCarro.getPlaca() << std::endl;
        std::cout << " Pasajeros iniciales: " << miCarro.getPasajeros() << std::endl;

        //Subimos un pasajero 
        miCarro.subirPasajero();
        std::cout << "Pasajeros tras subir uno:" << miCarro.getPasajeros() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        Carro miCarro("", 2);
        std::cout << " Placa: " << miCarro.getPlaca() << std::endl;
        std::cout << " Pasajeros iniciales: " << miCarro.getPasajeros() << std::endl;

        //Subimos un pasajero 
        miCarro.subirPasajero();
        std::cout << "Pasajeros tras subir uno:" << miCarro.getPasajeros() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

        try {
        Carro miCarro("2313", 0);
        std::cout << " Placa: " << miCarro.getPlaca() << std::endl;
        std::cout << " Pasajeros iniciales: " << miCarro.getPasajeros() << std::endl;

        //Subimos un pasajero 
        miCarro.subirPasajero();
        std::cout << "Pasajeros tras subir uno:" << miCarro.getPasajeros() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    // prueba de escritorio para moto 
    try {
        Moto m1("XYZ-789", 200); 
        std::cout << "Placa:" << m1.getPlaca() << std::endl;
        std::cout << "Cilindraje: " << m1.getCilindraje()<< std::endl;
        std::cout << "¿Es alto cilindraje?: " << m1.esAltoCilindraje()<< std::endl;
    } catch ( std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}