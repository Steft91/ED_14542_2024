#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "SumaMatrices.h"

#define MAX 3

using namespace std;

int main() {
    srand(time(NULL));

    // Inicializar matrices de tamaño MAX x MAX
    vector<vector<int>> mat1(MAX, vector<int>(MAX));
    vector<vector<int>> mat2(MAX, vector<int>(MAX));

    // Llenar las matrices con valores aleatorios
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            mat1[i][j] = rand() % 10;
            mat2[i][j] = rand() % 10;
        }
    }

    // Mostrar la primera matriz
    cout << "Matriz 1:" << endl;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Mostrar la segunda matriz
    cout << "Matriz 2:" << endl;
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Lambda recursiva para sumar matrices
    std::function<int(const std::vector<std::vector<int>>&, const std::vector<std::vector<int>>&, int, int, const std::function<int(const std::vector<std::vector<int>>&, const std::vector<std::vector<int>>&, int, int, const std::function<int(const std::vector<std::vector<int>>&, const std::vector<std::vector<int>>&, int, int)>&)>&)> sumaMatrices;
    
    sumaMatrices = [&sumaMatrices](const std::vector<std::vector<int>>& mat1, const std::vector<std::vector<int>>& mat2, int f, int c, const auto& rec) -> int {
        if (f == 0 && c == 0) {
            return mat1[f][c] + mat2[f][c];
        } else {
            if (f > -1) {
                c--;
                if (c >= -1) {
                    return mat1[f][c + 1] + mat2[f][c + 1] + rec(mat1, mat2, f, c, rec);
                }
                return rec(mat1, mat2, f - 1, mat1[0].size() - 1, rec);
            }
        }
        return 0;
    };

    // Calcular la suma de las matrices
    int suma = sumaRecursivaMatrices<int>(mat1, mat2, MAX - 1, MAX - 1, sumaMatrices);
    cout << "Suma de las matrices es: " << suma << endl;

    return 0;
}

