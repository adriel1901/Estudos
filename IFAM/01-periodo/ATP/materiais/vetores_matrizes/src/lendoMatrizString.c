#include<stdio.h>
#include<string.h>
#define MAX_TAM 5
int main(){
	// Cria uma matriz capaz de armazenas 25 nomes
	// com ateh 10 caracteres cada um
	char nomes[MAX_TAM][MAX_TAM][11];
	
	// Lendo os nomes
	for(int l=0;l<MAX_TAM;l++){
		for(int c=0;c<MAX_TAM;c++){
			printf("nomes[%d][%d]=",l,c);
			gets(nomes[l][c]);
			//fgets(nomes[l][c],10,stdin);
		}
	}
	// imprimindo os nomes
	for(int l=0;l<MAX_TAM;l++){
		for(int c=0;c<MAX_TAM;c++){
			//printf("nomes[%d][%d]=%s\t",l,c,nomes[l][c]);
			printf("%s\t",nomes[l][c]);	
		}
		printf("\n");
	}
    
    return 0;
}
