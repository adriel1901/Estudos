#include<stdio.h>
#define MAX_TAM 5
int main(){
	// Atribui valores para uma vetor de String
	char nomes[MAX_TAM][20]={"Carlos",
			"Luiz Henrique",
			"Jose Aguiar",
	     	"Antonio Emanuel",
		 	"Joaquim Francisco"};
	
	// Imprimindo o nomes
	for(int l=0;l<MAX_TAM;l++){
		printf("nomes[%d]=%s\n",l,nomes[l]);
	}
    
    return 0;
}
