#include <iostream>
#include "Funciones.h"
#include "Par.h"

using namespace std;

int main(){
    int intVal = -2;
    float floatVal = -2.2;
    double doubleVal = -2.222;

    cout << "Valor absoluto de " << intVal << " es " << valorAbsoluto(intVal) << endl;
    cout << "Valor absoluto de " << floatVal << " es " << valorAbsoluto(floatVal) << endl;
    cout << "Valor absoluto de " << doubleVal << " es " << valorAbsoluto(doubleVal) << endl;

    Par<int> intPar(1, 2);
    cout << "Par de enteros: (" << intPar.getPrimero() << ", " << intPar.getSegundo() << ")" << endl;

    Par<float> floatPar(1.2, 3.4);
    cout << "Par de flotantes: (" << floatPar.getPrimero() << ", " << floatPar.getSegundo() << ")" << endl;

    Par<double> doublePar(1.222, 3.444);
    cout << "Par de doubles: (" << doublePar.getPrimero() << ", " << doublePar.getSegundo() << ")" << endl;

    Par<string> stringPar("Hola", "Mundo");
    cout << "Par de strings: (" << stringPar.getPrimero() << ", " << stringPar.getSegundo() << ")" << endl;

    return 0;    

}