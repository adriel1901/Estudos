#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct registro {
    char nome[100];
    char turma;
    int sala;
    float notas[4];
} t_aluno;

int main(void) {
    t_aluno alunos[3];
    t_aluno aux;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %99[^\n]", alunos[i].nome);
        printf("Digite a turma do aluno %d: ", i + 1);
        scanf(" %c", &alunos[i].turma);
        printf("Digite a sala do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].sala);

        for (int j = 0; j < 4; j++) {
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (strcmp(alunos[j].nome, alunos[j+1].nome) > 0) {
                strcpy(aux.nome, alunos[j].nome);
                strcpy(alunos[j].nome, alunos[j+1].nome);
                strcpy(alunos[j+1].nome, aux.nome);
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        float soma = 0;

        for (int j = 0; j < 4; j++) {
            soma += alunos[i].notas[j];
        }

        printf("Nome: %s\n", alunos[i].nome);
        printf("Turma: %c\n", alunos[i].turma);
        printf("Sala: %d\n", alunos[i].sala);
        printf("Media: %.2f\n", soma / 4);
        for (int j = 0; j < 4; j++) {
            printf("%.2f\n", alunos[i].notas[j]);
        }
    }
    return 0;
}