#include <stdio.h>
int main() {
	int idade;
	printf("Idade : ");
	scanf("%d",&idade);
	if (idade < 12) {
		printf("Classificacao: Crianca\n");
	}
	else if (idade < 18) {
		printf("Classificacao: Adolescente\n");
	}
	else if (idade < 60) {
		printf("Classificacao: Adulto\n");
	}
	else {
		printf("Classificacao: Idoso\n");
	}

	return 0;
}
