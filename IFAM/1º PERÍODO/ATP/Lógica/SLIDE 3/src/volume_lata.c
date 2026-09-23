#include <stdio.h>
#include <math.h>

const float pi = 3.14159;
int main()
{
    float volume, raio, altura;

    scanf("%f %f", &raio, &altura);
    volume = pi * (raio*raio) * altura;

    printf("%2.f", volume);
    return 0;
}
