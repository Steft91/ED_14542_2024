#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {7, 14, 21, 28, 35, 42, 49};
    std::vector<int> impares;

    // Usar un bucle y una lambda para encontrar números impares
    auto esImpar = [](int n) { return n % 2 != 0; };

    for (int num : numeros) {
        if (esImpar(num)) {
            impares.push_back(num);
        }
    }

    std::cout << "Numeros Impares: ";
    for (int n : impares) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
