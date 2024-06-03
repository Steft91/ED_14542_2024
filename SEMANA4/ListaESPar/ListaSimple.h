#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple {
private:
    Nodo* cabeza;

    void insertarRecursivo(Nodo* &nodo, int valor);
    void mostrarRecursivo(Nodo* nodo) const;
    bool buscarRecursivo(Nodo* nodo, int valor) const;
    Nodo* eliminarRecursivo(Nodo* nodo, int valor);
    void mostrarParesR(Nodo* nodo) const;
    void mostrarImparesR(Nodo* nodo) const;

public:
    ListaSimple();
    void insertar(int valor);
    void mostrar() const;
    bool buscar(int valor) const;
    void eliminar(int valor);
    void mostrarPares();
    void mostrarImpares();
};

#endif // LISTAENLAZADA_H
