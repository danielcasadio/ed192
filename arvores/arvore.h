#include <stdlib.h>
#include <stdio.h>

typedef struct arvore{
    int info;
    struct arvore *dir;
    struct arvore *esq;
}Tab;


Tab *inicializa(void);
Tab *cria(Tab* a, int info);
void imprime_erd(Tab *a);
Tab *insere(Tab *a, int info);
int vazia(Tab *a);
