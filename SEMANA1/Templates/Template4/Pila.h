#ifndef PILA_H
#define PILA_H

#include <iostream>

template <typename T>
class Pila {
private:
    static const int maxSize = 100;
    T elementos[maxSize];
    int tope;
public:
    Pila() : tope(-1) {} // Implementación del constructor dentro de la clase
    void push(T elemento) {
        if (tope >= maxSize - 1) {
            std::cout << "Pila llena, no se puede agregar más elementos." << std::endl;
            return;
        }
        elementos[++tope] = elemento;
    }
    T pop() {
        if (tope < 0) {
            std::cout << "Pila vacía, no se puede sacar ningún elemento." << std::endl;
            return T();
        }
        return elementos[tope--];
    }
};

#endif
