#include <stdlib.h>
#include <stdio.h>

typedef struct ab {
    int info, cor;
    struct ab * esq, *dir;
}TAB;

typedef struct abb {
    int info;
    struct abb *esq, *dir;
}TABB;

typedef struct abbg {
    double area;
    int lados;
    int * dimensoes;
    struct abbg *esq, *dir;
}TABBG;

TAB * cria(TAB * a);
TAB * insere(TAB * a, int n);
int remove(TAB * a, int n);
void * imprime(TAB * a, int s);
TAB * copia(TAB * a);
TAB * espelho(TAB *a);
TAB * maior(TAB *a);
int igual(TAB *a1, TAB *a2);
void colore(TAB *arv); //
int ni(TAB *a); //quantidade de nohs internos

TABB * cria_b(TAB * a);
TABB * insere_b(TAB * a);
TABB * remove_b(TAB * a);
TABB * imprime_b(TAB * a);
TABB * maior_b(TABB *a);
TABB * menor_b(TABB *a);
TABB * retira_impares(TABB *a); //colore a arvore por niveis com cores 0 ou 1
int * mN(TABB *a, int N); //retorna elementos menores que N



