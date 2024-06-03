#pragma once
#include "Nodo.h"
#include <iostream>
#include <cmath>
#include <functional>

template <typename T>
class ListaDoble {
private:
    Nodo<T>* primero;
    Nodo<T>* ultimo;
    void elevarPotenciaR(Nodo<T>* nodo, int n);
public:
    ListaDoble();
    void Insertar(T);
    void Buscar(T);
    void Eliminar(T);
    void Mostrar();
    void elevar(int n);
};

template <typename T>
ListaDoble<T>::ListaDoble() : primero(nullptr), ultimo(nullptr) {}

template <typename T>
void ListaDoble<T>::Insertar(T _dato) {
    Nodo<T>* nuevo = new Nodo<T>(_dato);
    if (primero == nullptr) {
        primero = nuevo;
        ultimo = nuevo;
    } else {
        ultimo->setSiguiente(nuevo);
        nuevo->setAnterior(ultimo);
        ultimo = nuevo;
    }
}

template <typename T>
void ListaDoble<T>::Buscar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            std::cout << "El dato " << _dato << " se encuentra en la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}

template <typename T>
void ListaDoble<T>::Eliminar(T _dato) {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        if (aux->getDato() == _dato) {
            if (aux == primero) {
                primero = primero->getSiguiente();
                if (primero) primero->setAnterior(nullptr);
            } else if (aux == ultimo) {
                ultimo = ultimo->getAnterior();
                if (ultimo) ultimo->setSiguiente(nullptr);
            } else {
                aux->getAnterior()->setSiguiente(aux->getSiguiente());
                aux->getSiguiente()->setAnterior(aux->getAnterior());
            }
            delete aux;
            std::cout << "El dato " << _dato << " se ha eliminado de la lista" << std::endl;
            return;
        }
        aux = aux->getSiguiente();
    }
    std::cout << "El dato " << _dato << " no se encuentra en la lista" << std::endl;
}

template <typename T>
void ListaDoble<T>::Mostrar() {
    Nodo<T>* aux = primero;
    while (aux != nullptr) {
        std::cout << aux->getDato() << " -> ";
        aux = aux->getSiguiente();
    }
    std::cout << "NULL" << std::endl;
}

template <typename T>
void ListaDoble<T>::elevarPotenciaR(Nodo<T>* nodo, int n){
    if(nodo != nullptr){
        nodo->setDato(pow(nodo->getDato(), n));
        elevarPotenciaR(nodo->getSiguiente(), n);
    }
}

template <typename T>
void ListaDoble<T>::elevar(int n){
    elevarPotenciaR(primero, n);
}
