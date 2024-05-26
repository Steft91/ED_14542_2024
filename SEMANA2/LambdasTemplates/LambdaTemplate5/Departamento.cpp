#include "Departamento.h"

double Departamento::calcularSalarioPromedio() const{
    double sumaSalarios = 0;
    for(const auto& empleado : empleados){
        sumaSalarios += empleado.getSalario();
    }
    return sumaSalarios / empleados.size();
}
