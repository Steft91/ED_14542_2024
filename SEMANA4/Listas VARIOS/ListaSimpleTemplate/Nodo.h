#pragma once
#include <iostream>

template <typename T>
class Nodo {
private:
    T dato;
    Nodo<T>* siguiente;
public:
    Nodo(T);
    void setDato(T);
    T getDato();
    void setSiguiente(Nodo<T>*);
    Nodo<T>* getSiguiente();
};

template <typename T>
Nodo<T>::Nodo(T _dato) : dato(_dato), siguiente(nullptr) {}

template <typename T>
void Nodo<T>::setDato(T _dato) {
    dato = _dato;
}

template <typename T>
T Nodo<T>::getDato() {
    return dato;
}

template <typename T>
void Nodo<T>::setSiguiente(Nodo<T>* _siguiente) {
    siguiente = _siguiente;
}

template <typename T>
Nodo<T>* Nodo<T>::getSiguiente() {
    return siguiente;
}
