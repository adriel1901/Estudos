#include <stdio.h>
int main() {
	int nota1 = 7;
	int nota2 = 8;
	int nota3 = 7;
	printf("Exemplo com média: \n");
	int soma=nota1+nota2+nota3;
	printf("Soma = %d\n",soma);
	float media = soma / 3;
	printf("Media sem o cast: %5.2f\n", media);	
	soma = nota1 + nota2 + nota3; 
	// Forçamos a conversão da 'soma' para float antes da divisão
    media = (float) soma / 3;
	printf("Soma das notas: %d\n", soma);
	printf("Media precisa (com cast): %.2f\n", media);

	// Truncamento de tipos
	printf("\nTruncamento de Tipos: \n");
	double salario = 3500.87;
	// O cast vai extrair apenas a parte inteira do número
	int salario_int = (int) salario;
	printf("Salario original: R$ %.2f\n", salario);
	printf("Valor inteiro extraido: R$ %d\n", salario_int);
	
	printf("\nConversao de codigo ascii/char: \n");
	char letra = 'Z';
	int codigo = 97; // Código ASCII da letra 'a'
	// Força o caractere a ser interpretado como o número correspondente da tabela
	printf("O caractere '%c' tem o codigo ASCII: %d\n", letra, (int) letra);
	// Força o número inteiro a ser interpretado como o caractere visual correspondente
	printf("O codigo %d corresponde ao caractere: '%c'\n", codigo, (char) codigo);
	
	return 0;
}
