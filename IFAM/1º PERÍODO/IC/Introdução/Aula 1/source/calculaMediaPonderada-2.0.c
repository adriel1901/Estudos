#include <stdio.h>
#include <stdbool.h>

int main()
{
    // declaração de variáveis
    float nota1, nota2, nota3, prova_especial;
    float media_aritmetica, media_ponderada;
    const float nota_minima = 6.0;
    const float peso1=1, peso2=2, peso3=3;
    const int limite_faltas = 10;

    // atribuição de valores
    nota1 = 5.0;

    nota2 = 5.5;

    nota3 = 5.0;

    prova_especial = 5.5;

    int faltas = 8;

    // impressão dos valores na tela
    printf("Nota 1: %.2f, Peso 1: %f", nota1, peso1);
    printf("\nNota 2: %.2f, Peso 2: %f", nota2, peso2);
    printf("\nNota 3: %.2f, Peso 3: %f", nota3, peso3);

    media_aritmetica = (nota1 + nota2 + nota3) / 3;

    media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("\nMedia Aritmetica: %.2f", media_aritmetica);
    printf("\nMedia Ponderada: %.2f", media_ponderada);
    printf("\nProva Especial: %.2f", prova_especial);

    bool criterio_nota = (media_aritmetica >= nota_minima);
    bool criterio_falta = (faltas <= limite_faltas);
    bool criterio_prova_especial = (prova_especial >= nota_minima);

    if (((criterio_nota) && (criterio_falta)) || (criterio_prova_especial))
    {
        printf("\nAprovado!");
    }
    else
    {
        printf("\nReprovado!");
    }

    return 0;
}