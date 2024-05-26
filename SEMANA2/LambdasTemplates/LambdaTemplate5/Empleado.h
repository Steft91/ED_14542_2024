#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {
public:
    Empleado(const std::string& nombre, double salario) : nombre(nombre), salario(salario) {}
    std::string getNombre() const { return nombre; }
    double getSalario() const { return salario; }
private:
    std::string nombre;
    double salario;
};

#endif
