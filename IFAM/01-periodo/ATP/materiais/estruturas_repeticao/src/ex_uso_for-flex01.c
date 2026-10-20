#include <stdio.h>

int main() {
    // Imprime os numeros pares entre 2 e 100
    int i=2;
    for (; i <= 100; i=i+2) {
        printf("%d ", i);
    }
    
    return 0;
}
