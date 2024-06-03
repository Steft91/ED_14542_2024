#pragma once
#include "Nodo.h"
#include <iostream>

template <typename T>
class ListaCircular {
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
public:
    ListaCircular();
    void Insertar(T);
    void Buscar(T);
    void Eliminar(T);
    void Mostrar();
};

template <typename T>
ListaCircular<T>::ListaCircular() : primero(nullptr), ultimo(nullptr) {}

template <typename T>
void ListaCircular<T>::Insertar(T dato) {
    Nodo<T>* nuevo = new Nodo<T>(dato);
    if (primero == nullptr) {
        primero = nuevo;
        primero->setSiguiente(primero);
        ultimo = primero;
    } else {
        ultimo->setSiguiente(nuevo);
        nuevo->setSiguiente(primero);
        ultimo = nuevo;
    }
}

template <typename T>
void ListaCircular<T>::Buscar(T dato) {
    Nodo<T>* actual = primero;
    bool encontrado = false;
    if (primero != nullptr) {
        do {
            if (actual->getDato() == dato) {
                std::cout << "El elemento " << dato << " ha sido encontrado en la lista" << std::endl;
                encontrado = true;
                break;
            }
            actual = actual->getSiguiente();
        } while (actual != primero);
        if (!encontrado) {
            std::cout << "El elemento " << dato << " no ha sido encontrado en la lista" << std::endl;
        }
    } else {
        std::cout << "La lista se encuentra vacía" << std::endl;
    }
}

template <typename T>
void ListaCircular<T>::Eliminar(T dato) {
    Nodo<T>* actual = primero;
    Nodo<T>* anterior = nullptr;
    bool encontrado = false;
    if (primero != nullptr) {
        do {
            if (actual->getDato() == dato) {
                if (actual == primero) {
                    primero = primero->getSiguiente();
                    ultimo->setSiguiente(primero);
                } else if (actual == ultimo) {
                    anterior->setSiguiente(primero);
                    ultimo = anterior;
                } else {
                    anterior->setSiguiente(actual->getSiguiente());
                }
                delete actual;
                std::cout << "El elemento " << dato << " ha sido eliminado de la lista" << std::endl;
                encontrado = true;
                break;
            }
            anterior = actual;
            actual = actual->getSiguiente();
        } while (actual != primero);
        if (!encontrado) {
            std::cout << "El elemento " << dato << " no ha sido encontrado en la lista" << std::endl;
        }
    } else {
        std::cout << "La lista se encuentra vacía" << std::endl;
    }
}

template <typename T>
void ListaCircular<T>::Mostrar() {
    Nodo<T>* actual = primero;
    if (primero != nullptr) {
        do {
            std::cout << actual->getDato() << " -> ";
            actual = actual->getSiguiente();
        } while (actual != primero);
        std::cout << "NULL" << std::endl;
    } else {
        std::cout << "La lista se encuentra vacía" << std::endl;
    }
}
