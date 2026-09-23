#include <stdio.h>
#include <stdbool.h>

int main()
{
    int cem, cinquenta, vinte, dez, cinco, dois, um, valor, resto;

    scanf("%lf", &valor);
    resto = valor;
    bool limit = (valor >= 1 && valor <= 9999);

    if (limit)
    {
        if (resto / 100 != 0)
        {
            
        }
    }
    else
    {
        printf("Valor fora do limite");
    }

    return 0;
}