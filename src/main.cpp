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
    
    std::cout<<"Caso3: Moto XYZ45A de 125 cc, propietario vecino. Cuanto paga?"<<std::endl;
    try{
        Propietario *propietarioTres =new Propietario("Juan","1016019137",true);
        personas.push_back(propietarioTres);

        Moto* motoCasoTres= new Moto("XYZ45A",125,propietarioTres);
        vehiculos.push_back(motoCasoTres);

        std::cout  <<"Respuesta:" << std::endl;
        std::cout  << *vehiculos[1] << " | Paga $" << vehiculos[1]->calcularPeaje() << std::endl;
    
        
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 3: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;


    //caso 4 

    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso4: Moto MOT650 de 650 cc, sin propietario. Cuanto paga? Es de alto cilindraje?"<<std::endl;
    try{
        Moto *motoCasoCuatro=new Moto("MOT650",650);
        vehiculos.push_back(motoCasoCuatro);
        std::cout  <<"Respuesta:" << std::endl;
    
        std::cout  << *vehiculos.back() << " | Paga $" << vehiculos.back()->calcularPeaje() << std::endl;
        std::cout << "Alto cilindraje: " << (((Moto*)vehiculos[2])->esAltoCilindraje() ? "Si" : "No")<< std::endl;
    }

    catch (const std::exception& e) {
        std::cout << "Error en Caso 4: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;
    
    // caso 5 
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso5: Bus BUS777 de 38 puestos, propietario vecino. Cuanto paga?"<<std::endl;
    try{
        Propietario *propietarioCinco =new Propietario("Fernando","1016019137",true);
        personas.push_back(propietarioCinco);

        Bus*busCinco=new Bus("BUS777",38,propietarioCinco);
        vehiculos.push_back(busCinco);

        std::cout  << *vehiculos.back() << " | Paga $" << vehiculos.back()->calcularPeaje() << std::endl;

    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 5: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 6
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso6: Camion CAM301 de 3 ejes, sin propieta- rio. Cuanto paga?"<<std::endl;
    try{
        Camion *camionSeis=new Camion("CAM301",3);
        vehiculos.push_back(camionSeis);
        std::cout  << *vehiculos.back() << " | Paga $" << vehiculos.back()->calcularPeaje() << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 6: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 7
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso7: El mismo camion despues de agregarle un eje. Cuanto paga?"<<std::endl;
    try{
        //volvemos a convertir en camion 
        ((Camion*)vehiculos.back())->agregarEje();
        std::cout<<*vehiculos.back()<< " | Paga $" << vehiculos.back()->calcularPeaje() << std::endl; 
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 7: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 8
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso:8 Crear un carro con la placa vacía. Que excepcion se lanza?"<<std::endl;
    try{
        Carro *carroOcho=new Carro("",2);
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 8: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 9
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"Caso:9 Crear un camion de 1 eje. Que excepcion se lanza?"<<std::endl;
    try{
        Camion * caomionNueve =new Camion("CAM524",1);
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 9: " << e.what() << std::endl;
    }
    std::cout << "\nPresione Enter para continuar...";
    std::getline(std::cin, pausa);  
    std::cout<<"____________________________________________________________________________________"<<std::endl;

    // caso 10
    std::cout<<"\n____________________________________________________________________________________\n";
    std::cout<<"caso10: Pasan por la caseta los vehiculos de los casos 2, 3, 5 y 7. Cual es el recaudo total  y cuantos hay de cada categoria?" <<std::endl;
    try{
        //primero voy a revisar en que posicion estan los vehiculosd esa catergoria
        for (size_t i = 0; i < vehiculos.size(); i++) {
            std::cout << "Posicion [" << i << "]: " << *vehiculos[i]<<std::endl;
        }
        //creo el operador que controla la caseta 
        Operador*operador=new Operador("Daniel","1015219165","1");
        personas.push_back(operador);
        Caseta* casetaUno =new Caseta(operador);
        casetaUno->registrarPaso(vehiculos[0]);
        casetaUno->registrarPaso(vehiculos[1]);
        casetaUno->registrarPaso(vehiculos[3]);
        casetaUno->registrarPaso(vehiculos[4]);

        std::cout  << "Carros:" << casetaUno->getCantidadCarros()<<"\n";
        std::cout  << "Motos:" << casetaUno->getCantidadMotos()<<"\n";
        std::cout  << "Buses:" << casetaUno->getCantidadBuses()<<"\n";
        std::cout  << "Camiones :" << casetaUno->getCantidadCamiones()<<"\n";
        std::cout  << "Recaudo total:" << casetaUno->getRecuadoTotal()<<std::endl;
        
    }
    catch (const std::exception& e) {
        std::cout << "Error en Caso 10: " << e.what() << std::endl;
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