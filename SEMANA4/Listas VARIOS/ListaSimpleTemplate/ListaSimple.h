#pragma once
#include "Nodo.h"

template <typename T>
class ListaSimple {
private:
    Nodo<T>* cabeza;
public:
    ListaSimple();
    void Insertar(T);
    void Buscar(T);
    void Eliminar(T);
    void Mostrar();
};

template <typename T>
ListaSimple<T>::ListaSimple() : cabeza(nullptr) {}

template <typename T>
void ListaSimple<T>::Insertar(T _dato) {
    Nodo<T>* nuevo = new Nodo<T>(_dato);
    if (cabeza == nullptr) {
        cabeza = nuevo;
    } else {
        Nodo<T>* aux = cabeza;
        while (aux->getSiguiente() != nullptr) {
            aux = aux->getSiguiente();
        }
        aux->setSiguiente(nuevo);
    }
}

template <typename T>
void ListaSimple<T>::Buscar(T _dato) {
    Nodo<T>* aux = cabeza;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            std::cout << "El dato " << _dato << " si se encuentra en la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}

template <typename T>
void ListaSimple<T>::Eliminar(T _dato) {
    Nodo<T>* aux = cabeza;
    Nodo<T>* anterior = nullptr;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            if (anterior == nullptr) {
                cabeza = aux->getSiguiente();
            } else {
                anterior->setSiguiente(aux->getSiguiente());
            }
            delete aux;
            std::cout << "El dato " << _dato << " se ha eliminado de la lista" << std::endl;
            return;
        }
        anterior = aux;
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}

template <typename T>
void ListaSimple<T>::Mostrar() {
    Nodo<T>* aux = cabeza;
    while (aux != nullptr) {
        std::cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    std::cout << "NULL" << std::endl;
}
