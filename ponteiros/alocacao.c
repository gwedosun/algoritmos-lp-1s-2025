#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int x;
    float y;
} Ponto;

int main(int argc, char *argv[]){

    int qtdLinhas = 0;
    int x;
    float y;
    Ponto *numeros;

    FILE *dados = fopen("dados_regressao.csv", "r");

    if (dados == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(dados, "%d, %f", &x, &y) != EOF){
        qtdLinhas++;
    }

    numeros = malloc(qtdLinhas * sizeof(Ponto));

    printf("Quantidade de linhas: %d\n", qtdLinhas);

    if(numeros != NULL){
        int i = 0;
        fseek(dados, 0, SEEK_SET);
        while (fscanf(dados, "%d, %f", &x, &y) != EOF){
            numeros[i].x = x;
            numeros[i].y = y;
            i++;
        }
    }

    for(int i = 0; i < qtdLinhas; i++){
        printf("%d, %.2f\n", numeros[i].x, numeros[i].y);
    }

    fclose(dados);

    return 0;
}