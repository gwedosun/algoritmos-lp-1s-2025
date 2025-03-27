#include <stdio.h>

int main(int argc, char* argv) {
    int idade;
    double altura;
    double peso;
    // printf("Digite a idade: ");
    // scanf("%d", &idade);
    // printf("Digite a altura: ");
    // scanf("%f", &altura);
    // printf("Digite o peso: ");
    // scanf("%f", &peso);
    // printf("A idade eh %d\n", idade);
    // printf("A altura eh %.2f\nO peso eh %.2f", altura, peso);


    // calculando imc
    double imc = peso / (altura * altura);
    printf("O IMC eh %.2f\n", imc);
    return 0;

}