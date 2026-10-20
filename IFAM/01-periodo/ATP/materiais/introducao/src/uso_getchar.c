#include <stdio.h>
int main() 
{
	char letra1, letra2, letra3;
	
	printf("Digite uma letra: ");
	letra1=getchar();
	getchar();
	printf("Senha gravado: %c\n", letra1);	

	printf("Digite outra letra: ");
    letra2=getchar();
	getchar();
    printf("Letra digitada : %c\n", letra2);
   
	printf("Digite novamente uma letra: ");
	letra3=getchar();
	getchar();
    printf("Letra digitada : %c", letra3);
    
	return 0;
} 
