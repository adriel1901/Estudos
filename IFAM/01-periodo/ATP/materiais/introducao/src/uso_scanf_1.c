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
	// O espaco antes de %c limpa o '\n' que ficou no buffer do teclado
	// Isto eh necessario para que evitar que na execucao o comando de leitura
	// nao seja executado. 
	// Faca um teste e retire o espaco em branco para verificar como fica
	printf("Digite a inicial do seu nome: ");
	scanf(" %c", &inicial);
	printf("\nDados lidos:\n");
	printf("Idade: %d anos\n", idade);
	printf("Altura: %.2f m\n", altura);
	printf("Inicial: %c\n", inicial);

	return 0;
}
