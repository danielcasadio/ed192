#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

int main(void){
    Tab *raiz;
    raiz = inicializa();
    raiz = cria(raiz, 5);
    printf("%d", raiz->info);
    insere(raiz, 8);
    insere(raiz, 1);
    printf("%d", raiz->esq->info);
    printf("%d", raiz->dir->info);
    imprime_erd(raiz);
}