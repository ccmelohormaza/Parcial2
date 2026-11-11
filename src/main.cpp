#include <iostream>
void imprimirMenu(){
    std::cout<<"___SELECCIONA EL CASO DE EVALUACION ___"<< std::endl;
    std::cout<<"1: Carro ABC123, 3 pasajeros, propietario no vecino. Cuanto paga?"<< std::endl;
    std::cout<<"2: El mismo carro, ahora con un propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"3: Moto XYZ45A de 125 cc, propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"4: Moto MOT650 de 650 cc, sin propietario. Cuanto paga? ¿Es de alto cilindraje?"<< std::endl;
    std::cout<<"5: Bus BUS777 de 38 puestos, propietario vecino. Cuanto paga? "<< std::endl;
    std::cout<<"6: Camion CAM301 de 3 ejes, sin propietario. Cuanto paga? "<< std::endl;
    std::cout<<"7: El mismo camion despues de agregarle un eje. Cuanto paga? "<< std::endl;
    std::cout<<"8: Crear un carro con la placa vacia. Que excepcion se lanza? "<< std::endl;
    std::cout<<"9: Crear un camion de 1 eje. Qué excepcion se lanza?"<< std::endl;
    std::cout<<"10:Pasan por la caseta los vehiculos de los casos 2, 3, 5 y 7. Cual es el recaudo total y cuantos hay de cada categoria? "<< std::endl;
    std::cout<<"11:El operador declara exactamente el recaudo del caso 10. Que ocurre?  "<< std::endl;
    std::cout<<"12: El operador declara 1000 menos que el recaudo del caso 10. Que ocurre?"<< std::endl;
    std::cout<<"13 : Al terminar el programa se libera la caseta y luego los vehiculos del caso 10 a traves de Vehiculo *. En que orden aparecen los mensajes de destrucción?"<< std::endl;
    std::cout<<"0: salir "<<std::endl;
    std::cout<<" opcion :";
    
}

int main() {
    imprimirMenu();
    return 0;
}