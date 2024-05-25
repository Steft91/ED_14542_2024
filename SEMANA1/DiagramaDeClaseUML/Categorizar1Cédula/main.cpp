#include <iostream>
#include "Condicion.h"
#include "Sangre.h"
#include "Fecha.h"

using namespace std;

void mostrarCondicion(){
    cout << "1. Ciudadana" << endl;
    cout << "2. Extranjero Visado" << endl;
    cout << "3. Extranjero Con Proteccion Internacional" << endl;
}

void mostrarTipoSangre(){
    cout << "1. A Positivo" << endl;
    cout << "2. A Negativo" << endl;
    cout << "3. B Positivo" << endl;
    cout << "4. B Negativo" << endl;
    cout << "5. O Positivo" << endl;
    cout << "6. O Negativo" << endl;
    cout << "7. AB Positivo" << endl;
    cout << "8. AB Negativo" << endl;

}

Sangre seleccionarTipoSangre(int opcion){
    switch(opcion){
        case 1: return aPositivo;
        case 2:  return aNegativo;
        case 3:  return bPositivo;
        case 4:  return bNegativo;
        case 5:  return oPositivo;
        case 6:  return oNegativo;
        case 7:  return abPositivo;
        case 8:  return abNegativo;
        default: return oPositivo;
    }
}

Condicion seleccionarCondicion(int opcion){
    switch(opcion){
        case 1: return Ciudadana;
        case 2: return ExtranjeroVisado;
        case 3: return ExtranjeroProteccionInternacional;
        default: return Ciudadana;
    }
}

int main(){
    int opcionCondicion;
    cout << "Seleccione su Condición: " << endl;
    mostrarCondicion();
    cin >> opcionCondicion;

    Condicion condicionSeleccionada = seleccionarCondicion(opcionCondicion);

    int opcionTipoSangre;
    cout << "Seleccione su Tipo de Sangre: " << endl;
    mostrarTipoSangre();
    cin >> opcionTipoSangre;

    Sangre sangreSeleccionada = seleccionarTipoSangre(opcionTipoSangre);

    int dia, mes, anio;

    cout << "Ingrese el dia: ";
    cin >> dia;

    cout << "Ingrese el mes: ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    Fecha fechaIngresada(dia, mes, anio);

    cout << "Condicion: " << condicionToString(condicionSeleccionada) << endl;
    cout << "Tipo de Sangre: " << sangreToString(sangreSeleccionada) << endl;
    cout << "Fecha: ";
    fechaIngresada.mostrarFecha();

    return 0;

}


