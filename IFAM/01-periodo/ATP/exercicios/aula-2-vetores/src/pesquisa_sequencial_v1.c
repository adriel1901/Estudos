#include <stdbool.h>
#include <stdio.h>

int main() {
  int vetor[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int num, conta = 0, achou = 0;

  printf("Digite o numero:\n");
  scanf("%d", &num);

  while (!achou && conta < 10) {
    if (num == vetor[conta]) {
      achou = 1;
    }
    conta++;
  }

  if (achou) {
    printf("Encontrou!");
  }
  else{
    printf("Nao encontrou");
  }
}