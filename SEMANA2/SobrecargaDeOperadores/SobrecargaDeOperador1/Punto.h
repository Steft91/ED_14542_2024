#ifndef PUNTO_H
#define PUNTO_H
#include "Comparable.h"

class Punto : public Comparable{
private:
    int x;
    int y;

public:
    Punto(int x = 0, int y = 0);

    void setX(int x);
    void setY(int y);
    int getX() const;
    int getY() const;

    bool operator==(const Comparable& other) const override;
};

#endif

