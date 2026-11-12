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
#include <string>



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

    //variables auxiliares
    std::string pausa; // solo para que pare despues de cada punto 
    Vehiculo* carroUno = nullptr;
    Propietario* noVecino=nullptr;
    Propietario* vecino=nullptr;

    int opcion=-1;
    do {
        imprimirMenu();
        std::cin>>opcion;
        std::cout<<std::endl;
        try{
            switch (opcion)
            {
                case 1:{
                    std::cout<<"\n---------------ejecutando caso 1----------------"<<std::endl;
                    if (noVecino==nullptr){
                        noVecino=new Propietario("Carlitos","1010019128",false);
                        personas.push_back(noVecino) ;
                    }

                    if (carroUno ==nullptr){
                        carroUno=new Carro ("ABC123",3,noVecino);
                        vehiculos.push_back(carroUno);
                    }
                    else{
                        carroUno->setPropietario(noVecino);
                    }
                            
                    // calculamos cuanto psga y imprimimos en la misma funcion
                    std::cout<<"\nCaso 1: "<<*carroUno<< " Paga $"<< carroUno->calcularPeaje()<< std::endl;
                    std::cout<<"\n---------------Fin caso 1 ------------------------"<<std::endl;
                    break;
                }
                case 2:{
                    std::cout<<"\n---------------ejecutando caso 2----------------"<<std::endl;
                    if (vecino==nullptr){
                        vecino=new Propietario("Maria","1010019125",true);
                        personas.push_back(vecino);
                    }

                    if(carroUno==nullptr){
                        carroUno=new Carro("ABC123",3,vecino);
                        vehiculos.push_back(carroUno);
                    }
                    else {
                        carroUno->setPropietario(vecino);
                    }
                    std::cout<<"\nCaso 2: "<<*carroUno<<" Paga $"<<carroUno->calcularPeaje()<<std::endl;




                    std::cout<<"\n---------------Fin caso 2 ------------------------"<<std::endl;
                    break;
                
                }
                case 3:{
                    std::cout<<"\n---------------ejecutando caso 3----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 3 ------------------------"<<std::endl;
                    break;
                }
                case 4:{
                    std::cout<<"\n---------------ejecutando caso 4----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 4 ------------------------"<<std::endl;
                    break;

                }
                case 5:{
                    std::cout<<"\n---------------ejecutando caso 5----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 5 ------------------------"<<std::endl;
                    break;
                }
                case 6:{                  
                    std::cout<<"\n---------------ejecutando caso 6----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 6 ------------------------"<<std::endl;
                    break;
                }
                case 7:{                
                    std::cout<<"\n---------------ejecutando caso 7----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 7 ------------------------"<<std::endl;
                    break;}
                case 8:{                
                    std::cout<<"\n---------------ejecutando caso 8----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 8 ------------------------"<<std::endl;
                    break;}
                case 9:{                
                    std::cout<<"\n---------------ejecutando caso 9----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 9 ------------------------"<<std::endl;
                    break;}
                case 10:{               
                    std::cout<<"\n---------------ejecutando caso 10----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 10 ------------------------"<<std::endl;
                    break;}
                case 11:{               
                    std::cout<<"\n---------------ejecutando caso 11----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 11 ------------------------"<<std::endl;
                    break;}
                case 12:{               
                    std::cout<<"\n---------------ejecutando caso 12----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 12 ------------------------"<<std::endl;
                    break;}
                case 13:{               
                    std::cout<<"\n---------------ejecutando caso 13----------------"<<std::endl;
                    std::cout<<"\n---------------Fin caso 13 ------------------------"<<std::endl;
                    break;}

                case 0:{break;}
                default:{
                    std::cout<<"la opcion seleccionada no existe "<<std::endl;
                    break;
                }
            }
        }
        catch (const std::exception& e){
            std::cout <<"Caso "<< opcion<< ":Error->"<< e.what()<<std::endl;
        }

        if (opcion!=0){
            std::cout<<"\n presiona enter para continuar";
            std::cin.ignore(1000,'\n');
            std::getline(std::cin,pausa);
        }
        

    } 
    while (opcion!=0);
    
    // libero la memoria 

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