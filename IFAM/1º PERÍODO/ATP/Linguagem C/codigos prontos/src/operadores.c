#include<stdio.h>

int main() {
	//Declaração e inicialização das variáveis
    int a = 5;
	int b = 2;
	//Várias situações envolvendo os operadores aritméticos
	printf("a = %d\n " , a);
	printf("b = %d\n" ,b);
	printf("-b = %d\n" ,(-b));
	printf("a + b = %d\n" ,(a + b));
	printf("a - b = %d\n" ,(a - b));
	printf("a * b = %d\n" ,(a*b));
	printf("a / b = %d\n" ,(a/b));
	printf("(float) a / b = %5.2f\n" , (float)a/b);
	printf("a %% b = %d\n" , (a%b));
	printf("a++ = %d\n" ,(a++));
	printf("a = %d\n" , a);
	printf("--b = %d\n" , (--b));
	printf("b = %d\n" , b);	
}

