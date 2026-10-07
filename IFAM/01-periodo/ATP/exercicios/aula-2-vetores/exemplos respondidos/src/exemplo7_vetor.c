#include <stdio.h>

int main() {
  float vetor[5], soma = 0;

  for (int i = 0; i < 5; i++) {
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }

  printf("\n\n");

  float media = soma / 5;

  for (int i = 0; i < 5; i++) {
    printf("Nota %d: %.2f\n", i + 1, vetor[i]);
  }

  printf("\n\n");

  printf("Média da turma eh : %.2f", media);
  return 0;
}