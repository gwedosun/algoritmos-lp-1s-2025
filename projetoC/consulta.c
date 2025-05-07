#include <stdio.h> // biblioteca padrão
#include <stdlib.h> // exit()
#include <string.h> // strings 

// limitador de consultas no "banco"
#define MAX_CONSULTAS 50 


// estrutura 
typedef struct {
    int id;
    char paciente[50];
    char dataNascimento[15];
    char especialidade[30];
    char data[20];
    char status[20];
} consulta;


// definição de variaveis
consulta consultas[MAX_CONSULTAS];
int contador = 0;


// funçao para escolha da especialidade usando switch-case
void escolherEspecialidade(char especialidade[]) {
    int opcao;
    printf("\nEscolha a especialidade:\n");
    printf("1. Pediatria\n2. Endocrinologia\n3. Dermatologia\n4. Ginecologia\n5. Nutrologia\n6. Cardiologia\n7. Otorrinolaringologia\n");
    printf("opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1: strcpy(especialidade, "Pediatria"); break;
        case 2: strcpy(especialidade, "Endocrinologia"); break;
        case 3: strcpy(especialidade, "Dermatologia"); break;
        case 4: strcpy(especialidade, "Ginecologia"); break;
        case 5: strcpy(especialidade, "Nutrologia"); break;
        case 6: strcpy(especialidade, "Cardiologia"); break;
        case 7: strcpy(especialidade, "Otorrinolaringologia"); break;
        default: strcpy(especialidade, "Especialidade nao definida");
    }
}


// inicio das funções do menu principal
void criarConsulta() {
    if (contador < MAX_CONSULTAS) {
        consultas[contador].id = contador + 1;
        printf("Nome do paciente: ");
        scanf(" %[^\n]", consultas[contador].paciente);
        printf("Data de nascimento: ");
        scanf(" %[^\n]", consultas[contador].dataNascimento);
        escolherEspecialidade(consultas[contador].especialidade); 
        printf("Data da consulta: ");
        scanf(" %[^\n]", consultas[contador].data);
        strcpy(consultas[contador].status, "Agendada.");
        contador++;
        printf("Consulta agendada com sucesso! O seu ID da consulta eh %d.\n", consultas[contador - 1].id);
    } else {
        printf("Limite de consultas atingido.\n");
    }
}

void atualizarConsulta() {
    int id;
    printf("Digite o ID da consulta a ser atualizada: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (consultas[i].id == id) {
            printf("Novo nome do paciente: (Caso nao deseje alterar, repita o nome.)");
            scanf(" %[^\n]", consultas[i].paciente);
            printf("Nova data de nascimento: (Caso nao deseje alterar, repita a data.)");
            printf("Novo nome do paciente: (Caso nao deseje alterar, repita o nome.");
            scanf(" %[^\n]", consultas[i].paciente);
            printf("Nova data de nascimento: (Caso nao deseje alterar, repita a data.");
            scanf(" %[^\n]", consultas[i].dataNascimento);
            escolherEspecialidade(consultas[i].especialidade);
            printf("Nova data da consulta: ");
            scanf(" %[^\n]", consultas[i].data);
            printf("Status da consulta (Agendada/Reagendada): ");
            scanf(" %[^\n]", consultas[i].status);

            printf("Consulta atualizada com sucesso!\n");
            return;
        }
    }
    printf("Consulta nao encontrada.\n");
}

void excluirConsulta() {
    int id;
    printf("Digite o ID da consulta a ser excluida: ");
    scanf("%d", &id);

    for (int i = 0; i < contador; i++) {
        if (consultas[i].id == id) {
            for (int j = i; j < contador - 1; j++) {
                consultas[j] = consultas[j + 1]; 
            }
            contador--;  // reduz o número de consultas
            printf("Consulta excluida com sucesso!\n");
            return;
        }
    }
    printf("Consulta nao encontrada.\n");
}

void listarConsultas() {
    printf("\nLista de consultas marcadas:\n");
    for (int i = 0; i < contador; i++) {
        printf("ID: %d | Paciente: %s | Data de Nascimento: %s | Especialidade: %s | Data: %s | Status: %s\n",
            consultas[i].id, 
            consultas[i].paciente, 
            consultas[i].dataNascimento, 
            consultas[i].especialidade, 
            consultas[i].data, 
            consultas[i].status);
    }
}

void menuPrincipal() {
    int opcao;
    do {
        printf("\nMenu Principal\n");
        printf("1. Criar Consulta\n");
        printf("2. Listar Consultas\n");
        printf("3. Atualizar Consulta\n");
        printf("4. Excluir Consulta\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: criarConsulta(); break;
            case 2: listarConsultas(); break;
            case 3: atualizarConsulta(); break;
            case 4: excluirConsulta(); break;
            case 5: printf("Saindo do programa...\n"); break;
            default: printf("Opcao invalida.\n");
        }
    } while (opcao != 5);
}

int main() {
    menuPrincipal(); // chama a função principal
    return 0;
}
