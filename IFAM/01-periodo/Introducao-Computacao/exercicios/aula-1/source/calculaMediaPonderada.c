#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int p1=1, p2=2, p3=3;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    media = ((n1*p1) + (n2*p2) + (n3*p3))/(p1 + p2 + p3);

    if(media>=6)
        printf("Voce foi aprovado\n");
    else
        printf("Voce foi reprovado\n");

    return 0;
}