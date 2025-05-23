#include <stdio.h>

int main() {
    int numero, i, eh_primo = 1; 
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        eh_primo = 0; 
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                eh_primo = 0;
                break;
            }
        }
    }

    if (eh_primo) {
        printf("%d é um número primo.\n", numero);
    } else {
        printf("%d não é um número primo.\n", numero);
    }

    return 0;
}
