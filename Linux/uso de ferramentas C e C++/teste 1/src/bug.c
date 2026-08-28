#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor = malloc(5 * sizeof(int));

    vetor[4] = 100;
    printf("Valor:%d\n", vetor[4]);

    free(vetor);
    return 0;
}