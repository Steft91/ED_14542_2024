#include "Stack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Stack::Stack(int capacidadInicial) {
    capacidad = capacidadInicial;
    datos = (int*)malloc(capacidad * sizeof(int));  // Using malloc to allocate memory
    if (datos == nullptr) {
        cerr << "Error allocating memory" << endl;
        exit(1);
    }
    top = -1;
}

Stack::~Stack() {
    free(datos);  // Using free to deallocate memory
}

void Stack::resize(int nuevaCapacidad) {
    datos = (int*)realloc(datos, nuevaCapacidad * sizeof(int));  // Using realloc to resize memory
    if (datos == nullptr) {
        cerr << "Error reallocating memory" << endl;
        exit(1);
    }
    capacidad = nuevaCapacidad;
}

void Stack::push(int value) {
    if (top == capacidad - 1) {
        resize(capacidad * 2);  // Doubling the capacity if the stack is full
    }
    datos[++top] = value;
}

int Stack::pop() {
    if (isEmpty()) {
        cerr << "Stack underflow" << endl;
        exit(1);
    }
    return datos[top--];
}

void Stack::print() const {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return;
    }
    for (int i = top; i >= 0; --i) {
        cout << datos[i] << " ";
    }
    cout << endl;
}

bool Stack::search(int value) const {
    for (int i = 0; i <= top; ++i) {
        if (datos[i] == value) {
            return true;
        }
    }
    return false;
}

bool Stack::isEmpty() const {
    return top == -1;
}
