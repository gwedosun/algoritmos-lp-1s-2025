#include <stdio.h>

int main(int argc, char *argv[]){
    float altura;
    float peso;
    float imc;

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    printf("Seu IMC eh: %.2f\n", imc);

    return 0;
}
