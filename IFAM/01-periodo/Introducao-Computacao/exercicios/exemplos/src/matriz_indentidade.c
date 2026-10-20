#include <stdio.h>

int main() {
   int i, j, n;
   
   scanf("%d", &n);

   for(i = 0; i < n; i++) {
    for(j = i; j < n; j++){
      if(i=j)
         printf("0");
      else 
         printf("0");
    }
   }
   return 0;
}