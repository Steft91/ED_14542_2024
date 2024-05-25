#ifndef BATERIA_H
#define BATERIA_H
#include "Instrumento.h"

class Bateria : public Instrumento{
public: 
    Bateria(const std::string& n, const std::string& m, float p) : Instrumento(n, "Percusion", m, p){}

    void tocar() const override;
    void afinar() const override;

};


#endif 