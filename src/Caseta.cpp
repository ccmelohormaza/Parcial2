#include "Caseta.h"

// constructor 

Caseta::Caseta(Operador* operador){
    this->operador=operador;
    this->cantidadCarros=0;
    this->cantidadMotos=0;
    this->cantidadBuses=0;
    this->cantidadCamiones=0;
    this->totalPasos=0;
    this->recuadoTotal=0.0;
}

// Getters 
Operador* Caseta::getOperador(){
    return this->operador;
}

std::vector <RegistroPaso> Caseta::getRegistros(){
    return this->registros;
}

int Caseta::getCantidadCarros(){
    return this->cantidadCarros;
}

int Caseta::getCantidadMotos(){
    return this->cantidadMotos;
}

int Caseta::getCantidadBuses(){
    return this->cantidadBuses;
}

int Caseta::getCantidadCamiones(){
    return this->cantidadCamiones;
}

int Caseta::getTotalPasos() {
    return this->totalPasos;
}

double Caseta::getRecuadoTotal() {
    return this->recuadoTotal;
}

// setters

void Caseta::setOperador(Operador* operador) {
    this->operador = operador;
}

void Caseta::setRegistros(std::vector<RegistroPaso> registros) {
    this->registros = registros;
}

void Caseta::setCantidadCarros(int cantidad) {
    this->cantidadCarros = cantidad;
}

void Caseta::setCantidadMotos(int cantidad) {
    this->cantidadMotos = cantidad;
}

void Caseta::setCantidadBuses(int cantidad) {
    this->cantidadBuses = cantidad;
}

void Caseta::setCantidadCamiones(int cantidad) {
    this->cantidadCamiones = cantidad;
}

void Caseta::setTotalPasos(int cantidadPasos) {
    this->totalPasos = cantidadPasos;
}

void Caseta::setRecaudoTotal(double RecaudoTotal) {
    this->recuadoTotal = RecaudoTotal;
}

// metodos

void Caseta::registrarPaso(Vehiculo* vehiculo){
    if (vehiculo != nullptr){
        //capturamos los valores
        double valor=vehiculo->calcularPeaje();
        std::string categoria=vehiculo->getCategoria();
        std::string placa=vehiculo->getPlaca();

        RegistroPaso nuevoRegistro(placa,categoria,valor);
        this->registros.push_back(nuevoRegistro);

        //actualizamos contadores
        this->totalPasos++;
        this->recuadoTotal +=valor;

        if (categoria=="Carro"){
            this->cantidadCarros++;
        }
        else if (categoria=="Moto"){
            this->cantidadMotos++;
        }
        else if (categoria=="Bus"){
            this->cantidadBuses++;
        }
        else if (categoria=="Camion"){
            this->cantidadCamiones++;
        }
    }
}
