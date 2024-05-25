#include "Carro.h"
#include <iostream>

Carro::Carro(std::string mar, std::string mo, int a, int v) : Vehiculo(mar, mo, a, v) {}

void Carro::tocarBocina() const {
    std::cout << "Pii, Pii!" << std::endl;
}
