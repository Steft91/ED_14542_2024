#ifndef SUMA_MATRICES_CPP
#define SUMA_MATRICES_CPP

#include "SumaMatrices.h"

template <typename T>
T sumaRecursivaMatrices(const std::vector<std::vector<T>>& mat1, const std::vector<std::vector<T>>& mat2, int f, int c, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int)>&)>&)>& rec) {
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
}

#endif
