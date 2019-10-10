#include "grafo.h"

TGrafo * insere_vertice(TGrafo *g, char *nome, int idade){
    TGrafo *vertice = (TGrafo*)malloc(sizeof(TGrafo));
    strcpy(vertice->nome, nome);
    vertice->idade = idade;
    vertice->prox = g;
    vertice->vizinho = NULL;
    return vertice;
}

TGrafo *busca_vertice(TGrafo *vertice, char *nome){
    if(!vertice)return NULL;
    while((vertice != NULL) && (strcmp(vertice->nome, nome) != 0)) vertice = vertice->prox;
    return vertice;
}

TVizinho *busca_vizinho(TVizinho *vizinho, char *nome){
    while((vizinho != NULL) && (strcmp(vizinho->nome, nome) !=0)) vizinho = vizinho->prox;
    return vizinho;
}

void insere_aresta(TGrafo *g, char *origem, char*destino){
    TGrafo *vertice = busca_vertice(g, origem);
    TVizinho *vizinho = (TVizinho*)malloc(sizeof(TVizinho));
    strcpy(vizinho->nome, destino);
    vizinho->prox = vertice->vizinho;
    vertice->vizinho = vizinho;
}

void imprime(TGrafo *g){
    while(g != NULL){
        printf("Nome: %s Idade: %d\n", g->nome, g->idade);
        printf("Segue: ");
        TVizinho *vizinho = g->vizinho;
        while(vizinho != NULL){
            printf("%s ", vizinho->nome);
            vizinho = vizinho->prox;
        }
        printf("\n");
        g = g->prox;
    }
}

int main(void){
    TGrafo *g = NULL;
    g = insere_vertice(g, "Joao", 25);
    g = insere_vertice(g, "Ana", 23);
    g = insere_vertice(g, "Caio", 20);
    g = insere_vertice(g, "Pedro", 20);
    g = insere_vertice(g, "Jane", 30);
    g = insere_vertice(g, "Marcos", 19);
    g = insere_vertice(g, "Bruna", 23);
    g = insere_vertice(g, "Felipe", 20);
    g = insere_vertice(g, "Renata", 35);

    insere_aresta(g, "Ana", "Joao");
    insere_aresta(g, "Ana", "Jane");

    insere_aresta(g, "Joao", "Ana");
    insere_aresta(g, "Joao", "Pedro");
    insere_aresta(g, "Joao", "Caio");

    insere_aresta(g, "Pedro", "Caio");
    insere_aresta(g, "Pedro", "Jane");
    insere_aresta(g, "Pedro", "Bruna");
    insere_aresta(g, "Pedro", "Marcos");

    insere_aresta(g, "Jane", "Pedro");
    insere_aresta(g, "Jane", "Marcos");
    insere_aresta(g, "Jane", "Bruna");

    insere_aresta(g, "Marcos", "Felipe");
    insere_aresta(g, "Marcos", "Renata");

    insere_aresta(g, "Bruna", "Renata");

    insere_aresta(g, "Felipe", "Renata");
    insere_aresta(g, "Felipe", "Marcos");

    imprime(g);
}