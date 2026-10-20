#include<stdio.h>
#include<string.h>
#define MAX_TAM 5
int main(){
	// Atribui valores para uma vetor de String
	char nomes[MAX_TAM][20];
	strcpy(nomes[0],"Carlos");
	strcpy(nomes[1],"Luiz Henrique");
	strcpy(nomes[2],"Jose Aguiar");
    // ...
	// Imprimindo os nomes
	for(int l=0;l<MAX_TAM;l++){
		printf("nomes[%d]=%s\n",l,nomes[l]);
	}
    
    return 0;
}
