#include "MatrizCuboCA.h"

Matriz::Matriz() {
    data = new int*[size];
    for(int i = 0; i < size; ++i) {
        data[i] = new int[size];
    }
}

Matriz::~Matriz() {
    for(int i = 0; i < size; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

void Matriz::ingresarDatos() {
    ingresarDatosUser(0, 0);
}

void Matriz::cubo() {
    elevarAlCubo(0, 0);
}

void Matriz::ingresarDatosUser(int row, int col) {
    if(row >= size) return;
    if(col >= size) {
        ingresarDatosUser(row + 1, 0);
        return;
    }
    std::cout << "Ingrese el valor para [" << row << "][" << col << "]: ";
    std::cin >> data[row][col];
    ingresarDatosUser(row, col + 1);
}

void Matriz::elevarAlCubo(int row, int col) {
    if(row >= size) return;
    if(col >= size) {
        elevarAlCubo(row + 1, 0);
        return;
    }
    data[row][col] = data[row][col] * data[row][col] * data[row][col];
    elevarAlCubo(row, col + 1);
}

void Matriz::print() {
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            std::cout << data[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
