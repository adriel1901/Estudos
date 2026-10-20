#include <stdio.h>

int main() {
    // Lacos aninhanhados
    
   for(int i=1;i<=10;i++){
   	  for(int j=1;j<=10;j++){
   	  	for (int z=1;z<=10;z++){
   	  		printf("(%d,%d,%d)\n",i,j,z);
		}
	  }
   }
   
   return 0;
}
