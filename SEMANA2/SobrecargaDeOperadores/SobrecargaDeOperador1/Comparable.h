#ifndef COMPARABLE_H
#define COMPARABLE_H

class Comparable{
public:
    virtual bool operator==(const Comparable& other) const = 0;
    virtual ~Comparable(){}
};

#endif

