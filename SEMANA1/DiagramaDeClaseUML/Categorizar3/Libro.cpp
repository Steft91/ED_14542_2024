#include "Libro.h"
#include <iostream>

Libro::Libro(std::string t, std::string a, int numP, int p): titulo(t), autor(a), numPaginas(numP), paginaActual(p) {}

void Libro::abrir() const {
    std::cout << "Abriendo" << std::endl;
}

void Libro::cerrar() const {
    std::cout << "Cerrando" << std::endl;
}

void Libro::leerPagina() const {
    std::cout << "Leer página: " << paginaActual << std::endl;
}