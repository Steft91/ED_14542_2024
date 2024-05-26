#include <iostream>
#include <vector>
#include "Provincia.h"
#include "Ciudad.h"
#include "Estado_Civil.h"

using namespace std;

void inicializarProvincias(vector<Provincia>& provincias) {
    string nombresProvincias[] = {"Azuay", "Bolivar", "Cañar", "Carchi", "Chimborazo",
                                  "Cotopaxi", "El Oro", "Esmeraldas", "Galapagos", "Guayas",
                                  "Imbabura", "Loja", "Los Rios", "Manabi", "Morona Santiago",
                                  "Napo", "Orellana", "Pastaza", "Pichincha", "Santa Elena",
                                  "Santo Domingo de los Tsachilas", "Sucumbios", "Tungurahua",
                                  "Zamora Chinchipe"};

    for (const string& nombre : nombresProvincias) {
        provincias.push_back(Provincia(nombre));
    }
}

void mostrarProvincias(const vector<Provincia>& provincias) {
    for (size_t i = 0; i < provincias.size(); ++i) {
        cout << i + 1 << ". " << provincias[i].getNombreProvincia() << endl;
    }
}

void mostrarEstadoCivil() {
    cout << "1. Soltero" << endl;
    cout << "2. Casado" << endl;
    cout << "3. Divorciado" << endl;
    cout << "4. Viudo" << endl;
    cout << "5. Unión de Hecho" << endl;
}

Estado_Civil seleccionarEstadoCivil(int opcion) {
    switch (opcion) {
        case 1: return Soltero;
        case 2: return Casado;
        case 3: return Divorciado;
        case 4: return Viudo;
        case 5: return UnionDeHecho;
        default: return Soltero;
    }
}

int seleccionarProvincia(const vector<Provincia>& provincias) {
    int opcionProvincia;
    cout << "Seleccione su provincia:" << endl;
    mostrarProvincias(provincias);
    cin >> opcionProvincia;

    if (opcionProvincia < 1 || opcionProvincia > provincias.size()) {
        cout << "Opción no válida." << endl;
        return -1;
    }

    return opcionProvincia - 1;
}

int main() {
    vector<Provincia> provincias;
    inicializarProvincias(provincias);

    int indiceProvincia = seleccionarProvincia(provincias);
    if (indiceProvincia == -1) {
        return 1;
    }

    Provincia& provinciaSeleccionada = provincias[indiceProvincia];

    string nombreCiudad;
    cout << "Ingrese el nombre de su ciudad en " << provinciaSeleccionada.getNombreProvincia() << ":" << endl;
    cin.ignore();  // Limpiar el buffer
    getline(cin, nombreCiudad);

    Ciudad ciudadSeleccionada(nombreCiudad);

    int opcionEstadoCivil;
    cout << "Seleccione su estado civil:" << endl;
    mostrarEstadoCivil();
    cin >> opcionEstadoCivil;

    Estado_Civil estadoCivilSeleccionado = seleccionarEstadoCivil(opcionEstadoCivil);

    cout << "Provincia seleccionada: " << provinciaSeleccionada.getNombreProvincia() << endl;
    cout << "Ciudad seleccionada: " << ciudadSeleccionada.getNombreCiudad() << endl;
    cout << "Estado civil seleccionado: ";
    switch (estadoCivilSeleccionado) {
        case Soltero: cout << "Soltero" << endl; break;
        case Casado: cout << "Casado" << endl; break;
        case Divorciado: cout << "Divorciado" << endl; break;
        case Viudo: cout << "Viudo" << endl; break;
        case UnionDeHecho: cout << "Unión de Hecho" << endl; break;
    }

    return 0;
}
