#ifndef GUITARRA_H
#define GUITARRA_H
#include "Instrumento.h"

class Guitarra : public Instrumento{
public: 
    Guitarra(const std::string& n, const std::string& m, float p) : Instrumento(n, "Cuerda", m, p){}

    void tocar() const override;
    void afinar() const override;

};

#endif