#include "Curso.h"
#include <iostream>
#include <vector>
#include <functional>

int main() {
    std::vector<Estudiante> estudiantes = {
        Estudiante("Estaban Gómez", 20),
        Estudiante("Maria Palacios", 19),
        Estudiante("Ariel Díaz", 21)
    };

    Curso curso("Matemáticas", estudiantes);

    // Lambda para comparar si dos nombres de estudiantes son iguales
    auto comparacion = [](const std::string& a, const std::string& b) { return a == b; };

    std::string nombreBuscar = "Matias Diaz";

    bool encontrado = curso.buscarEstudiante(nombreBuscar, comparacion);

    if (encontrado) {
        std::cout << "El estudiante " << nombreBuscar << " fue encontrado en el curso" << std::endl;
    } else {
        std::cout << "El estudiante " << nombreBuscar << " no fue encontrado en el curso" << std::endl;
    }

    return 0;
}

