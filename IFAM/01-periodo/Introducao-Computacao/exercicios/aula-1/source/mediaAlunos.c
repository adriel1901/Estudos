#include <stdio.h>
#include <stdbool.h>
int main()
{
    const float nota_minima = 6.0;
    float media_geral, media1, media2, media3;

    float n1A = 6, n2A = 7, n3A = 8;
    float n1B = 4, n2B = 5, n3B = 6;
    float n1C = 8, n2C = 9, n3C = 10;

    media1 = (n1A+n2A+n3A)/3;
    media2 = (n1B+n2B+n3B)/3;
    media3 = (n1C+n2C+n3C)/3;
    media_geral = (media1+media2+media3)/3;

    bool criterio_nota = media_geral >= nota_minima;

    if(criterio_nota)
        printf("Turma aprovada com média: %2.f\n", media_geral);
    else
        printf("Turma reprovada com média: %2.f\n", media_geral);

    return 0;
}
