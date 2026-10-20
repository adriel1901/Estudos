#include<stdio.h>

int main(){
	
	int mat[5][5];
	for (int i=0; i<5; i++)  
    {
    	for (int j=0; j<5; j++) {
			printf("Digite um numero: ");
       		scanf("%d", &mat[i][j]);
   		}
	}	
	
	for (int i=0; i<5; i++)  
    {
    	for (int j=0; j<5; j++) {
			printf("mat[%d][%d]=%d \n",i,j,mat[i][j]);
      	}
	}
	return 0;
}
