#include <stdio.h>

int main() {
    int n, fatorial = 1;
    scanf("%d", &n);
    int vetor[n];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; i <= i; j++) {
            fatorial *= j;
            printf("%d ", fatorial);
        }
        printf("\n");
        vetor[i] = fatorial;
        fatorial = 1;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
}