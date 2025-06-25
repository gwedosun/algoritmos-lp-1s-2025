#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 100

int compare_string(const void *a, const void *b){
    return strcmp(*(char **)a, *(char **)b);
}

int compare_float(const void *a, const void *b){
    float fa = *(float *)a;
    float fb = *(float *)b;
    if (fa < fb) return -1;
    if (fa == fb) return 0;
    return 1;
}

char **ler_strings(FILE *fp, int *n){
    char **linhas = NULL;
    char buffer[MAX_LINE];
    int count = 0;

    while(fgets(buffer, MAX_LINE, fp) != NULL){
        linhas = realloc(linhas, sizeof(char *) * (count + 1));
        buffer[strcspn(buffer, "\n")] = '\0';
        linhas[count] = malloc(strlen(buffer) + 1);
        strcpy(linhas[count], buffer);
        count++;
    }

    *n = count;
    return linhas;
}

float *ler_floats(FILE *fp, int *n){
    float *numeros = NULL;
    float valores;
    int count = 0;

    while(fscanf(fp, "%f", &valores) == 1){
        numeros = realloc(numeros, sizeof(float) * (count + 1));
        numeros[count++] = valores;
    }

    *n = count;
    return numeros;
}

void gerar_nome_saida(const char *entrada, char *saida){
    char *ponto = strrchr(entrada, '.');
    if(ponto){
        strncpy(saida, entrada, ponto - entrada);
        saida[ponto - entrada] = '\0';
        strcat(saida, "_sorted.txt");
    } else {
        strcpy(saida, entrada);
        strcat(saida, "_sorted.txt");
    }
}

void escrever_strings(FILE *fp, char **dados, int n){
    for(int i = 0; i < n; i++){
        fprintf(fp, "%s\n", dados[i]);
        free(dados[i]);
    }
    free(dados);
}

void escrever_float(FILE *fp, float *dados, int n){
    for(int i = 0; i < n; i++){
        fprintf(fp, "%.2f\n", dados[i]);
    }
    free(dados);
}

int main(int argc, char * argv[]){
    if(argc != 3){
        fprintf(stderr, "Use o formato: -s ou -f nome-do-arquivo.txt\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[2], "r");
    if(!fp){
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char saida_nome[256];
    gerar_nome_saida(argv[2], saida_nome);
    FILE *saida = fopen(saida_nome, "w");
    if (!saida) {
        perror("Erro ao criar arquivo de saida");
        fclose(fp);
        return 1;
    }

    if(strcmp(argv[1], "-s") == 0){
        int n;
        char **linhas = ler_strings(fp, &n);
        qsort(linhas, n, sizeof(char *), compare_string);
        escrever_strings(saida, linhas, n);
    } else if(strcmp(argv[1], "-f") == 0){
        int n;
        float *numeros = ler_floats(fp, &n);
        qsort(numeros, n, sizeof(float), compare_float);
        escrever_float(saida, numeros, n);
    } else {
        fprintf(stderr, "Argumento invalido! Use -s para strings ou -f para float.\n");
        fclose(fp);
        fclose(saida);
        return 1;
    }
    
    fclose(fp);
    fclose(saida);
    return 0;
}