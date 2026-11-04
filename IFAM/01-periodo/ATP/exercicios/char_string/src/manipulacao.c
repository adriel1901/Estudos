#include <ctype.h>
#include <stdio.h>

int main() {
    char texto[100];
    fgets(texto, sizeof(texto), stdin);
    int count = 0;

    while (texto[count] != '\0') {
        texto[count] = toupper(texto[count]);
        count++;
    }
    printf("%s",texto);

    count = 0;
    while (texto[count] != '\0') {
        texto[count] = tolower(texto[count]);
        count++;
    }
    printf("%s",texto);
    return 0;
}