#include "Instrumento.h"
#include <iostream>
#include <string>

Instrumento::Instrumento(std::string n, std::string t, std::string m, float p) : nombre(n), tipo(t), marca(m), precio(p) {}

//No es necesario puesto que instrumento es una clase abstracta y no tiene implementaciones concretas de métodos que necesitan ser definidos en un archivo separado. 