#ifndef NOVELA_H
#define NOVELA_H
#include "Libro.h"
#include <string>

class Novela : public Libro{
public: 
    Novela(std::string t, std::string a, int num, int p);

    std::string senalarFrase(const std::string& frase); 

};

#endif