#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    
    int metros;

    printf("Insira o valor em metros: ");
    // fflush(stdin);
    scanf("%d\n", &metros);

    // decimetros
    float decimetros = metros / 10.0;
    printf("\nO valor em decimetros eh: %.2f", decimetros);

    // centimetros
    float centimetros = metros / 100.0;
    printf("\nO valor em centimetros eh: %.2f", centimetros);

    // milimetros
    float milimetros = metros / 1000.0;
    printf("\nO valor em milimetros eh: %.3f", milimetros);

    return 0;
}