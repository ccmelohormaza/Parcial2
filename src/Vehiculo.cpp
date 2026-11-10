#include  "Vehiculo.h" 

// Constructor 
Vehiculo::Vehiculo(std::string placa){
    this-> placa=placa;
}

// getters 
std::string Vehiculo::getPlaca(){
    return placa;}
    
// setters
void Vehiculo::setPlaca(std::string placa){ 
    this->placa=placa;
}