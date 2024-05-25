#include "Vector.h"
#include <string>

int main() {
    int tamano;
    std::cout << "Ingrese el tamaño del vector de enteros: ";
    std::cin >> tamano;

    Vector<int> vectorDeEnteros(tamano);

    for (int i = 0; i < tamano; ++i) {
        int valor;
        std::cout << "Ingrese el valor para el índice " << i << ": ";
        std::cin >> valor;
        vectorDeEnteros.set(i, valor);
    }

    std::cout << "Elementos en el vector de enteros:" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Elemento en el índice " << i << ": " << vectorDeEnteros.get(i) << std::endl;
    }

    // Intenta acceder a un índice fuera del rango para mostrar el mensaje de error
    std::cout << "Intentando acceder a un índice fuera de rango..." << std::endl;
    vectorDeEnteros.set(tamano, 100);  // Índice fuera de rango
    vectorDeEnteros.get(tamano);       // Índice fuera de rango

    std::cout << "Ingrese el tamaño del vector de cadenas: ";
    std::cin >> tamano;

    Vector<std::string> vectorDeCadenas(tamano);

    for (int i = 0; i < tamano; ++i) {
        std::string valor;
        std::cout << "Ingrese la cadena para el índice " << i << ": ";
        std::cin >> valor;
        vectorDeCadenas.set(i, valor);
    }

    std::cout << "Elementos en el vector de cadenas:" << std::endl;
    for (int i = 0; i < tamano; ++i) {
        std::cout << "Elemento en el índice " << i << ": " << vectorDeCadenas.get(i) << std::endl;
    }

    // Intenta acceder a un índice fuera del rango para mostrar el mensaje de error
    std::cout << "Intentando acceder a un índice fuera de rango..." << std::endl;
    vectorDeCadenas.set(tamano, "Fuera de rango");  // Índice fuera de rango
    vectorDeCadenas.get(tamano);                   // Índice fuera de rango

    return 0;
}

