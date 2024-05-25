#include "Condicion.h"

const char* condicionToString(Condicion cond) {
    switch (cond) {
        case Ciudadana: return "Ciudadana";
        case ExtranjeroVisado: return "Extranjero Visado";
        case ExtranjeroProteccionInternacional: return "Extranjero Con Proteccion Internacional";
        default: return "Desconocida";
    }
}
