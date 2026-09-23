#include <stdio.h>
int main() 
{
	char senha[9];
	
	printf("Digite uma senha (maximo 8 caracteres): ");
	fgets(senha,9,stdin);
	printf("Senha gravado: %s\n", senha);
	
	return 0;
} 
