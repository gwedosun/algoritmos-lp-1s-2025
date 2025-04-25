#include <stdio.h>

int main(int argc, char* argv[]){

    int numeroDeAlunos = 0;

    printf("Insira o numero de alunos: ");
    scanf("%d", &numeroDeAlunos);

    float notas[numeroDeAlunos];

    for(int i = 0; i < numeroDeAlunos; i++){
        do {
            printf("\nDigite a nota do aluno %d: ");
            scanf("%f", &notas[i]);
        } while (notas[i] > 10.0 || notas[i] < 0.0);
        
    };

    return 0;
};

