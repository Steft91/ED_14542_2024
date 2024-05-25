#include <iostream>
#include "Carro.h"

int main(){
    Carro unCarro("Ford", "Ranger Raptor", 2023, 0);

    unCarro.acelerar(20);
    unCarro.tocarBocina();
    unCarro.mostrarInformacion();

    return 0;
}