#include <stdio.h>

int main(){
   int m[5][5]={
   		{1,2,3,4,5},
		{2,3,4,5,6},
		{3,4,5,6,7},
		{4,5,6,7,8},
		{5,6,7,8,9}
	};
   int somaDiag=0, somaSec=0, somaAbxDiag=0;
   int l,c;
   // Imprime a matriz na tela
   for(l=0;l<5;l++){
 	   for(c=0;c<5;c++){
 	   	   printf("%d\t",m[l][c]);
		}
		 printf("\n");
   }
   printf("\n\n");
   // Efetua a soma da diagonal principal e inversa
   for(int l=0;l<5;l++){
   	  somaDiag=somaDiag+m[l][l];
   	  somaSec+=m[l][4-l];
   }
   printf("Soma da Diag Principal = %d\n",somaDiag);
   printf("Soma da Diag Secundaria = %d\n",somaSec);
   // Efetua a soma dos elementos abaixo da diagonal principal
   for (int l=1; l<5; l++)  {
     for (int c=0; c<l; c++) {
        somaAbxDiag+=m[l][c];
     }
   }
   printf("Soma dos elem. abaixo da diagonal = %d\n",somaAbxDiag);
   // Somar as linas e armazenas no vetor somaLinha;
   
   int somaLinha[5], somaColuna[5];
   // Zera o valor das posicoes do vetor
   for(l=0;l<5;l++){
   	somaLinha[l]=0;
   	somaColuna[l]=0;
   }
   for(l=0;l<5;l++){
 	    for(c=0;c<5;c++){
 	   		somaLinha[l]=somaLinha[l]+m[l][c];  
			somaColuna[c]=somaColuna[c]+m[l][c]; 
		}
   }
   printf("SomaLinha\n");
   for(l=0;l<5;l++){
   	   printf("somaLinha[%d]=%d\n",l,somaLinha[l]);
   }
   
   printf("SomaColuna\n");
   for(l=0;l<5;l++){
   	   printf("somaColuna[%d]=%d\n",l,somaColuna[l]);
   }
   
   return 0;
}

