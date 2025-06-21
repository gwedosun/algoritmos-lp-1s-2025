#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TXT 256
int main(int argc, char *argv[]) {
    
    srand(unsigned(time(NULL)));

    if(argc != 4){
        printf("Eh necesssario informar todos os argumentos.\n");
        return 1;

    }
    FILE *log = fopen("log.txt", "a");
    if(log == NULL){
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int esperado = atoi(argv[3]);

    if(min >= max){
        fprintf(log, "O valor minimo deve ser menor que o valor maximo.\n");
        return 1;
    }

if(esperado < min || esperado > max){
    fprintf(log, "Argumento invalido.\n");
    fclose(log);
    return 1;
}

    srand(time(NULL));
    int numSorteado = min + rand() % (max - min + 1);
    fprintf(log, "Valor minimo: %d\n Valor maximo: %d\n Valor sorteado: %d\n Resultado: %s\n", min, max, numSorteado, (numSorteado == esperado) ? "Sorteado" : "Não sorteado\n\n\n");

    fclose(log);

    if(numSorteado == esperado){
        printf("Parabens, voce acertou o numero sorteado!\n");
    } else {
        printf("Nao foi dessa vez! O numero sorteado foi %d.\n", numSorteado);
    }

    return 0;
}