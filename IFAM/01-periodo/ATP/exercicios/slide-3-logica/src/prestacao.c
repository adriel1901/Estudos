#include <stdio.h>

int main()
{
    double prestacao, valor, taxa;
    int tempo;

    scanf("%lf %lf %d", &valor, &taxa, &tempo);

    prestacao = valor + (valor * (taxa / 100) * tempo);
    printf("%.2lf", prestacao);

    return 0;
}