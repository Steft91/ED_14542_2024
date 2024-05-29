#include "MatrizCuboCA.h"

int main() {
    Matriz matriz;

    std::cout << "Ingrese los valores de la matriz 3x3:" << std::endl;
    matriz.ingresarDatos();
    
    std::cout << "\nMatriz Original:" << std::endl;
    matriz.print();

    std::cout << "\nMatriz despues de elevar cada elemento al cubo:" << std::endl;
    matriz.cubo();
    matriz.print();

    return 0;
}

