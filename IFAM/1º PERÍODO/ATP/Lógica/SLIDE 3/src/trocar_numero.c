#include <stdio.h>

int main(){
    int A, B, aux;

    scanf("%d %d", &A, &B);
    aux = A;
    A = B;
    B = aux;

    printf("%d %d", A, B);

    return 0;
}