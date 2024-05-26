#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include <functional>
#include "Libro.h"

class Biblioteca {
public:
    Biblioteca(const std::vector<Libro>& libros) : libros(libros) {}
    bool buscarLibro(const std::string& titulo, std::function<bool(const std::string&, const std::string&)> comp) const;
private:
    std::vector<Libro> libros;
};

#endif
