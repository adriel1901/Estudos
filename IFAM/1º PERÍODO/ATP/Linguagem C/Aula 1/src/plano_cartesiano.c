#include <stdio.h>

int main() {
  float x = 0, y = 0;
  scanf("%f %f", &x, &y);

  if (x > 0) {
    if (y > 0) {
      printf("Q1");
    } else if (y < 0) {
      printf("Q4");
    } else {
      printf("eixo x");
    }
  }

  else if (x < 0) {
    if (y > 0) {
      printf("Q2");
    } else if (y < 0) {
      printf("Q3");
    } else {
      printf("eixo x");
    }
  } else {
    if (y != 0) {
      printf("eixo y");
    } else {
      printf("origem");
    }
  }
  return 0;
}