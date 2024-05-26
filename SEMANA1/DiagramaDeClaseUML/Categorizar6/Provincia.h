#ifndef __Provincia_h__
#define __Provincia_h__

#include <string>
#include <vector>
//#include "Ciudad.h"

class Pais;

class Provincia {
private:
    std::string _nombreProvincia;
    std::vector<Ciudad> _ciudades;
    Pais* _pais;

public:
    Provincia(std::string nombreProvincia)
        : _nombreProvincia(nombreProvincia), _pais(nullptr) {}

    void addCiudad(const Ciudad& ciudad) {
        _ciudades.push_back(ciudad);
    }

    std::string getNombreProvincia() const {
        return _nombreProvincia;
    }

    const std::vector<Ciudad>& getCiudades() const {
        return _ciudades;
    }
};

#endif
