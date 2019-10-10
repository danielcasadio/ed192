#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void media(char * entrada, char * saida){
    FILE * ent = fopen(entrada, "r");
    FILE * sai = fopen(saida, "w+");
    char palavra;
    while(fscanf(ent, "%c", palavra) != EOF){
        printf("%c\n", palavra);
    }
    fclose(ent);
    fclose(sai);
}

int main(){
    media("ent1.txt", "sai1.txt");
    return 1;
}
    