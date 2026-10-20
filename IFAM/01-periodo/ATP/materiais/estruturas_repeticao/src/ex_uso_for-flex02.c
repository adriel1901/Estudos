#include <stdio.h>

int main() {
    // Imprime os numeros pares entre 2 e 100
    int i=2;
    for (; i <= 100; i=i+2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Saltando de 5 em 5
    for (int j = 0; j <= 50; j += 5) {
        printf("%d ", j);
    }
    printf("\n\n");
    // Multiplicacao (Crescimento exponencial)
    for (int k = 1; k <= 32; k *= 2) {
        printf("%d ", k);
    }
    return 0;
}
