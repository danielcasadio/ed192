#include "arvore.h"

Tab *inicializa(void){
    return NULL;
}
Tab *cria(Tab* a, int info){
    a = (Tab*)malloc(sizeof(Tab));
    a->info = info;
    a->esq = NULL;
    a->dir = NULL;
    return a;
}

void imprime_erd(Tab *a){
    if(vazia(a)) return;
    imprime_erd(a->esq);
    printf("%d - ", a->info);
    imprime_erd(a->dir);
}


//corrigir inserção, não funciona
Tab *insere(Tab *a, int info){
    if(vazia(a)) return cria(a, info);
    if(a->info < info){
        return insere(a->esq, info);
    } else {
        return insere(a->dir, info);
    }
}
int vazia(Tab *a){
    return((int)a);
}