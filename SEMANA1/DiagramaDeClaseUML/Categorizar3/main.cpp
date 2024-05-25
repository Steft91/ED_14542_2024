#include <iostream>
#include "Novela.h"
#include "Libro.h"

using namespace std;

int main(){
    Novela unaNovela("El Principito", "Antoine de Saint-Exupéry", 92, 45);

    unaNovela.abrir();
    unaNovela.leerPagina();

    string frase;
    cout << "Ingrese una frase para señalar: ";
    getline(cin, frase);

    string resultado = unaNovela.senalarFrase(frase);
    cout << resultado << endl;
    unaNovela.cerrar();
    return 0;
}