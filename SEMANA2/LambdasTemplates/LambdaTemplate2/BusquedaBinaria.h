#ifndef BUSQUEDA_BINARIA_H
#define BUSQUEDA_BINARIA_H
#include <vector>
#include <functional>

template <typename T>
bool busquedaBinaria(const std::vector<T>& contenedor, const T& valor, std::function<bool(const T&, const T&)> comp){
    int izquierda = 0;
    int derecha = contenedor.size() -1;

    while( izquierda <= derecha){
        int medio = izquierda + (derecha - izquierda) /2;

        if(comp(contenedor[medio], valor) && comp(valor, contenedor[medio])) {
            return true;
        }

        if(comp(contenedor[medio], valor)){
            izquierda = medio + 1;
        }else{
            derecha = medio - 1;
        }
    }
    return false;
}

#endif
