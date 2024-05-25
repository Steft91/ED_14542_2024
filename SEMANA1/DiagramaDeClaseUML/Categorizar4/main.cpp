#include <iostream>
#include <vector>
#include <memory>
#include "Bateria.h"
#include "Guitarra.h"

using namespace std;

int main(){
    vector<unique_ptr<Instrumento>> instrumentos;

    string nombreGuitarra, marcaGuitarra;
    float precioGuitarra;
    cout << "Nombre de la Guitarra: ";
    getline(cin, nombreGuitarra);
    cout << "Marca de la Guitarra: ";
    getline(cin, marcaGuitarra);
    cout << "Precio de la Guitarra: ";
    cin >> precioGuitarra;
    instrumentos.push_back(make_unique<Guitarra>(nombreGuitarra, marcaGuitarra, precioGuitarra));

    string nombreBateria, marcaBateria;
    float precioBateria;
    cout << "Nombre de la Bateria: ";
    getline(cin, nombreBateria);
    cout << "Marca de la Bateria: ";
    getline(cin, marcaBateria);
    cout << "Precio de la Bateria: ";
    cin >> precioBateria;
    instrumentos.push_back(make_unique<Bateria>(nombreBateria, marcaBateria, precioBateria));

    for (const auto& instrumento : instrumentos){
        cout << "Instrumento: " << instrumento -> getNombre() << ", Marca: " << instrumento ->getMarca() << endl;
        instrumento -> tocar();
        instrumento -> afinar();

    }
    return 0;
}
