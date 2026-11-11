#ifndef CASETA_H
#define CASETA_H
#include "Operador.h"
#include <vector>
#include "RegistroPaso.h"
#include "Vehiculo.h"

class Caseta {
private:
    Operador* operador;
    std::vector <RegistroPaso*>registros;
    int cantidadCarros;
    int cantidadMotos;
    int cantidadBuses;
    int cantidadCamiones;
    int totalPasos;
    double recuadoTotal;
public:
    //constructor 
    Caseta(Operador* operador);
    ~Caseta();
    //getters
    Operador* getOperador();
    std::vector<RegistroPaso*>getRegistros();
    int getCantidadCarros();
    int getCantidadMotos();
    int getCantidadBuses();
    int getCantidadCamiones();
    int getTotalPasos();
    double getRecuadoTotal();
    
    // setter
    void setOperador(Operador* operador);
    void setRegistros(std::vector<RegistroPaso*> registros);
    void setCantidadCarros(int cantidad);
    void setCantidadMotos(int cantidad);
    void setCantidadBuses(int cantidad);
    void setCantidadCamiones(int cantidad);
    void setTotalPasos(int cantidadPasos);
    void setRecaudoTotal(double RecaudoTotal);

    // metodos generales
    void registrarPaso(Vehiculo*vehiculo);
};

#endif