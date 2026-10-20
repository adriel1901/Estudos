#include <stdio.h>

int main() {
    // Metodo de Ordendacao 
    
   
   // a funcao sizeof retorna o tamanho em bytes de uma variavel
   // sizeof(vet) retorna o tamanho em byte do vetor
   // sizeof(vet[0]) retorna o tamanho em byte de um numero inteiro (4 bytes)
   // assim conseguimos saber o tamanho do vetor (no de posicoes)
   int vet[]={10,9,7,6,5,4,3,1,13,28,38,8,33,2};
   int n=sizeof(vet)/sizeof(vet[0]);
   printf("%d",n);
   int conta=0;
   int aux;
   for(int i=0;i<n;i++){
   	  for(int j=0;j<n-i-1;j++){
   	  	conta++;
   	  	if (vet[j]>vet[j+1]){
   	  		aux=vet[j];
			vet[j]=vet[j+1];
			vet[j+1]=aux;
		}
	  }
    }
	for(int i=0;i<n;i++){
		printf("vet[%d] = %d\n",i,vet[i]);
	}   
	printf("Total conta =%d",conta);
	return 0;
}

