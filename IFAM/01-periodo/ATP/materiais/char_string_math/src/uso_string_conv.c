#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	/* Declaracao de variaveis */
	char  string[3][100];	
	int   soma;			    /* Resultado de uma soma de inteiros */
	float soma_f;		    /* Resultado de uma soma de floats */
	int   inteiro;		    /* Numero inteiro */
	int   i;			    /* Contador */

	
	printf("Conversao de strings em inteiros:\n");

	for (i=0; i<2; i++)
	{
		printf("\nDigite uma string numerica (int):\n");
		scanf("%s", &string[i]);
	}

	soma = atoi(string[0]) + atoi(string[1]);


	printf("\nSoma de \"%s\" com \"%s\": %d\n", string[0], string[1], soma);

	getchar();    /* Pausa  */

	printf("\n\n");
	printf("Conversao de strings para float:\n");
	
	/* Leitura das strings numericas (float) */
	for (i=0; i<2; i++)
	{
		printf("\nDigite uma string numerica (float):\n");
		scanf("%s", &string[i]);
	}

	soma_f = atof(string[0]) + atof(string[1]);


	printf("\nSoma de \"%s\" com \"%s\": %f\n", string[0], string[1], soma_f);
	
	getchar();    /* Pausa  */


	printf("Conversao de inteiros em strings:\n");

	/* Leitura de um numero inteiro */
	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &inteiro);

	strcpy(string[1], "Telefone : ");
	itoa(inteiro, string[2], 10);
	strcat(string[1],string[2]);
	//strcat(strcpy(string[1], "Telefone : "), itoa(inteiro, string[2], 10));

	printf("\nInteiro em string: %s\n", string[1]);
	
	int n = atoi("1234");     // n = 1234
    int m = atoi("  -56abc"); // m = -56
    int z = atoi("abc"); // z = 0
    printf("%d   %d   %d\n\n",n,m,z);
    
	double x = atof("3.1415");   // x = 3.1415
	double y = atof(" -2.5e3");  // y = -2500.0
	double w = atoi("abc");         // z = 0.0000
	printf("%f   %f   %f\n\n",x,y,w);

}

