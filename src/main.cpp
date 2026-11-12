#include <iostream>
#include <vector>
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



void imprimirMenu(){
    std::cout<<"___SELECCIONA EL CASO DE EVALUACION ___"<< std::endl;
    std::cout<<"1: Carro ABC123, 3 pasajeros, propietario no vecino. Cuanto paga?"<< std::endl;
    std::cout<<"2: El mismo carro, ahora con un propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"3: Moto XYZ45A de 125 cc, propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"4: Moto MOT650 de 650 cc, sin propietario. Cuanto paga? Es de alto cilindraje?"<< std::endl;
    std::cout<<"5: Bus BUS777 de 38 puestos, propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"6: Camion CAM301 de 3 ejes, sin propietario. Cuanto paga? "<< std::endl;
    std::cout<<"7: El mismo camion despues de agregarle un eje. Cuanto paga? "<< std::endl;
    std::cout<<"8: Crear un carro con la placa vacia. Que excepcion se lanza? "<< std::endl;
    std::cout<<"9: Crear un camion de 1 eje. Que excepcion se lanza?"<< std::endl;
    std::cout<<"10:Pasan por la caseta los vehiculos de los casos 2, 3, 5 y 7. Cual es el recaudo total y cuantos hay de cada categoria? "<< std::endl;
    std::cout<<"11:El operador declara exactamente el recaudo del caso 10. Que ocurre?  "<< std::endl;
    std::cout<<"12: El operador declara 1000 menos que el recaudo del caso 10. Que ocurre?"<< std::endl;
    std::cout<<"13 : Al terminar el programa se libera la caseta y luego los vehiculos del caso 10 a traves de Vehiculo *. En que orden aparecen los mensajes de destrucción?"<< std::endl;
    std::cout<<"0: salir "<<std::endl;
    std::cout<<" opcion :";
    
}


int main() {

    // CREAMOS LOS VECTORES QUE MENCIONA EL C3
    std::vector <Vehiculo*> vehiculos;
    std::vector <Persona*> personas ;

    int opcion=-1;
    do {
        imprimirMenu();
        std::cin>>opcion;
        std::cout<<std::endl;
        switch (opcion)
        {
            case 1:{
                try {
                    // creamos el propietario que no es vecino 
                    Propietario*noVecino=new Propietario ("Carlitos","10100199258",false);
                    personas.push_back(noVecino);
                    
                    // creamos el carro uno 
                    Vehiculo* carroUno =new Carro ("ABC123",3,noVecino);
                    vehiculos.push_back(carroUno);

                    // calculamos cuanto psga y imprimimos en la misma funcion
                    std::cout<< "Caso 1: "<<*carroUno<< " Paga $"<< carroUno->calcularPeaje()<< std::endl;

                }
                catch (const std::exception& e){
                    std::cout << "Caso 1: Error -> " << e.what() << std::endl;
                }
                
                
                break;}
            case 2:{break;}
            case 3:{break;}
            case 4:{break;}
            case 5:{break;}
            case 6:{break;}
            case 7:{break;}
            case 8:{break;}
            case 9:{break;}
            case 10:{break;}
            case 11:{break;}
            case 12:{break;}
            case 13:{break;}
            case 0:{break;}
            default:{std::cout<<"la opcion seleccionada no existe "<<std::endl;
                break;
            }
        }
    } while (opcion!=0);

    
    return 0;
}