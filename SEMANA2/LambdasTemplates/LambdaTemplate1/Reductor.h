#ifndef REDUCTOR_H
#define REDUCTOR_H

#include<stdexcept>
#include<vector>
#include<iostream>

template <typename T, typename Func>
T reducirContenedor(const std::vector<T>& contenedor, Func funcion) {
    if (contenedor.empty()) {
        throw std::invalid_argument("El contenedor esta vacio");
    }

    T resultado = contenedor[0]; // Inicializamos el resultado con el primer elemento del contenedor

    // Aplicamos la función lambda secuencialmente a cada elemento del contenedor
    for (size_t i = 1; i < contenedor.size(); ++i) {
        resultado = funcion(resultado, contenedor[i]);
    }

    return resultado;
}

#endif