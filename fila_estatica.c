#include "fila_estatica.h"

//Criacao da fila
FILA *create_fila(){
    FILA *f;
    f = (FILA*) malloc (sizeof(FILA));
    if(f == NULL){
        return NULL;
    }
    f->inicio = -1;
    f->fim = -1;
    return f;
}
///////////////////////////////////
//Funcoes auxiliares
int fila_vazia(FILA *f){
    if(f->inicio == -1){
        return 1;//A fila estar vazia
    }
    else{
        return 0;
    }
}

int fila_cheia(FILA *f){
    if(f->fim == MAX){
        return 1;//A fila estar cheia
    }
    else{
        return 0;
    }
}

int shift(FILA *f){
    if(fila_vazia(f)){
        printf("Fila vazia!\n");
        return 1;
    }

    int i;

    for(i = 0; i < MAX-1;i++){
        f->vector[i] = f->vector[i+1];
    }

    return 0;
}
///////////////////////////////////
int insercao(INFO info, FILA *f){
    if(fila_cheia(f)){
        printf("Fila cheia!\n");
        return 1;
    }
    else if(fila_vazia(f)){
        f->inicio++;
        f->fim++;
        f->vector[f->fim] = info;
    }
    else{
        f->fim++;
        f->vector[f->fim] = info;
    }
    return 0;
}
///////////////////////////////////
int remocao(FILA *f){
    if(fila_vazia(f)){
        printf("Fila vazia!\n");
        return 1;
    }
    else{
        f->vector[f->inicio] = -1;
        f->fim--;
        if(f->fim == -1){
            f->inicio = -1;
        }
        shift(f);
    }
    return 0;
}
///////////////////////////////////
//Impressao
void impressao(FILA *f){
    if(fila_vazia(f)){
        printf("Fila vazia\n");
        return;
    }

    int i;

    printf("Fila:\n");
    for(i = f->inicio; i <= f->fim;i++){
        if(f->vector[i] == -1){
            continue;
        }
        printf("[%d] = %d\n",i,f->vector[i]);
    }
}
///////////////////////////////////