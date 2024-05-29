#include "MatrizCubo.h"

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

void Matriz::llenarDatos() {
    llenarDatosUsuario(0, 0);
}

void Matriz::cube() {
    Matriz resultado;

    multiplicar(resultado, *this, *this);

    Matriz temp;
    multiplicar(temp, resultado, *this);

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            data[i][j] = temp.data[i][j];
        }
    }
}

void Matriz::llenarDatosUsuario(int row, int col) {
    if(row >= size) return;
    if(col >= size) {
        llenarDatosUsuario(row + 1, 0);
        return;
    }
    std::cout << "Ingrese el valor para [" << row << "][" << col << "]: ";
    std::cin >> data[row][col];
    llenarDatosUsuario(row, col + 1);
}

void Matriz::multiplicar(Matriz& resultado, const Matriz& m1, const Matriz& m2) const {
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            resultado.data[i][j] = 0;
            for(int k = 0; k < size; k++){
                resultado.data[i][j] += m1.data[i][k] * m2.data[k][j];
            }
        }
    }
}

void Matriz::print() const {
    for(int i = 0; i < size; ++i) {
        for(int j = 0; j < size; ++j) {
            std::cout << data[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
