#include "Departamento.h"
#include <vector>
#include <iostream>
#include <iomanip>

int main(){
    std::vector<Empleado> empleados = {Empleado("Gaby", 3200), Empleado("Maykel", 3300), Empleado("Camila", 2800)};
    Departamento departamento("Ventas", empleados);

    double salarioPromedio = departamento.calcularSalarioPromedio();

    std::cout << "El salario promedio en el departamento de " << departamento.getNombre() << " es $" << std::fixed << std::setprecision(1) << salarioPromedio << std::endl;

    return 0;
}
