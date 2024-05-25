#include "Fecha.h"
#include <iostream>

Fecha::Fecha() {
    dia = 1;
    mes = 1;
    anio = 2000;
}

Fecha::Fecha(int dia, int mes, int anio) {
    this->dia = dia;
    this->mes = mes;
    this->anio = anio;
}

void Fecha::setDia(int dia) {
    this->dia = dia;
}

void Fecha::setMes(int mes) {
    this->mes = mes;
}

void Fecha::setAnio(int anio) {
    this->anio = anio;
}

int Fecha::getDia() const {
    return dia;
}

int Fecha::getMes() const {
    return mes;
}

int Fecha::getAnio() const {
    return anio;
}

void Fecha::mostrarFecha() const {
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}
