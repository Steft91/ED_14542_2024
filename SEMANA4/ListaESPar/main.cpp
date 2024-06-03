#include <iostream>
#include <limits>
#include "ListaSimple.h"

using namespace std;

void menu() {
    cout << "Opciones:\n";
    cout << "1. Insertar\n";
    cout << "2. Mostrar\n";
    cout << "3. Buscar\n";
    cout << "4. Eliminar\n";
    cout << "5. Mostrar Pares\n";
    cout << "6. Mostrar Impares\n";
    cout << "7. Salir\n";
}

int obtenerOpcion() {
    int opcion;
    while (true) {
        cout << "Elija una opcion: ";
        cin >> opcion;
        if (cin.fail() || opcion < 1 || opcion > 7) {
            cout << "Opcion no valida. Por favor, intente de nuevo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
    return opcion;
}

int obtenerValor(const string &mensaje) {
    int valor;
    while (true) {
        cout << mensaje;
        cin >> valor;
        if (cin.fail()) {
            cout << "Entrada no valida. Por favor, intente de nuevo.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            break;
        }
    }
    return valor;
}

int main() {
    ListaSimple lista;
    int opcion, valor;

    do {
        menu();
        opcion = obtenerOpcion();

        switch (opcion) {
            case 1:
                valor = obtenerValor("Ingrese valor a insertar: ");
                lista.insertar(valor);
                break;
            case 2:
                lista.mostrar();
                break;
            case 3:
                valor = obtenerValor("Ingrese valor a buscar: ");
                if (lista.buscar(valor)) {
                    cout << "Valor encontrado\n";
                } else {
                    cout << "Valor no encontrado\n";
                }
                break;
            case 4:
                valor = obtenerValor("Ingrese valor a eliminar: ");
                lista.eliminar(valor);
                break;
            case 7:
                cout << "Saliendo...\n";
                break;
            case 5:
                cout << "Mostrando valores pares: \n";
                lista.mostrarPares();
                cout << endl;
                break;
            case 6:
                cout << "Mostrando valores impares: \n";
                lista.mostrarImpares();
                cout << endl;
                break; 
            default:
                cout << "Opcion no valida\n";
                break;
        }
    } while (opcion != 7);

    return 0;
}
