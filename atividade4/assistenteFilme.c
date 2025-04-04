#include <stdio.h>

// assistente de escolha e sugestão de filmes.

int main(int argc, char *argv[]){
    char escolha;
    float leve, intenso;

    printf("Escolha o tipo de filme: ");
    printf("L, para leve; I, para intenso. ");

    scanf("%c", &escolha); 

    printf("\nVoce escolheu o tipo de filme: %c\n", escolha);
    getchar(); 
    
    printf("Escolha o genero do filme: ");
    printf("C, para comedia; A, para animação.");
    scanf("%c", &escolha);
    getchar();
        if (escolha == 'L'){
            if (escolha == 'C'){
                printf("O filme sugerido eh As Branquelas.");
            } else if (escolha == 'A'){
                printf("O filme sugerido eh O Rei Leao.");
            } else {
                printf('Opcao invalida');
            };

    printf("Escolha o genero do filmes: ");
    printf("T, para terror; A, para acao. ");
    scanf("%c", &escolha);
    getchar();
        if (escolha == 'I'){
            if (escolha == 'T'){
                printf("P para terror psicologico; S para terror sobrenatural");
                scanf("%c, escolha");
                getchar();
                if (escolha == 'P'){
                    printf("O filme sugerido eh O Silencio dos Inocentes.");
                    } else if (escolha == 'S'){
                        printf("O filme sugerido eh O Exorcista.");
                        } else {
                            printf("Opcao invalida.");
                        };
            if (escolha == A){
                printf("H, para super-herois; R, para realista.");
                scanf("%c", %escolha);
                getchar();
                    if (escolha == H){
                        printf("O filme sugerido eh O Cavaleiro das Trevas.");
                        } else if (escolha == R){
                            printf("O filme sugerido eh Mad Max: Estrada da Furia.");
                            } else {
                                printf("Opcao invalida.");
                                };
            };


    return 0;
}