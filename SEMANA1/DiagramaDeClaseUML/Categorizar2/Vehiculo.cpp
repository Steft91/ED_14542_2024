#include "Vehiculo.h"
#include <iostream>

Vehiculo::Vehiculo(std::string mar, std::string mo, int a, int v) : marca(mar), modelo(mo), anio(a), velocidad(v) {}

void Vehiculo::acelerar(int incremento){
    velocidad += incremento;
    std::cout << "Acelerando a " << velocidad << " km/h" << std::endl;
}

void Vehiculo::desacelerar(int decremento){
    velocidad -= decremento;
    std::cout << "Frenando a " << velocidad << " km/h" << std::endl;
}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Marca: " << marca << ", Modelo: " << modelo << ", Anio:" << anio << ", Velocidad: " << velocidad << " km/h" << std::endl;
}