#include <stdio.h>

int main() {
  float a[4], b[4], c[4];

  for (int i = 0; i < 4; i++) {
    scanf("%f %f", &a[i], &b[i]);

    c[i] = (a[i] - b[i]);
  }

  printf("\n\n");

  for (int i = 0; i < 4; i++) {
    printf("%.2f\n", c[i]);
  }

  return 0;
}