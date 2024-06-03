#ifndef ListaEDoble_H
#define ListaEDoble_H

#include "Nodo.h"

class ListaEDoble {
private:
    Nodo* cabeza;
    Nodo* cola;

    void insertarRecursivo(Nodo* &nodo, int valor);
    void mostrarRecursivo(Nodo* nodo) const;
    bool buscarRecursivo(Nodo* nodo, int valor) const;
    bool eliminarRecursivo(Nodo* &nodo, int valor);
    void mostrarParesRecursivo(Nodo* nodo) const;
    void mostrarImparesRecursivo(Nodo* nodo) const;
    void elevarPotenciaR(Nodo* nodo, int n);

public:
    ListaEDoble();
    void insertar(int valor);
    void mostrar() const;
    bool buscar(int valor) const;
    bool eliminar(int valor);
    void mostrarPares() const;
    void mostrarImpares() const;
    void elevarPotencia(int n);
};

#endif 
