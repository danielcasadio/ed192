#include "l1.h"

TAB * cria(TAB * a){
    return NULL;
}
TAB * insere(TAB * a, int n){
    if (!a){
        TAB * nova = (TAB *)malloc(sizeof(TAB));
        nova->info = n;
        nova->dir, nova->esq = NULL;
        nova->cor = -1;
        return nova;
    }
    if(n > a->info) return insere(a->esq, n);
    else return insere(a->dir, n);
    return a;
}
int remove(TAB * a, int n){
    if(!a) return -1;
    if(a->info > n) return remove(a->esq);
    else if(a->info < n) return remove(a->dir);
    else{
        if(a->esq){
            TAB * aux = a->esq->dir;
            TAB * temp;
            while(aux->dir) temp = aux; aux = aux->dir;
            a = aux;
            
        }
    }
}
void * imprime(TAB * a, int s){
    // char * tabs = "--";
    // if(!a) {
    //     printf("Arvore vazia\n");
    //     return;
    // }
    // if(!a->esq && !a->dir) {
    //     for(int i = 0; i < s;i++)printf("%s", tabs);
    //     printf("%d\n", a->info);
    // } else if(!a->dir) imprime(a->esq, s+1);
    // else imprime(a->dir)

    if(!a) return;
    imprime(a->esq);
    printf("%d -", a->info);
    imprime(a->dir);
}
TAB * copia(TAB * a){

}
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