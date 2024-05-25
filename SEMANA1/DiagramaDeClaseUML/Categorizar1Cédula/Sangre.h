#ifndef SANGRE_H
#define SANGRE_H
enum Sangre{
    aPositivo,
    aNegativo,
    bPositivo,
    bNegativo,
    oPositivo,
    oNegativo,
    abPositivo,
    abNegativo
};

const char* sangreToString(Sangre tipo);

#endif
