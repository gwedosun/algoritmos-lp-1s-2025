#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    float y;
} Ponto;

int main(int argc, char *argv[]){

    int qtdLinhas = 0;
    int x;
    float y;
    Ponto *numeros;
    int soma_x = 0;
    float soma_y = 0.0, media_x = 0.0, media_y = 0.0;
    float inclinacao_dividendo = 0.0, inclinacao_divisor = 0.0;

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
        soma_x = 0;
        soma_y = 0.0;
        while (fscanf(dados, "%d, %f", &x, &y) != EOF){
            numeros[i].x = x;
            numeros[i].y = y;
            soma_x += x;
            soma_y += y;
            i++;
        }
        media_x = (float)soma_x / qtdLinhas;
        media_y = soma_y / qtdLinhas;
    }

    for(int i = 0; i < qtdLinhas; i++){
        inclinacao_dividendo += (numeros[i].x - media_x) * (numeros[i].y - media_y);
        inclinacao_divisor += (numeros[i].x - media_x) * (numeros[i].x - media_x);
    }

    float a = inclinacao_dividendo / inclinacao_divisor;
    float b = media_y - a * media_x;
    printf("%.2fx + %.2f\n", a, b);

    fclose(dados);

    return 0;
}