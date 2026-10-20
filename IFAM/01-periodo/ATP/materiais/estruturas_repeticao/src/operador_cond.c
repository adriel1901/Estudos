#include <stdio.h>
int main() {
	float valor;
	printf("valor : ");
	scanf("%f",&valor);
	float x=0;
	x=(valor>=6?valor*2:valor*3);
	printf("Valor de x= %5.2f",x);
	return 0;
}
