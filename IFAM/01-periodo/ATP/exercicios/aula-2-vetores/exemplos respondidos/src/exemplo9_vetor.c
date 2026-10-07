#include <stdio.h>

int main() {
  int R[] = {34, 21, 65, 2, 1};
  int S[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int W[15];
  int achou = 0, posX = 0, conta = 0;

  for (int i = 0; i < 5; i++) {
    conta = 0;
    achou = 0;

    while (conta < posX && (!achou)) {
      if (R[i] == W[conta]) {
        achou = 1;
      } else {
        conta++;
      }
    }
    if (!achou) {
      W[posX] = R[i];
      posX++;
    }
  }

  return 0;
}