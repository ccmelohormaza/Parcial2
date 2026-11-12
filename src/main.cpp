#include <iostream>
#include "Vehiculo.h"
#include "Carro.h"
#include "Moto.h"
#include "Bus.h"
#include "Camion.h"
#include "Persona.h"
#include "Operador.h"
#include "Propietario.h"
#include "RegistroPaso.h"
#include "Caseta.h"
#include "Excepciones.h"
#include <string>



int main() {
    // creamos variablea auxiliares para interfaz
    std::string pausa;

    // CREAMOS LOS VECTORES QUE MENCIONA EL C3
    std::vector <Vehiculo*> vehiculos;
    std::vector <Persona*> personas ;
    
    // Caso 1 
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso 1:  Carro ABC123, 3 pasajeros, propietario no vecino. Cuanto paga?"<<std::endl;

    try{
        Propietario * propietarioUno=new Propietario("Juan","1010019145",false);
        personas.push_back(propietarioUno);

        Carro* carroUno=new Carro("ABC123",3,propietarioUno);
        vehiculos.push_back(carroUno);
        
        std::cout  <<"Respuesta:" << std::endl;
        std::cout  << *vehiculos[0] << " | Paga $" << vehiculos[0]->calcularPeaje() << std::endl;}
    catch (const std::exception& e) {
        std::cout << "Error en Caso 1: " << e.what() << std::endl;
    }
    
    std::cout << "\nPresione Enter para continuar...";

    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    //caso 2 
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso2: El mismo carro, ahora con un propietario vecino. Cuanto paga?"<<std::endl;
    try{
        Propietario *propietarioDos=new Propietario ("Maria","2210019125",true);
        personas.push_back(propietarioDos);
        vehiculos[0]->setPropietario(propietarioDos);

        std::cout  <<"Respuesta:" << std::endl;
        std::cout  << *vehiculos[0] << " | Paga $" << vehiculos[0]->calcularPeaje() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 2: " << e.what() << std::endl;
    }
   
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 3 
    std::cout<<"\n____________________________________________________________________________________\n";
    
    std::cout<<"Moto XYZ45A de 125 cc, propietario vecino. Cuanto paga?"<<std::endl;
    try{
        Propietario *propietarioTres =new Propietario("Juan","1016019137",true);
        personas.push_back(propietarioTres);

        Moto* motoUno= new Moto("XYZ45A",125,propietarioTres);
        vehiculos.push_back(motoUno);

        std::cout  <<"Respuesta:" << std::endl;
        std::cout  << *vehiculos[1] << " | Paga $" << vehiculos[1]->calcularPeaje() << std::endl;
        std::cout  << *vehiculos[1] << " | Paga $" << motoUno->calcularPeaje() << std::endl;
        
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 3: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;


    
    // limpiamos todo 
    for (Vehiculo* v : vehiculos) {
        delete v;
    }
    vehiculos.clear();

    for (Persona* p : personas) {
        delete p;
    }
    personas.clear();

    return 0;
}