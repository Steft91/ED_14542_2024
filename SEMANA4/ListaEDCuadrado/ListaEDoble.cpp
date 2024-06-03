#include "ListaEDoble.h"
#include <iostream>
#include <cmath>

using namespace std;

ListaEDoble::ListaEDoble() : cabeza(nullptr), cola(nullptr) {}

void ListaEDoble::insertarRecursivo(Nodo* &nodo, int valor) {
    if (nodo == nullptr) {
        nodo = new Nodo(valor);
        if (cabeza == nullptr) {
            cabeza = nodo;
            cola = nodo;
        } else {
            cola->siguiente = nodo;
            nodo->anterior = cola;
            cola = nodo;
        }
    } else {
        insertarRecursivo(nodo->siguiente, valor);
    }
}

void ListaEDoble::mostrarRecursivo(Nodo* nodo) const {
    if (nodo != nullptr) {
        cout << nodo->dato << " ";
        mostrarRecursivo(nodo->siguiente);
    }
}

bool ListaEDoble::buscarRecursivo(Nodo* nodo, int valor) const {
    if (nodo == nullptr) {
        return false;
    }
    if (nodo->dato == valor) {
        return true;
    }
    return buscarRecursivo(nodo->siguiente, valor);
}

bool ListaEDoble::eliminarRecursivo(Nodo* &nodo, int valor) {
    if (nodo == nullptr) {
        return false;
    }
    if (nodo->dato == valor) {
        if (nodo->anterior != nullptr) {
            nodo->anterior->siguiente = nodo->siguiente;
        } else {
            cabeza = nodo->siguiente;
        }
        if (nodo->siguiente != nullptr) {
            nodo->siguiente->anterior = nodo->anterior;
        } else {
            cola = nodo->anterior;
        }
        delete nodo;
        return true;
    } else {
        return eliminarRecursivo(nodo->siguiente, valor);
    }
}

void ListaEDoble::mostrarParesRecursivo(Nodo* nodo) const {
    if (nodo != nullptr) {
        if (nodo->dato % 2 == 0) {
            cout << nodo->dato << " ";
        }
        mostrarParesRecursivo(nodo->siguiente);
    }
}

void ListaEDoble::mostrarImparesRecursivo(Nodo* nodo) const {
    if (nodo != nullptr) {
        if (nodo->dato % 2 != 0) {
            cout << nodo->dato << " ";
        }
        mostrarImparesRecursivo(nodo->siguiente);
    }
}

void ListaEDoble::elevarPotenciaR(Nodo* nodo, int n){
    if(nodo != nullptr){
        nodo->dato = pow(nodo->dato, n);
        elevarPotenciaR(nodo->siguiente, n);
    }
}

void ListaEDoble::elevarPotencia(int n){
    elevarPotenciaR(cabeza, n);
}

void ListaEDoble::insertar(int valor) {
    insertarRecursivo(cabeza, valor);
}

void ListaEDoble::mostrar() const {
    mostrarRecursivo(cabeza);
    cout << endl;
}

bool ListaEDoble::buscar(int valor) const {
    return buscarRecursivo(cabeza, valor);
}

bool ListaEDoble::eliminar(int valor) {
    return eliminarRecursivo(cabeza, valor);
}

void ListaEDoble::mostrarPares() const {
    mostrarParesRecursivo(cabeza);
    cout << endl;
}

void ListaEDoble::mostrarImpares() const {
    mostrarImparesRecursivo(cabeza);
    cout << endl;
}

