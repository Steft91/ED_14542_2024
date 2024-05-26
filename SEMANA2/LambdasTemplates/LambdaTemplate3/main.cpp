#include "Biblioteca.h"
#include <iostream>

int main() {
    std::vector<Libro> libros = {
        Libro("El Retrato de Dorian Gray", "Oscar Wilde"),
        Libro("Cien años de soledad", "Gabriel García Márquez"),
        Libro("El Principito", "Antoine Saint- Exupéry")
    };

    Biblioteca biblioteca(libros);

    // Lambda para comparar si dos títulos de libros son iguales
    auto comparacion = [](const std::string& a, const std::string& b) { return a == b; };

    std::string tituloBuscar = "La Odisea";

    bool encontrado = biblioteca.buscarLibro(tituloBuscar, comparacion);

    if (encontrado) {
        std::cout << "El libro " << tituloBuscar << " fue encontrado en la biblioteca" << std::endl;
    } else {
        std::cout << "El libro " << tituloBuscar << " no fue encontrado en la biblioteca" << std::endl;
    }

    return 0;
}
