#include <iostream>
#include <string>
#include "Stack.h"
#include <algorithm>

using namespace std;

bool esEntero(const string&);

int main() {
    Stack stack;
    int opcion, dato;
    string linea;
    bool repite = true;

    do {
        system("cls");
        cout << "***********Pila***********" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Imprimir" << endl;
        cout << "4. Buscar" << endl;
        cout << "5. Salir" << endl;
        do {
            cout << "Opcion: ";
            getline(cin, linea);

            if (esEntero(linea)) {
                repite = false;
                opcion = stoi(linea);
                if (opcion > 5 || opcion < 1) {
                    repite = true;
                    cout << "Opción no válida. Inténtalo de nuevo." << endl;
                }
            } else {
                cout << "No has ingresado un valor entero. Inténtalo nuevamente" << endl;
            }
        } while (repite);

        switch (opcion) {
        case 1:
            repite = true;
            do {
                cout << "Ingrese el dato a insertar: ";
                getline(cin, linea);

                if (esEntero(linea)) {
                    repite = false;
                    dato = stoi(linea);
                } else {
                    cout << "No has ingresado un valor entero. Inténtalo nuevamente" << endl;
                }
            } while (repite);
            stack.push(dato);
            break;
        case 2:
            if (!stack.isEmpty()) {
                cout << "Dato removido: " << stack.pop() << endl;
            } else {
                cout << "La pila está vacía, no se puede hacer pop." << endl;
            }
            break;
        case 3:
            stack.print();
            break;
        case 4:
            repite = true;
            do {
                cout << "Ingrese el dato a buscar: ";
                getline(cin, linea);

                if (esEntero(linea)) {
                    repite = false;
                    dato = stoi(linea);
                } else {
                    cout << "No has ingresado un valor entero. Inténtalo nuevamente" << endl;
                }
            } while (repite);
            if (stack.search(dato)) {
                cout << "El dato " << dato << " se encuentra en la pila." << endl;
            } else {
                cout << "El dato " << dato << " no se encuentra en la pila." << endl;
            }
            break;
        }
        system("pause");
    } while (opcion != 5);
    return 0;
}

bool esEntero(const string& linea) {
    if (linea.empty() || ((linea[0] != '-' && linea[0] != '+') && !isdigit(linea[0]))) {
        return false;
    }
    return all_of(linea.begin() + 1, linea.end(), ::isdigit);
}
