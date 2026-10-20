#include <stdio.h>

int main() {
    // Duas variaveis correndo em direcoes opostas
    for (int i = 0, j = 10; i <= 5; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}
