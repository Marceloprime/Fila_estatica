//Autor: Marcelo Augusto dos Reis
#include <stdio.h>
#include <stdlib.h>

#include "fila_estatica.h"

//obs -1 eh considerado NULL no programa

int main(){
    FILA *f;
    f = create_fila();
    int a = 2;
    insercao(a,f);

    a = 3;
    insercao(a,f);

    a = 4;
    insercao(a,f);

    remocao(f);

    a = 5;
    insercao(a,f);

    impressao(f);

    return 0;
}