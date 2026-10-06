#include <stdio.h>

int main(){
    float litros_usados, tempo, velocidade, distancia;

    scanf("%f %f", &tempo, &velocidade);
    distancia = tempo*velocidade;

    litros_usados = distancia/12;

    printf("%.2f\n", litros_usados);
    return 0;
}