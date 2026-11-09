#include <iostream>
#include "Vehiculo.h"
#include "Carro.h" 
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"

int main(){
    Vehiculo v1("Asd3321");
    std::cout  << v1.getPlaca() << std::endl;

    Carro miCarro("ABC-123");
    Moto miMoto("XYZ-789");
    Bus miBus("BUS-456");
    Camion miCamion("CAM-999");


    std::cout << "Carro  - Placa: " << miCarro.getPlaca() << std::endl;
    std::cout << "Moto   - Placa: " << miMoto.getPlaca() << std::endl;
    std::cout << "Bus    - Placa: " << miBus.getPlaca() << std::endl;
    std::cout << "Camion - Placa: " << miCamion.getPlaca() << std::endl;
    
    return 0;
}