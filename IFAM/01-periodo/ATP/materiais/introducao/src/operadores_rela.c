#include<stdio.h>

int main() {
	int   cond;
	int   a = 3; 
	float x = 1.5;
    printf("--- Uso de Valores booleanos ---\n");
	cond = a!=x;		 /* cond=1 -> V */
	printf("a!=x  cond = %d\n",cond);
	cond = a/2.0 == x; 	 /* cond=1 -> V */
	printf("a/2.0 == x  cond = %d\n",cond); 
	cond 	= 	a/2	== x; 	 /* cond=0 -> F */
	printf("a/2	== x cond = %d\n",cond);
	cond 	= 	a!= 2*x; 	 /* cond=0 -> F */
	printf("a!= 2*x  cond = %d\n",cond);
	cond 	= 	a>= x; 	 /* cond=1 -> V */
	printf("a>= x  cond = %d\n",cond);
	cond 	= 	a/3<= x; 	 /* cond=1 -> V */
	printf("a/3<= x  cond = %d\n",cond);
	cond 	= 	a/2>2; 	 /* cond=0 -> F */
	printf("a/2>2  cond = %d\n",cond);
	cond 	= a;					 /* cond=3 -> V */
	printf("a  cond = %d\n",cond);
	cond = a-2*x;	//cond= a-2*x;
	printf("a-2*x  cond = %d\n",cond);
	cond = 0; /* cond=0 -> F */
	printf("cond=0  cond = %d\n",cond);
	
    return 0;
}

