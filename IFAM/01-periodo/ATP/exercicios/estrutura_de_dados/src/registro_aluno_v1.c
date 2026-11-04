#include <stdio.h>
#include <stdlib.h>

struct registro {
    char nome[100];
    char turma;
    int sala;
    float n1, n2, n3, n4;
}aluno;

int main() {
    fgets(aluno.nome, 40, stdin);
    scanf(" %c", &aluno.turma);
    scanf("%d", &aluno.sala);
    scanf("%f %f %f %f", &aluno.n1, &aluno.n2, &aluno.n3, &aluno.n4);

    printf("Nome: %s\n", aluno.nome); 
    printf("Turma: %c\n", aluno.turma);
    printf("Sala:%d\n", aluno.sala);
    printf("%.2f %.2f %.2f %.2f", aluno.n1, aluno.n2, aluno.n3, aluno.n4);
    return 0; 
}