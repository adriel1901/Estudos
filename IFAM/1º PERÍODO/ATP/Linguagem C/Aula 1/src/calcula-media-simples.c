#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int freq = 75;

    printf("Nota 1: \n");
    scanf("%f", &n1);

    printf("Nota 2: \n");
    scanf("%f", &n2);

    printf("Nota 3: \n");
    scanf("%f", &n3);

    printf("Coloque a frequencia do aluno: ");
    scanf("%d", &freq);

    media = (float)(n1 + n2 + n3) / 3;

    if (freq >= 75)
    {
        if (media >= 7)
        {
            printf("Aprovado com a media %.2f!", media);
        }
        else if (media >= 5)
        {
            printf("Reprovado, mas com direito de fazer um exame.");
        }
        else
        {
            printf("Reprovado e sem direito de fazer exame");
        }
    }
    else
    {
        printf("Reprovado por falta");
    }
    return 0;
}