#include<stdio.h>

int main(){
    int vet[]={10,22,35,40,45,50,62,70,85,90};
    int fim=9, inicio=0;
    int meio, alvo=62;
    printf("Valor para encontrar = %d\n\n",alvo);
    int achou=0;
	while (inicio <= fim && !achou)
    {
        meio = (inicio + fim)/2;

        if (vet[meio] == alvo)
           	achou=1;
        
        if (vet[meio] > alvo)
           	fim = meio - 1;
         else
           	inicio = meio + 1;
    }
    if (achou){
    	printf("encontrado na posicao %d\n",meio);
    } else {
    	printf("nao existe valor procurado!");
	}
	return 0;
}
