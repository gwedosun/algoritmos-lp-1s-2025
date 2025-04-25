#include <stdio.h>
#include <string.h>

#define TAM 25

int main(int argc, char* argv[]){
    char palavra1[] = "Conhecimento";
    char palavra2[] = {'C', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);
    printf("%c\n", palavra2[4]);

    // printf("Insira uma frase: ");
    // fgets(frase1, TAM, stdin); // stdin: entrada padrão do terminal.
    // printf("%s\n", frase1);

    printf("Insira uma palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);
    
    printf("Insira uma palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);

    if(strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais.\n");
    } else {
        printf("As palavras nao sao iguais.\n");
    };

    printf("Tamanho da primeira palavra eh: %d\n", strlen(palavra3));
    // toda string contém + o \0.

    for(int i = 0; i < strlen(palavra3); i++){
        printf("%c\n", palavra3[i]);
    };
    
    for(int i = strlen(palavra3) - 1; i >= 0; i--){
        fflush(stdin);
        printf("%c\n", palavra3[i]);
    };

    strcat(palavra3, palavra4);
    printf("Palavra 3 concatenada = %s", palavra3);


    return 0;
}