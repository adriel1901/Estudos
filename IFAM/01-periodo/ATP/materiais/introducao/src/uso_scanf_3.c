#include <stdio.h>
int main() 
{
	int ddd, numero;
	// O scanf espera exatamente o formato (XX)XXXXX-XXXX
	printf("Digite o telefone no formato (DD)NNNNNNNNN: ");
	scanf("(%d)%d", &ddd, &numero);
	printf("Telefone processado -> DDD: %d | Numero: %d\n", ddd, numero);

	return 0;
}
