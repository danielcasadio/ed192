#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct vizinho{
    char nome[10];
    struct vizinho *prox;
}TVizinho;

typedef struct grafo{
    char nome[10];
    int idade;
    TVizinho *vizinho;
    struct grafo *prox;
}TGrafo;


