#include <stdio.h>

int main() {
  int a[8], b[8];

  for (int i = 0; i < 8; i++) {
    printf("valor = ");
    scanf("%d", &a[i]);
    b[i] = a[i] * 3;
  }

  printf("\n\n");

  for (int i = 0; i < 8; i++) {
    printf("a[%d]=%d b[%d]=%d\n", i, a[i], i, b[i]);
  }
  return 0;
}