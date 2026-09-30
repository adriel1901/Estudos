#include <stdio.h>

int main()
{
    float reajuste, salario;
    scanf("%f", &salario);

    if (salario > 2500)
    {
        reajuste = salario + (salario * 0.05);
    }
    else if (salario <= 2500 && salario >= 1800)
    {
        reajuste = salario + (salario * 0.1);
    }
    else 
    {
        reajuste = salario + (salario * 0.15);
    }

    printf("%.2f", reajuste);
    return 0;
}