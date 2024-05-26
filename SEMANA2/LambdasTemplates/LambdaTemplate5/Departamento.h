#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <vector>
#include "Empleado.h"

class Departamento {
public:
    Departamento(const std::string& nombre, const std::vector<Empleado>& empleados) : nombre(nombre), empleados(empleados) {}
    double calcularSalarioPromedio() const;
    std::string getNombre() const {return nombre; };

private:
    std::string nombre;
    std::vector<Empleado> empleados;
 
};


#endif
