#include <stdio.h>

int main() {
  int v1[4], v2[4], v3[8];
  int j = 4;

  for (int i = 0; i < 4; i++) {
    scanf("%d", &v1[i]);
    scanf("%d", &v2[i]);
  }

  for (int i = 0; i < 4; i++) {
    v3[i] = v1[i];
    v3[i+4] = v2[i];
  }

  printf("\n\n");

    for (int i = 0; i < 8; i++) {
    printf("%d\n", v3[i]);
  }

  return 0;
}