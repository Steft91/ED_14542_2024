#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>

template <typename T>
class Vector {
private:
    T *elementos;
    int tamano;
public:
    Vector(int t);
    ~Vector();
    void set(int index, T value);
    T get(int index) const;
};

template <typename T>
Vector<T>::Vector(int t) : tamano(t) {
    elementos = new T[tamano];
}

template <typename T>
Vector<T>::~Vector() {
    delete[] elementos;
}

template <typename T>
void Vector<T>::set(int index, T value) {
    if (index >= 0 && index < tamano) {
        elementos[index] = value;
    } else {
        std::cout << "Índice fuera de rango" << std::endl;
    }
}

template <typename T>
T Vector<T>::get(int index) const {
    if (index >= 0 && index < tamano) {
        return elementos[index];
    } else {
        std::cout << "Índice fuera de rango" << std::endl;
        return T(); // Retorna un valor por defecto de T
    }
}

#endif