#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>

class Vehiculo{
protected:
    std::string marca;
    std::string modelo;
    int anio;
    int velocidad;

public:
    Vehiculo(std::string marca, std::string modelo, int a, int v);

    void acelerar(int incremento);
    void desacelerar(int decremento);
    void mostrarInformacion() const;

};


#endif 