#include <stdio.h>
int main() 
{
	int dia, mes, ano;
	// O usuário pode digitar "21 09 2026" ou "21/09/2026" 
	// se formatado estritamente.
    // Neste caso, separamos por espaço no padrão do scanf:
	printf("Digite o dia, mes e ano de nascimento (separados por espaco): ");
	scanf("%d %d %d", &dia, &mes, &ano);
	printf("Data formatada: %02d/%02d/%d\n", dia, mes, ano);

	return 0;
}
