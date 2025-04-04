#include <stdio.h>

// Assistente de escolha e sugestão de filmes

int main() {
    char tipoFilme, genero, subtipo;

    printf("Escolha o tipo de filme:\n");
    printf("L, para leve; I, para intenso: ");
    scanf(" %c", &tipoFilme); 

    if (tipoFilme == 'L') {
        printf("\nVoce escolheu filme leve.\n");
        printf("Escolha o genero do filme:\n");
        printf("C, para comedia; A, para animacao: ");
        scanf(" %c", &genero);

        if (genero == 'C') {
            printf("\nO filme sugerido eh \"As Branquelas\".\n");
        } else if (genero == 'A') {
            printf("\nO filme sugerido eh \"O Rei Leao\".\n");
        } else {
            printf("\nOpcao invalida.\n");
        }

    } else if (tipoFilme == 'I') {
        printf("\nVoce escolheu filme intenso.\n");
        printf("\nEscolha o genero do filme:\n");
        printf("T, para terror; A, para acao: ");
        scanf(" %c", &genero);

        if (genero == 'T') {
            printf("P, para terror psicologico; S, para terror sobrenatural: ");
            scanf(" %c", &subtipo);

            if (subtipo == 'P') {
                printf("\nO filme sugerido eh \"O Silencio dos Inocentes\".\n");
            } else if (subtipo == 'S') {
                printf("\nO filme sugerido eh \"O Exorcista\".\n");
            } else {
                printf("\nOpcao invalida.\n");
            }

        } else if (genero == 'A') {
            printf("H, para super-herois; R, para realista: ");
            scanf(" %c", &subtipo);

            if (subtipo == 'H') {
                printf("\nO filme sugerido eh \"Batman: O Cavaleiro das Trevas\".\n");
            } else if (subtipo == 'R') {
                printf("\nO filme sugerido eh \"Mad Max: Estrada da Furia\".\n");
            } else {
                printf("\nOpcao invalida.\n");
            }

        } else {
            printf("\nOpcao invalida.\n");
        }

    } else {
        printf("\nOpcao invalida.\n");
    }

    return 0;
}
