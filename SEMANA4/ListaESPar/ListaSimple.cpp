#include "ListaSimple.h"
#include <iostream>
using namespace std;

ListaSimple::ListaSimple() : cabeza(nullptr) {}

void ListaSimple::insertarRecursivo(Nodo* &nodo, int valor) {
    if (nodo == nullptr) {
        nodo = new Nodo(valor);
    } else {
        insertarRecursivo(nodo->siguiente, valor);
    }
}

void ListaSimple::mostrarRecursivo(Nodo* nodo) const {
    if (nodo != nullptr) {
        cout << nodo->dato << " ";
        mostrarRecursivo(nodo->siguiente);
    }
}

bool ListaSimple::buscarRecursivo(Nodo* nodo, int valor) const {
    if (nodo == nullptr) {
        return false;
    }
    if (nodo->dato == valor) {
        return true;
    }
    return buscarRecursivo(nodo->siguiente, valor);
}

Nodo* ListaSimple::eliminarRecursivo(Nodo* nodo, int valor) {
    if (nodo == nullptr) {
        return nullptr;
    }
    if (nodo->dato == valor) {
        Nodo* temp = nodo->siguiente;
        delete nodo;
        return temp;
    } else {
        nodo->siguiente = eliminarRecursivo(nodo->siguiente, valor);
        return nodo;
    }
}

void ListaSimple::insertar(int valor) {
    insertarRecursivo(cabeza, valor);
}

void ListaSimple::mostrar() const {
    mostrarRecursivo(cabeza);
    cout << endl;
}

bool ListaSimple::buscar(int valor) const {
    return buscarRecursivo(cabeza, valor);
}

void ListaSimple::eliminar(int valor) {
    cabeza = eliminarRecursivo(cabeza, valor);
}

void ListaSimple::mostrarPares(){
    mostrarParesR(cabeza);
}

void ListaSimple::mostrarImpares(){
    mostrarImparesR(cabeza);
}

void ListaSimple::mostrarParesR(Nodo* nodo) const{
    if(nodo != nullptr){
        if(nodo->dato % 2 == 0){
            cout << nodo->dato << " ";
        }
        mostrarParesR(nodo->siguiente);
    }
}

void ListaSimple::mostrarImparesR(Nodo* nodo) const{
    if(nodo != nullptr){
        if(nodo->dato % 2 != 0){
            cout << nodo->dato << " ";
        }
        mostrarImparesR(nodo->siguiente);
    }
}