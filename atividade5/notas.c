#include <stdio.h>
#include <stdlib.h> // Necessário para malloc e free

int main(int argc, char* argv[]) {

    int numeroDeAlunos = 0;

    printf("Insira o numero de alunos: ");
    scanf("%d", &numeroDeAlunos);

    float* notas = (float*) malloc(numeroDeAlunos * sizeof(float));
    if (notas == NULL) {
        printf("Erro de alocacao de memoria.\n");
        return 1;
    }

    for (int i = 0; i < numeroDeAlunos; i++) {
        do {
            printf("\nDigite a nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] > 10.0 || notas[i] < 0.0) {
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
            }
        } while (notas[i] > 10.0 || notas[i] < 0.0);
    }

    free(notas);
    return 0;
}