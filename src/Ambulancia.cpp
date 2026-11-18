#include "Ambulancia.h"
#include "Vehiculo.h"
#include "Emergencia.h"

Ambulancia::Ambulancia(std::string placa,std::string unidad, std::string descripcion, Propietario* propietario=nullptr): Vehiculo(placa,propietario), Emergencia(unidad, descripcion){}

// destructor
Ambulancia::~Ambulancia() {
    std::cout << "Destruyendo Ambulancia  " << this->placa << std::endl;}


double Ambulancia ::calcularPeaje() const {
    double tarifaBase=0;
    if (enEmergencia==false){
        tarifaBase=11400;
        if (propietario != nullptr && propietario->getVecino()) {
        tarifaBase=tarifaBase *(100 - 35) / 100;}
    }
    else{
        tarifaBase=0;
    }
    return tarifaBase;
    }

std::string Ambulancia::getCategoria() {
    return "Ambulancia ";
}

std::string Ambulancia::describir() {
    return "Categoria: " + getCategoria() + ", Placa: " + this->placa + ", Emergencia: " + (this->enEmergencia ? "si" : "no");
}
