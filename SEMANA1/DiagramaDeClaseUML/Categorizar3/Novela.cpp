#include "Novela.h"
#include <iostream>
#include <string>

Novela::Novela(std::string t, std::string a, int num, int p) : Libro(t, a, num, p) {}

std::string Novela::senalarFrase(const std::string& frase) {
    
    return "Frase señalada: " + frase;
}