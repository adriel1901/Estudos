#include <stdio.h>
int main() 
{
	int idade;
	float altura;
	char inicial;
	printf("Digite a sua idade: ");
	scanf("%d", &idade);
	printf("Digite a sua altura (ex: 1.75): ");
	scanf("%f", &altura);
	// O espaço antes de %c limpa o '\n' que ficou no buffer do teclado
	// Isto é necessário para que evitar que na execução o comando de leitura
	// não seja executado. 
	// Faça um teste e retire o espaço em branco para verificar como fica
	printf("Digite a inicial do seu nome: ");
	scanf(" %c", &inicial);
	printf("\nDados lidos:\n");
	printf("Idade: %d anos\n", idade);
	printf("Altura: %.2f m\n", altura);
	printf("Inicial: %c\n", inicial);

	return 0;
}
