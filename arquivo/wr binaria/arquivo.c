#include <stdio.h>
#include <stdlib.h>

FILE * abre_arquivo_escrita(char * nome){
    FILE * novo = fopen(nome, "wb");
    return novo;
}


void escreve_numero(int num, FILE * arquivo){
    if (arquivo){
        fwrite(&num, sizeof(int), 1, arquivo);
        printf("%d escrito no arquivo\n", num);
    } else { 
        printf("Arquivo nao encontrado\n");
    }
}

void le_arquivo(char * nome){
    FILE * leitura = fopen(nome, "rb");
    if(!leitura) return;
    fseek(leitura, 0, SEEK_SET);
    int n;
    while(fread(&n, sizeof(int), 1, leitura) != '\0'){
        printf("%d\n", n);
    }
    fclose(leitura);
}



int main(void){
    FILE * arq = abre_arquivo_escrita("numeros.dat");
    escreve_numero(1, arq);
    escreve_numero(4, arq);
    escreve_numero(3, arq);
    escreve_numero(11, arq);
    escreve_numero(90, arq);
    fclose(arq);
    le_arquivo("numeros.dat");
    return 0;

}