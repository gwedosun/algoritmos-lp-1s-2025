#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    int numero1;
    int numero2;

    printf("Insira um numero: ");
    scanf("%d", &numero1);

    printf("Insira outro numero: ");
    scanf("%d", &numero2);

    int itemA = numero1 + numero2;
    int itemB = numero1 * (int)pow(numero2, 2);
    int itemC = (int)pow(numero1, 2);


    // não esquecer especificador de formatos!!!!!!!!!!!
    printf("\nAs respostas sao: %d, %d, %d\n", itemA, itemB, itemC);

    return 0;
}