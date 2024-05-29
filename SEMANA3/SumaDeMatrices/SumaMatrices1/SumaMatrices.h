#pragma once

#include <vector>
#include <functional>

template <typename T>
T sumaRecursivaMatrices(const std::vector<std::vector<T>>& mat1, const std::vector<std::vector<T>>& mat2, int f, int c, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int, const std::function<T(const std::vector<std::vector<T>>&, const std::vector<std::vector<T>>&, int, int)>&)>&)>& rec);

#include "SumaMatrices.cpp"
