#include<stdio.h>

int main(){
	// Armazena apenas um nome com ateh 10 caracteres
	char nome[11]="John Wick";
	
	// Armazena 10 nomes de ateh 30 caracteres cada
	char nomes[10][31];
	for(int i=0;i<5;i++){
		printf("Digite o %o. nome : ",i+1);
		fgets(nomes[i],30,stdin);
	}
	
	// Imprimindo o nomes
	for(int i=0;i<5;i++){
		printf("nomes[%d] = %s",i,nomes[i]);
	}
    
    return 0;
}
