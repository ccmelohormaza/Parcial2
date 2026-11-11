#ifndef REGISTROPASO_H
#define REGISTROPASO_H
#include <string>
class RegistroPaso{
    private:
        std::string placa;
        std::string categoria;
        double valorCobrado;
    public:
        RegistroPaso(std::string placa , std::string categoria,  double valorCobrado);

        //Getters
        std::string getPlaca();
        std::string getCategoria();
        double getValorCobrado();

        //Setters
        void setPlaca(std::string placa);
        void setCategoria(std::string categoria);
        void setValorCobrado(double valorCobrado);
};
#endif