#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void arquivos(char * entrada, char * saida){
    FILE * ent = fopen(entrada, "r");
    FILE * sai = fopen(saida, "w+");
    char palavra[20];
    char aux[20];
    while(fscanf(ent, "%s", palavra) != EOF){
        printf("%d - %s | %s \n", strcmp(palavra, aux), palavra, aux);
        if(strcmp(palavra, aux)) fprintf(sai, "%s%c", palavra, ' ');
        strcpy(aux, palavra);
    }
    fclose(ent);
    fclose(sai);
}

int main (){
    arquivos("entrada.txt", "saida.txt");
    return 1;
}