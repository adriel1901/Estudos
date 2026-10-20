#include<stdio.h>

int main() {
	//Declaracao e inicializacao das variaveis
    int a = 5;
	int b = 2;
	//Varias situacoes envolvendo os operadores aritmehticos
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

