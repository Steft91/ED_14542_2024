#include "MatrizCubo.h"
#include <iostream>

using namespace std;

int main() {
    Matriz matriz;
    
    cout << "Ingrese los valores de la matriz" << endl;
    matriz.llenarDatos();

    cout << "Matriz ingresada" << endl;
    matriz.print();

    cout << "\nMatriz elevada al cubo" << endl;
    matriz.cube();
    matriz.print();

    return 0;
}

