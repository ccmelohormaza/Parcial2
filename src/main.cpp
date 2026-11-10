#include <iostream>
#include "Vehiculo.h"
#include "Carro.h" 
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"
#include "Excepciones.h"

int main(){
    Vehiculo v1("Asd3321");
    std::cout  << v1.getPlaca() << std::endl;

    try {
        Carro carroValido("");
        std::cout << "[OK] Carro creado con exito. Placa: " << carroValido.getPlaca() << "\n\n";
    } 
    catch ( PlacaInvalidaException & e) {
        std::cerr  << e.what() << "\n\n";
    }



    //cosas que acordarme 
    // cerr flujo de salida estandar de errores






    
    return 0;
}