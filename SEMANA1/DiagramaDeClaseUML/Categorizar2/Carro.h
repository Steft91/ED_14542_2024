#ifndef CARRO_H
#define CARRO_H

#include "Vehiculo.h"

class Carro : public Vehiculo{
public:
    Carro(std::string mar, std::string mo, int a, int v);
    void tocarBocina() const;

};

#endif 