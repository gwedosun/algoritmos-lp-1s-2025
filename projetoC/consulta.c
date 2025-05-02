#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONSULTAS 100

    typedef struct {
        int id;
        char paciente[50];
        char dataNascimento[15];
        char especialidade[30];
        char data[20];
        char status[20];
    } consulta;

    consulta consultas[MAX_CONSULTAS];
    int contador = 0;

    void criarConsulta() {
        if (contador < MAX_CONSULTAS) {
            consultas[contador].id = contador + 1;
            printf("Nome do paciente: ");
            scanf(" %[^\n]", consultas[contador].paciente);
            printf("Data da consulta: ");
            scanf(" %[^\n]", consultas[contador].data);
            strcpy(consultas[contador].status, "Agendada.");
            contador++;
            printf("Consulta agendada com sucesso!\n");
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
                printf("Novo nome do paciente: ");
                scanf(" %[^\n]", consultas[i].paciente);
                printf("Nova data de nascimento: ");
                scanf(" %[^\n]", consultas[i].dataNascimento);
                printf("Nova especialidade: ");
                scanf(" %[^\n]", consultas[i].especialidade);
                printf("Nova data da consulta: ");
                scanf(" %[^\n]", consultas[i].data);
                printf("Status da consulta (Agendada/Finalizada): ");
                scanf(" %[^\n]", consultas[i].status);
    
                printf("Consulta atualizada com sucesso!\n");
                return;
            }
        }
        printf("Consulta não encontrada.\n");
    }

    void excluirConsulta() {
        int id;
        printf("Digite o ID da consulta a ser excluída: ");
        scanf("%d", &id);
    
        for (int i = 0; i < contador; i++) {
            if (consultas[i].id == id) {
                for (int j = i; j < contador - 1; j++) {
                    consultas[j] = consultas[j + 1];  // Move os elementos
                }
                contador--;  // Reduz o número de consultas
                printf("Consulta excluída com sucesso!\n");
                return;
            }
        }
        printf("Consulta não encontrada.\n");
    }
    

    void listarConsultas() {
        printf("\nLista de Consultas Medicas:\n");
        for (int i = 0; i < contador; i++) {
            printf("ID: %d | Paciente: %s | Data: %s | Status: %s\n",
                consultas[i].id, consultas[i].paciente, consultas[i].data, consultas[i].status);
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
            printf("Escolha uma opção: ");
            scanf("%d", &opcao);
    
            switch(opcao) {
                case 1: criarConsulta(); break;
                case 2: listarConsultas(); break;
                case 3: atualizarConsulta(); break;
                case 4: excluirConsulta(); break;
                case 5: printf("Saindo do programa...\n"); break;
                default: printf("Opção inválida.\n");
            }
        } while(opcao != 5);
    }
    

    int main() {
        menuPrincipal();
        return 0;
    }
