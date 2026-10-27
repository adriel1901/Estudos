#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int numero, resposta, tentativas = 0;
  srand((unsigned int)time(NULL));
  resposta = (rand() % 100) + 1;

  printf("Escolha um número de 1 a 100:\n");

  while (tentativas < 3) {
    scanf("%d", &numero);
    tentativas++;
    if (numero == resposta) {
      printf("Você acertou!");
      return 0;
    }

    if (tentativas < 3) {
      if (numero < resposta) {
        printf("O número é maior! Digite novamente:\n");
      } else if (numero > resposta) {
        printf("O número é menor! Digite novamente:\n");
      }
    }
  }
  printf("Ultrapassou o número de tentativas! Você errou! Era: %d", resposta);

  return 0;
}