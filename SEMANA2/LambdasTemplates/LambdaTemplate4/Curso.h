#ifndef CURSO_H
#define CURSO_H

#include <vector>
#include <functional>
#include "Estudiante.h"

class Curso {
public:
    Curso(const std::string& nombre, const std::vector<Estudiante>& estudiantes) : nombre(nombre), estudiantes(estudiantes) {}
    bool buscarEstudiante(const std::string& nombre, std::function<bool(const std::string&, const std::string&)> comp) const;
private:
    std::string nombre;
    std::vector<Estudiante> estudiantes;
};

#endif 
