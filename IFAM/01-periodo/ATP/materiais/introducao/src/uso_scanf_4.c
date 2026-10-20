#include <stdio.h>
int main() 
{
	char usuario[10];
	// Efetua a leitura e limita o uso do que foi digitado em ateh
	// 9 caracteres
	// (deixando 1 espaco para o '\0' )
	printf("Digite um nome de usuario (maximo 9 letras, sem espacos): ");
	scanf("%9s", usuario);
	printf("Usuario gravado: %s\n", usuario);
	
	return 0;
}
