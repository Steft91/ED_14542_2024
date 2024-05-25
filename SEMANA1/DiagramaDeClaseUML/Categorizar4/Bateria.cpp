#include "Bateria.h"
#include <string>
#include <iostream>

void Bateria::tocar() const {
    std::cout << "Tocando la bateria " << nombre << " de la marca " << marca << std::endl;
}

void Bateria::afinar() const {
    std::cout << "Afinando la bateria" << nombre << std::endl;
}