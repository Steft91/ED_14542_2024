#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {10, 15, 20, 25, 30, 35, 40, 45, 50};
    std::vector<int> pares;

    // Usar un bucle y una lambda para encontrar números pares
    auto esPar = [](int n) { return n % 2 == 0; };

    for (int num : numeros) {
        if (esPar(num)) {
            pares.push_back(num);
        }
    }

    std::cout << "Números pares: ";
    for (int n : pares) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}



/* int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Filtrar números pares
    std::vector<int> pares;
    std::copy_if(numeros.begin(), numeros.end(), std::back_inserter(pares), [](int n) { return n % 2 == 0; });

    std::cout << "Numeros pares: ";
    for (int n : pares) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}*/
