#include <stdio.h>

int main() {
  float notas[10];
  int i;

  for (i = 0; i < 10; i++) {
    printf("Digite o numero: %d\n", i + 1);
    scanf("%f", &notas[i]);
  }

  for (int i = 0; i < 10; i++) {
    printf("vetor %d : %.2f\n", i + 1, notas[i]);
  }

  return 0;
}