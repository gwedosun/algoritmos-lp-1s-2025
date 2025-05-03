# Explicação básica do código

## 1. Inclusão de bibliotecas padrão:
a) <stdio.h>, para comandos de entrada e saída;  
b) <stdlib.h>, para função exit();  
c) <string.h>, para manipulação de strings.  

## 2. Definição de limite:
a) #define MAX_CONSULTAS 50: máximo de 50 consultas armazenadas no programa.  

## 3. Dados:
a) Toda consulta tem ID, nome do paciente, data de nascimento, especialidade médica,
data da consulta e status.  
b) O "typedef struct" funciona como um "objeto" em JS, ou seja, apresenta as informações
guardadas nessa estrutura que chamamos no código de "consulta".

## 4. Vetor chamado "consultas" que guarda todas as consultas criadas no programa.

## 5. Variável "contador" guarda quantas consultas foram criadas.

## 6. Função "menu":
a) Exibe o menu principal para o usuário escolher no terminal;  
b) Usuário escolhe entre as opções ou finaliza o programa;  
c) O programa chama a função escolhida por meio do "switch".  

## 7. Funções principais:
a) Criar consulta:  
- Atribui ID automático à consulta;  
- Lê o nome do paciente e a data da consulta;  
- Define o status como "Agendada";  
- 1++ no contador de consultas.  

b) Atualizar consulta:  
- Pede ao usuário o ID da consulta a ser atualizada;  
- Encontra o ID no vetor;  
- Se encontrado, todos os campos são atualizados;  
- Se não encontrado, avisa o usuário.  

c) Excluir consulta:  
- Pede ao usuário o ID da consulta a ser excluída;  
- Encontra o ID no vetor;  
- Se encontrado, move todos os elementos uma posição para "trás" e 1-- no contador;  
- Se não encontrado, avisa o usuário.  

d) Listas consultas:  
- Percorre todas as consultas criadas;  
- Imprime informações básicas: ID, nome do paciente, data da consulta e status;  

## 8. Detalhes importantes:  
a) void: função que não retorna nenhum valor.  
b) scanf(" %[^\n", variavel]):  
- %[] = lê um conjunto de caracteres;  
- ^\n = continua lendo até o usuário apertar Enter;  
- Difere-se do fgets pois este captura o Enter e o scanf(" %[^\n]) não, portanto, exige
um espaço para evitar bugs no programa.  


