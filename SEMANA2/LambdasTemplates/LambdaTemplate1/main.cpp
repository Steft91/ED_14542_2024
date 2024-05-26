#include <iostream>
#include <vector>
#include "Reductor.h"

int main(){
    std::vector<int>  numeros = {};

    auto sumar = [] (int a, int b) {return a + b;};
    int sumaTotal = reducirContenedor(numeros, sumar);

    std::cout << "La suma total de los numeros es: " << sumaTotal << std::endl;

    return 0;
}