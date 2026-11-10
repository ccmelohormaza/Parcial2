#include <iostream>
#include "Vehiculo.h"
#include "Carro.h" 
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"
#include "Excepciones.h"

int main() {
    try {
        Carro miCarro("ABC-123", 2);
        std::cout << "Placa: " << miCarro.getPlaca() << std::endl;
        std::cout << "Pasajeros iniciales: " << miCarro.getPasajeros() << std::endl;

        miCarro.subirPasajero();
        std::cout << "Pasajeros tras subir uno: " << miCarro.getPasajeros() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Carro Placa Invalida ---" << std::endl;
    try {
        Carro miCarro("", 2);
        std::cout << "Placa: " << miCarro.getPlaca() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "\n--- Carro Pasajeros Invalidos ---" << std::endl;
    try {
        Carro miCarro("2313", 0);
        std::cout << "Placa: " << miCarro.getPlaca() << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

   
    // moto 
    std::cout << "\n--- Prueba Moto ---" << std::endl;
    try {
        Moto m1("XYZ-789", 200); 
        std::cout << "Placa: " << m1.getPlaca() << std::endl;
        std::cout << "Cilindraje: " << m1.getCilindraje() << std::endl;
        std::cout << "¿Es alto cilindraje?: " << (m1.esAltoCilindraje() ? "Si" : "No") << std::endl;
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

   
    // PRUEBA BUS
    std::cout << "\n--- Prueba Bus ---" << std::endl;
    try {
        Bus busOk("BUS-101", 30);
        std::cout << "[OK] Bus creado con " << busOk.getPuestos() << " puestos.\n";

        Bus busFail("BUS-999", 0); // Lanzará excepción
    } 
    catch (const DatosInvalidosException& e) {
        std::cerr << "[CAPTURADO] " << e.what() << "\n";
    }

    std::cout << "\n--- Prueba Camion ---" << std::endl;
    try {
        Camion camion1("TRK-555", 3);
        std::cout << "[OK] Camion creado con " << camion1.getEjes() << " ejes.\n";

        camion1.agregarEje();
        std::cout << "[OK] Eje agregado. Nuevos ejes: " << camion1.getEjes() << "\n";
    } 
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}