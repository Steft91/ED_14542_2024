#ifndef MATRIZ_CUBO_H
#define MATRIZ_CUBO_H

#include <iostream>

class Matriz {
private:
    int** data;
    static const int size = 3;

    void ingresarDatosUser(int row, int col);
    void elevarAlCubo(int row, int col);

public:
    Matriz();
    ~Matriz();

    void ingresarDatos();
    void cubo();
    void print();
};

#endif 