#include <stdio.h>
#include <string.h>      



int main()
{
	// Declaracao de variaveis 
	char palavras[3][50];	
	int  tam[3];		/* Usado para guardar o tamanho das palavras 0, 1 e 2 */
	int  i;			

	/* Leitura das palavras */
	for (i=0; i<3; i++)
	{
		printf("\nDigite as palavras[%d]:\n", i);
		//scanf("%s", &palavras[i]);
		gets(palavras[i]);
	}

	/* Comprimento das palavrass: */
	printf("\n\n");
	
	for (i=0; i<=2; i++)
	{
		tam[i] = strlen(palavras[i]);	/* Funcao "strlen" para calcular o comprimento da palavras */
		printf("Tamanho de palavras[%d]: %d\n", i, tam[i]);
	}
	printf("\n");

	/* Unindo as palavras: */
	strcat(palavras[0], palavras[1]);	/* String concatenada eh armazena no 1o. argumento */

	printf("Unindo duas palavras.\n");
	printf("\nUnindo palavras[1] a palavras[0]: %s\n", palavras[0]);
	printf("---------------------------------------\n");



}
