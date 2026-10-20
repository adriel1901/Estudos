#include <stdio.h>

int main(){
   int a[5][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6},{5,6,7}};
   int b[5][3]={{31,32,33},{32,33,34},{13,14,15},{24,25,26},{15,16,17}};
   int c[5][3];
   
   for(int l=0;l<5;l++){
		for(int j=0;j<3;j++){
			c[l][j]=a[l][j]+b[l][j];
		}
   }
   
   for(int l=0;l<5;l++){
		for(int j=0;j<3;j++){
			printf("c[%d][%d]=%d\t",l,j,c[l][j]);
		}
		printf("\n");
   }
   

	
	
	
	
	
	
	return 0;
}
