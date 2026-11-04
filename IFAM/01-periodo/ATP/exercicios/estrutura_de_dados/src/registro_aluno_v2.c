#include <stdio.h>
#include <stdlib.h>

struct registro {
    char nome[100];
    char turma;
    int sala;
    float notas[4];
} aluno;

int main() {

    fgets(aluno.nome, 40, stdin);
    scanf(" %c", &aluno.turma);
    scanf("%d", &aluno.sala);

    float soma = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%f", &aluno.notas[i]);
        soma += aluno.notas[i];
    }

    printf("Nome: %s\n", aluno.nome);
    printf("Turma: %c\n", aluno.turma);
    printf("Sala:%d\n", aluno.sala);
    float media = soma / 4;
    printf("Media: %.2f\n", media);
    for (int i = 0; i < 4; i++) {
        printf("%.2f\n", aluno.notas[i]);
    }
    return 0;
}