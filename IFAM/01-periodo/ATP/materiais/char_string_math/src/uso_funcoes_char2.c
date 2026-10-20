#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Resultados para '%c': \n", c);

    if (isalnum(c))
        printf("isalnum: eh letra ou numero.\n");
    else
        printf("isalnum: NAO eh letra nem numero.\n");

    if (isalpha(c))
        printf("isalpha: eh letra.\n");
    else
        printf("isalpha: NAO eh letra.\n");

    if (isascii(c))
        printf("isascii: esta na tabela ASCII.\n");
    else
        printf("isascii: NAO esta na tabela ASCII.\n");

    if (iscntrl(c))
        printf("iscntrl: eh caractere de controle.\n");
    else
        printf("iscntrl: NAO eh caractere de controle.\n");

    if (isgraph(c))
        printf("isgraph: eh imprimivel (exceto espaco).\n");
    else
        printf("isgraph: NAO eh imprimivel ou eh espaco.\n");

    if (isprint(c))
        printf("isprint: eh imprimivel.\n");
    else
        printf("isprint: NAO eh imprimivel.\n");

    return 0;
}
