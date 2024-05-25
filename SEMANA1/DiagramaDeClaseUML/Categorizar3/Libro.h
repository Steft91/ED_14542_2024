#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro{
protected:
    std::string titulo;
    std::string autor;
    int numPaginas;
    int paginaActual;

public:
    Libro(std::string t, std::string a, int num, int p);

    void abrir() const;
    void cerrar() const;
    void leerPagina() const;
};

#endif