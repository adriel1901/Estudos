#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char escolhido;
    int chances = 0;

    srand(time(NULL));
    char sorteado = 65 + (rand() % 26);

    printf("Descubra a letra do código decimal de %d ?", sorteado);

    while (chances < 3) {
        scanf(" %c", &escolhido);
        if (sorteado == escolhido)
        {
            printf("\nAcertou!");
            break;
        }
        else
        {
            printf("\nErrou! Tente novamente\n");
            chances++;
        }
    }

    return 0;
}