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

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %99s", alunos[i].nome);
        printf("Digite a turma do aluno %d: ", i + 1);
        scanf(" %c", &alunos[i].turma);
        printf("Digite a sala do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].sala);

        for (int j = 0; j < 4; j++) {
            scanf("%f", &alunos[i].notas[j]);
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