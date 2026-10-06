#include <stdio.h>

int main() {
  float valor, x = 0;

  scanf("%f", &valor);

  x = (valor >= 6 ? valor * 2 : valor * 3);
  printf("Valor de 'x' eh: %.2f", x);

  return 0;
}