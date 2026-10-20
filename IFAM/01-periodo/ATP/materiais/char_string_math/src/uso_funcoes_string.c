#include <stdlib.h>
#include <string.h>      



int main()
{
	/* Declaracao de variaveis */
	char string[5][100];	/* Strings de caracteres */
	char temp[100];		/* String temporaria */
	int  i;			/* Contador */
	int  retorno;		/* Variavel de controle */

	/* Atribuicao de valores `as strings */
	strcpy(string[0], "Ciencia");
	strcpy(string[1], "Computacao");

	
	// Passando para maiuscula
	strcpy(temp,string[0]); /* copia o valor da string[0] para temp */
	printf("String \"%s\" em MAIUSCULAS: \"%s\"\n", temp, strupr(string[0]));
	printf("depois da execucao do strupr ficou %s\n\n",string[0]);
	

	getchar();    /* Aguarda o enter  */


	// Passando para minuscula
	strcpy(temp,string[1]); /* copia o valor da string[0] para temp */
	printf("String \"%s\" em minusculas: \"%s\"\n", temp, strlwr(string[1]));
	printf("depois da execucao do strlwr ficou %s\n\n",string[1]);
	

	getchar();    /* Aguarda o enter  */


	// Inversao do conteudo de strings 
	
	strcpy(string[2],string[1]);           // Copia Computacao para posicao 2
	printf("Invertendo string \"%s\": \"%s\"\n", string[1], strrev(string[2]));
	
	getchar();    /* Aguarda o enter  */


	/* Substituicao do conteudo de strings */
	strcpy(string[3],string[1]);  // Copia computacao para posicao 3

	printf("Substituindo string \"%s\": \"%s\"\n", string[1], strset(string[i],'*'));

	
}
