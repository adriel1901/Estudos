#include <stdio.h>
#include <ctype.h>

int main() {
    char c;

    printf("Digite um caractere: ");
    scanf("%c", &c);

    printf("Resultados para '%c': \n", c);

    if (islower(c))
        printf("islower: eh letra minuscula.\n");
    else
        printf("islower: NAO eh letra minuscula.\n");

    if (isupper(c))
        printf("isupper: eh letra maiuscula.\n");
    else
        printf("isupper: NAO eh letra maiuscula.\n");

    if (ispunct(c))
        printf("ispunct: eh caractere de pontuacao.\n");
    else
        printf("ispunct: NAO eh caractere de pontuacao.\n");

    if (isspace(c))
        printf("isspace: eh espaco ou caractere de separacao.\n");
    else
        printf("isspace: NAO eh espaco.\n");

    if (isdigit(c))
        printf("isdigit: eh digito decimal.\n");
    else
        printf("isdigit: NAO eh digito decimal.\n");

    if (isxdigit(c))
        printf("isxdigit: eh digito hexadecimal.\n");
    else
        printf("isxdigit: NAO eh digito hexadecimal.\n");

    return 0;
}
