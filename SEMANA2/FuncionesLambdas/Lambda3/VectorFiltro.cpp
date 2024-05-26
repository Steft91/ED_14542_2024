#include "VectorFiltro.h"

std::vector<int> filtrarMayores(const std::vector<int> &numeros, int valor) {
    std::vector<int> mayores;

    auto esMayorQue = [valor](int n) {return n > valor; };

    for(int num : numeros){
        if(esMayorQue(num)){
            mayores.push_back(num);
        }
    }
    return mayores;
}

