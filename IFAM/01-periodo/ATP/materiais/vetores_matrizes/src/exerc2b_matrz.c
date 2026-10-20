#include <stdio.h>

int main(){
   int a[7]={1,2,3,2,3,4,3};
   int b[7]={5,6,7,8,9,10,11};
   int c[7][2];
   
   for(int l=0;l<7;l++){
		c[l][0]=a[l];
   }
   for(int l=0;l<7;l++){
		c[l][1]=b[l];
   }
   for(int l=0;l<7;l++){
		for(int j=0;j<2;j++){
			printf("c[%d][%d]=%d\t",l,j,c[l][j]);
		}
		printf("\n");
   }
   

	
	
	
	
	
	
	return 0;
}
