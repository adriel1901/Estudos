#include <stdio.h>

int main() {

	putchar('A'); // imprime um caractere
	putchar('\n'); // Imprime uma nova linha
	// 2. Imprimindo uma sequência de caracteres usando um loop
	
	int i = 60;
	while (i<130) {
	  
	    if (!(i%10)){ 
	   	   putchar('\n');
	    }
	    putchar(i);
	    putchar(' ');
	    i++;
	}
	putchar('\n');
	
	return 0;
}
