#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class Matriz {
private:
    int** data;
    static const int size = 3;

    void llenarDatosUsuario(int row, int col);
    void multiplicar(Matriz& resultado, const Matriz& m1, const Matriz& m2) const;

public:
    Matriz();
    ~Matriz();

    void llenarDatos();
    void cube();
    void print() const;
};

#endif 
