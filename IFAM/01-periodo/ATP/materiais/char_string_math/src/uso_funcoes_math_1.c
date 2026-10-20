#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  
    int   x =  2;
    int   y = -2;
    float a =  1.23;
    float b = -1.23;
    int   z;

    z = abs(x);
    printf("Uso da funcao abs e fabs \n");
    printf("abs(%2d) : %d\n", x, abs(x));
    printf("abs(%2d) : %d\n", y, abs(y));
    printf("\n");
    printf("fabs(%.2f) : %.2f\n",b, fabs(b));
	printf("fabs(%.2f) : %.2f\n",(4./9.),fabs(4./9.));
   	printf("fabs(%5.2f) : %.2f\n", (float) x, fabs((float) x));
   	printf("\n");
   
    printf("Potenciacao\n");
    printf("pow(10,2)  : %.4f\n", pow(10,2));
    printf("pow(27,1/3): %.4f\n", pow(27,1./3));  // Raiz cubica de 27
    printf("\n");
   
    printf("e^x  EXP(X)\n");
    printf("exp(1)  : %.4f\n", exp(1));  
    printf("exp(2)  : %.4f\n", exp(2));  
    printf("exp(-1) : %.4f\n", exp(-1)); 
    printf("\n");
      
    printf("RAIZ QUADRADA (SQRT)\n");
    printf("sqrt(2) : %.4f\n", sqrt(2));  
    printf("sqrt(25): %.4f\n", sqrt(25)); 
    printf("\n");
    
    printf("LOGARITMOS \n");
    printf("log(2)   : %.4f\n", log(2));  
    printf("log(2.7183)   : %.4f\n", log(2.7183));  
    printf("log10(2) : %.4f\n", log10(2)); 
    printf("log2(10) : %.4f\n", log(10)/log(2)); 
    
    printf("\n\n");
   
    return 0;
}
