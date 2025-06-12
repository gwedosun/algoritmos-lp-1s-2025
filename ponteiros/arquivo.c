#include <stdio.h>

int main(int argc, char *argv[]){

    // ARQUIVO SEMPRE TEM PONTEIRO.
    // modos de abertura: 
    // r: leitura
    // w: criação e escrita (sobrescreve)
    // a: criação se não existir, adicionar ao final do arquivo.

    FILE *sexta = fopen("sexta.txt", "w");

    if (sexta == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(sexta, "Hello, World!\n");

    return 0;
}