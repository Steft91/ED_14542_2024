#include "Guitarra.h"
#include <string>
#include <iostream>

void Guitarra::tocar() const {
    std::cout << "Tocando la guitarra " << nombre << " de la marca " << marca << std::endl;
}

void Guitarra::afinar() const {
    std::cout << "Afinando la guitarra" << nombre << std::endl;
}