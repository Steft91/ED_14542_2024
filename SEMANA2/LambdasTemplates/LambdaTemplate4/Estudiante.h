#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>

class Estudiante {
public:
    Estudiante(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}
    std::string getNombre() const { return nombre; }
    int getEdad() const { return edad; }
private:
    std::string nombre;
    int edad;
};

#endif 

