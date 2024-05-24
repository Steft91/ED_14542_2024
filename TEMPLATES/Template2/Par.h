#ifndef PAR_H
#define PAR_H

template <typename T>
class Par{
private:
    T primero;
    T segundo;
public:
    Par(T a, T b) : primero(a), segundo(b){}

    T getPrimero() const{
        return primero;
    }

    T getSegundo() const{
        return segundo;
    }

    void setPrimero (T a){
        primero = a;
    }

    void setSegundo(T b){
        segundo = b;
    }

};

#endif