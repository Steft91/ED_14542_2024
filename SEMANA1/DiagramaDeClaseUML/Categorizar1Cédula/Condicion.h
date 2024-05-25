#ifndef CONDICION_H
#define CONDICION_H

#include <string>
#include <vector>

enum Condicion{
    Ciudadana,
    ExtranjeroVisado,
    ExtranjeroProteccionInternacional

};

const char* condicionToString(Condicion cond);

#endif
