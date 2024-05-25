#include "Pila.h"

int main() {
    Pila<int> pilaDeEnteros;
    pilaDeEnteros.push(5);
    pilaDeEnteros.push(10);
    std::cout << "Elemento sacado de la pila: " << pilaDeEnteros.pop() << std::endl;

    Pila<std::string> pilaDeCadenas;
    pilaDeCadenas.push("Hola");
    pilaDeCadenas.push("Mundo");
    std::cout << "Elemento sacado de la pila: " << pilaDeCadenas.pop() << std::endl;

    return 0;
}
