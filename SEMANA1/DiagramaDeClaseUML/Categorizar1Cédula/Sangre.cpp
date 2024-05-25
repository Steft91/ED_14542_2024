#include "Sangre.h"

const char* sangreToString(Sangre tipo) {
    switch (tipo) {
        case aPositivo: return "A Positivo";
        case aNegativo: return "A Negativo";
        case bPositivo: return "B Positivo";
        case bNegativo: return "B Negativo";
        case oPositivo: return "O Positivo";
        case oNegativo: return "O Negativo";
        case abPositivo: return "AB Positivo";
        case abNegativo: return "AB Negativo";
        default: return "Desconocido";
    }
}
