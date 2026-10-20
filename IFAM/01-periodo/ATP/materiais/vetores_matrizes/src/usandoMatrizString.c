#include<stdio.h>
#define MAX_TAM 3
int main(){
	// cria uma matriz capaz de armazenar 25
	// nome com ateh 10 caracteres cada uma
	char nomes[MAX_TAM][MAX_TAM][11];
	for(int l=0;l<MAX_TAM;l++){
		for (int c=0;c<MAX_TAM;c++){
		    printf("nomes[%d][%d]= ",l,c);
			//fgets(nomes[l][c],10,stdin);
			gets(nomes[l][c]);
		}
	}
	
	// Imprimindo o nomes
	for(int l=0;l<MAX_TAM;l++){
		for (int c=0;c<MAX_TAM;c++){
		    printf("nomes[%d][%d]=%s\t",l,c,nomes[l][c]);
		}
		printf("\n");
	}
    
    return 0;
}
