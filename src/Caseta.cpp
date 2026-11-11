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