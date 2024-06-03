#include "ListaDoble.h"
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

bool esEntero(const string&);

int main() {
    ListaDoble<int> lista;
    int opcion, dato;
    string linea;
    bool repite = true;

    do {
        system("cls");
        cout << "***********Listas Dobles***********" << endl;
        cout << "1. Insertar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Mostrar" << endl;
        cout << "5. Elevar a una n potencia" << endl;
        cout << "6. Salir" << endl;

        do {
            cout << "Opcion: ";
            getline(cin, linea);

            if (esEntero(linea)) {
                repite = false;
                opcion = stoi(linea);
                if (opcion > 6 || opcion < 1) {
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
            lista.Insertar(dato);
            break;
        case 2:
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
            lista.Buscar(dato);
            break;
        case 3:
            repite = true;
            do {
                cout << "Ingrese el dato a eliminar: ";
                getline(cin, linea);

                if (esEntero(linea)) {
                    repite = false;
                    dato = stoi(linea);
                } else {
                    cout << "No has ingresado un valor entero. Inténtalo nuevamente" << endl;
                }
            } while (repite);
            lista.Eliminar(dato);
            break;
        case 4:
            lista.Mostrar();
            break;
        case 5:
            repite = true;
            do {
                cout << "Ingrese la potencia a la cual desea elevar los valores de la lista: ";
                getline(cin, linea);

                if (esEntero(linea)) {
                    repite = false;
                    dato = stoi(linea);
                } else {
                    cout << "No has ingresado un valor entero. Inténtalo nuevamente" << endl;
                }
            } while (repite);
            lista.elevar(dato);
            cout << "Los valores de la lista han sido elevados a la potencia " << dato << ".\n";
            break;
        }
        system("pause");
    } while (opcion != 6);
    return 0;
}

bool esEntero(const string& linea) {
    if (linea.empty() || ((linea[0] != '-' && linea[0] != '+') && !isdigit(linea[0]))) {
        return false;
    }
    return all_of(linea.begin() + 1, linea.end(), ::isdigit);
}
