#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
public:
    Libro(const std::string& titulo, const std::string& autor) : titulo(titulo), autor(autor) {}
    std::string getTitulo() const { return titulo; }
    std::string getAutor() const { return autor; }
private:
    std::string titulo;
    std::string autor;
};

#endif
