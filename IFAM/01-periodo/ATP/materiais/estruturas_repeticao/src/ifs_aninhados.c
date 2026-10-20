#include <stdio.h>
int main() {
	float n1,n2,n3,media;
	printf("Nota 1 : ");
	scanf("%f",&n1);
	printf("Nota 2 : ");
	scanf("%f",&n2);
	printf("Nota 3 : ");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	printf("Media = %5.4f\n",media);
	// Estrutura encadeada para definir a situacao do aluno
	if (media >= 7.0) {
		printf("Resultado: Aprovado Direto!\n");
	}
	else if (media >= 5.0) {
		printf("Resultado: Recuperacao (Tem direito a fazer o exame).\n");
	}
	else {
		printf("Resultado: Reprovado Direto.\n");
	}

	return 0;
}
