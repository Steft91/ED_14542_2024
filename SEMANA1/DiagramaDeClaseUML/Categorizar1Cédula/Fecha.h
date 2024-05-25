#ifndef FECHA_H
#define FECHA_H

#include <string>

class Fecha{
private:
    int dia;
    int mes;
    int anio;

public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    int getDia() const;
    int getMes() const;
    int getAnio() const;

    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);

    void mostrarFecha()const;

};

#endif
