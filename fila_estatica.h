#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef int INFO;

typedef struct{
    INFO vector[MAX];
    int inicio;
    int fim;
}FILA;

//obs -1 eh considerado NULL no programa
//Funcoes
FILA *create_fila();
int insercao(INFO info, FILA *f);
void impressao(FILA *f);
int remocao(FILA *f);