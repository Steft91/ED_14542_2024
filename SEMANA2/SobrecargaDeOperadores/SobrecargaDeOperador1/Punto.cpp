#include "Punto.h"

Punto::Punto(int x, int y) : x(x), y(y){}

void Punto::setX(int x) {
    this -> x = x;
}

void Punto::setY(int y) {
    this -> y = y;
}

int Punto::getX() const {
    return x;
}

int Punto::getY() const {
    return y;
}

bool Punto::operator==(const Comparable& other) const{
    const Punto* pOther = dynamic_cast<const Punto*>(&other);
    if(pOther){
        return (this ->x == pOther ->x && this ->y == pOther ->y);
    }
    return false;
}
