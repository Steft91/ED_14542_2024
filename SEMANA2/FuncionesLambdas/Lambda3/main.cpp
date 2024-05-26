#include "VectorFiltro.h"
#include <iostream>
#include <vector>

int main(){
    std::vector<int> numeros = {10, 20, 30, 40, 50, 55 ,60, 70, 80, 90, 100};
    int valor;

    std::cout << "Ingrese un valor para filtrar numeros mayores que este: ";
    std:: cin >> valor;

    std::vector<int> mayores = filtrarMayores(numeros, valor);

    std::cout << "Numeros mayores que " << valor << " :" ;
    for(int n : mayores){
        std::cout << n << " ";
    }
    std::cout << std::endl;
    return 0;
}