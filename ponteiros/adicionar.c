#include <stdio.h>

#define MAX_TXT 256

int main(int argc, char *argv[]){

    char texto[MAX_TXT];
    FILE *arq = fopen(argv[1], "a");

    if (arq == NULL){
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while(fgets(texto, MAX_TXT, arq)){
        fprint(stdout, texto);
    }

    fclose(arq);
    return 0;
}