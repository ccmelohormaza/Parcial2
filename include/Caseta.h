#ifndef CASETA_H
#define CASETA_H
#include "Operador.h"

class Caseta {
private:
    Operador* operador;
    // registro de placa, categoria, valor cobrado 
    int cantidadCarros;
    int cantidadMotos;
    int cantidadBuses;
    int cantidadCamiones;
    int totalPasos;
    double recuadoTotal;
public:
    //getters 
    Caseta(Operador* operador);
    Operador* getOperador();
    int getCantidadCarros();
    int getCantidadMotos();
    int getCantidadBuses();
    int getCantidadCamiones();
    int getTotalPasos();
    double getRecuadoTotal();
    
    // setter
    void setOperador(Operador* operador);
    void setCantidadCarros(int cantidad);
    void setCantidadMotos(int cantidad);
    void setCantidadBuses(int cantidad);
    void setCantidadCamiones(int cantidad);
    void setTotalPasos(int cantidadPasos);
    void setRecaudoTotal(double RecaudoTotal);
};

#endif