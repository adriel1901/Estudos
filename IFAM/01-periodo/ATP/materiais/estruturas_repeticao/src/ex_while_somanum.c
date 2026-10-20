#include <stdio.h>
int main() {
	int numero;
	int soma = 0;
		printf("--- Somador de Numeros ---\n");
	printf("Digite os numeros que deseja somar (ou digite 0 para sair):\n\n");
	// Inicializa a variavel com qualquer valor diferente de 0 para conseguir entrar no loop
	numero = -1;// O loop continua rodando ENQUANTO o numero digitado for diferente de 0
	while (numero != 0) {
		printf("Digite um numero: ");
		scanf("%d", &numero);// Soma o valor digitado ao total acumulado
		soma = soma + numero; 
	}
	printf("\nLoop encerrado!\n");
	printf("A soma total de todos os numeros digitados eh: %d\n", soma);
	
	return 0;
}
