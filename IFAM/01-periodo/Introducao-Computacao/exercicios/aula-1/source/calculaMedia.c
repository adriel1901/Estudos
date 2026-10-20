#include <stdio.h>

int main()
{
    float n1, n2, n3, media;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = (n1+n2+n3)/3;

    if(media>=6)
        printf("Voce foi aprovado\n");
    else
        printf("Voce foi reprovado\n");

    return 0;
}