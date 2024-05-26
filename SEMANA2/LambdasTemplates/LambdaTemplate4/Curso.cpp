#include "Curso.h"

bool Curso::buscarEstudiante(const std::string& nombre, std::function<bool(const std::string&, const std::string&)> comp) const {
    for (const auto& estudiante : estudiantes) {
        if (comp(estudiante.getNombre(), nombre)) {
            return true;
        }
    }
    return false;
}

