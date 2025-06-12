#include <stdio.h>

#define MAX_TXT 256

int main(int argc, char *argv[]){

    char texto[MAX_TXT];

    FILE *sexta = fopen("sexta.txt", "r");

    if (sexta == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fgets(texto, MAX_TXT, sexta)){
        fprintf(stdout, "%s", texto);
    }

    fclose(sexta);

    return 0;
}