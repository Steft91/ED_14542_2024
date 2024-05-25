#include <iostream>
#include "Punto.h"

using namespace std;

int main(){
    Punto p1(1, 2);
    Punto p2(3, 4);
    Punto p3(1, 2);

    if (p1 == p2){
        cout << "P1 es igual a P2" << endl;
    }else{
        cout << "P1 no es igual a P2" << endl;
    }

    if (p1 == p3){
        cout << "P1 es igual a P3" << endl;
    }else{
        cout << "P1 no es igual a P3" << endl;
    }

    return 0;
}
