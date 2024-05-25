#ifndef INSTRUMENTO_H
#define INSTRUMENTO_H
#include <string>

class Instrumento{
protected: 
    std::string nombre;
    std::string tipo;
    std::string marca;
    float precio;

public: 
    Instrumento(std::string n, std::string t, std::string m, float p);

    virtual ~Instrumento(){}

    virtual void tocar() const = 0;
    virtual void afinar() const = 0;

    std::string getNombre() const {return nombre; }
    std::string getTipo() const {return tipo; }
    std::string getMarca() const {return marca; }

};

#endif