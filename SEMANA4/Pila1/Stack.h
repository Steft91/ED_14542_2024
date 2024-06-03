#pragma once
#include <iostream>

class Stack {
private:
    int* datos;
    int capacidad;
    int top;
    void resize(int nuevaCapacidad);

public:
    Stack(int capacidadInicial = 10);
    ~Stack();
    void push(int value);
    int pop();
    void print() const;
    bool search(int value) const;
    bool isEmpty() const;
};
