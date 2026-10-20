#include <stdio.h>
int main() {
	float n1,n2,n3,media, freq;
	printf("Nota 1 : ");
	scanf("%f",&n1);
	printf("Nota 2 : ");
	scanf("%f",&n2);
	printf("Nota 3 : ");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	printf("\nDigite o percentual de frequencia: ");
	scanf("%f",&freq);
	printf("Media = %5.2f  Percentual de Frequencia :%5.2f%%\n",media,freq);
	// Verifica se a frequencia minima de 75%
	if (freq>=75) {
		// Agora verifica a situacao do aluno com a media
		if (media >= 7.0) {
			printf("Resultado: Aprovado Direto!\n");
		}
		else if (media >= 5.0) {
			printf("Resultado: Recuperacao (Tem direito a fazer o exame).\n");
		}
		else {
			printf("Resultado: Reprovado Direto.\n");
		}
	} else {
		printf("Aluno reprovado por faltas.");
	}

	return 0;
}
