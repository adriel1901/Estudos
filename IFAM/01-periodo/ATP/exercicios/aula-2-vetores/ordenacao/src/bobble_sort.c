#include <stdio.h>

int main() {
  int vetor[] = {5, 1, 4, 2};
  int n = 4, aux;

  for (int i = 0; i < n; i++) {
    for (int y = 0; y < n - i - 1; y++) {
      if (vetor[y] > vetor[y + 1]) {
        aux = vetor[y];
        vetor[y] = vetor[y + 1];
        vetor[y + 1] = aux;
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    printf("%d ", vetor[i]);
  }
}