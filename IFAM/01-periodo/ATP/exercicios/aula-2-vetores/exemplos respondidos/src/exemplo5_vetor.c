#include <stdbool.h>
#include <stdio.h>

int main() {
  int a[4], b[4], fatorial = 1;

  for (int i = 0; i < 4; i++) {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 1; j <= a[i]; j++) {
      fatorial *= j;
    }
    b[i] = fatorial;
    fatorial = 1;
  }

  for (int i = 0; i < 4; i++) {
    printf("%d ", b[i]);
  }
  return 0;
}