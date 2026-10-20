#include <stdio.h>
#include <string.h>      



int main()
{
	// Declaracao de variaveis 
	char palavras[3][50];	
	int  i;				/* Contador */
	int  retorno;		/* Variavel de controle */


	/* Atribuicao de valores `as palavrass */
	strcpy(palavras[0], "Engenharia");
	strcpy(palavras[1], "Computacao");       /* Inicial maiuscula */
	strcpy(palavras[2], "computacao");       /* Inicial minuscula */

	/* Comparacao de palavras */
	printf("\n\n");
	printf("--------------------------------------------------\n");
	printf("Comparacao de palavrass.\n");
	printf("Comando: strcmp (String Compare).\n");
	printf("--------------------------------------------------\n");

	for (i=0; i < 2; i++)
	{
		retorno = strcmp(palavras[i], palavras[i+1]);

		if (retorno == 0)
			printf("As palavrass \"%s\" e \"%s\" sao iguais.\n", palavras[i], palavras[i+1]);
		else if (retorno < 0)
			printf("A palavras \"%s\" eh maior que \"%s\".\n", palavras[i+1], palavras[i]);
		else
			printf("A palavras \"%s\" eh maior que \"%s\".\n", palavras[i], palavras[i+1]);
	}
	printf("--------------------------------------------------\n");


	/* Comparacao de palavrass, ignorando o caso */
	printf("\n\n\n");
	printf("--------------------------------------------------\n");
	printf("Comparacao de palavrass ignorando o caso.\n");
	printf("Comando: strcmpi (String Compare Ignore).\n");
	printf("--------------------------------------------------\n");

	for (i=0; i < 2; i++)
	{
		retorno = strcmpi(palavras[i], palavras[i+1]);

		if(retorno == 0)
			printf("As palavrass \"%s\" e \"%s\" sao iguais.\n", palavras[i], palavras[i+1]);
		else if(retorno < 0)
			printf("A palavras \"%s\" eh maior que \"%s\".\n", palavras[i+1], palavras[i]);
		else
			printf("A palavras \"%s\" eh maior que \"%s\".\n", palavras[i], palavras[i+1]);
	}




}
