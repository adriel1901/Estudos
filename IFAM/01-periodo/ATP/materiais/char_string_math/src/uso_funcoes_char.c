#include <stdio.h>
#include <ctype.h>

int main(){
	char letra_a_min='a';
	char letra_a_mai=toupper(letra_a_min);
	printf("letra %c com toupper %c\n",letra_a_min,letra_a_mai);
	
	char letra_b_mai='B';
	char letra_b_min=tolower(letra_b_mai);
	printf("letra %c com tolower %c\n",letra_b_mai,letra_b_min);
	
	char texto[100];

    printf("Digite uma frase: ");
    fgets(texto, sizeof(texto), stdin);
    int contaChar=0;
    while(texto[contaChar]!='\0'){
    	texto[contaChar]=toupper(texto[contaChar]);
    	contaChar++;
	}
    printf("frase em maiusculo=%s\n",texto);
        
	return 0;
}
