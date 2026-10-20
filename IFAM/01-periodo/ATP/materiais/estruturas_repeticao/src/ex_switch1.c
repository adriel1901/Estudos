#include <stdio.h>
int main() {
	int opcao;
	printf("--- MENU DE ATENDIMENTO ---\n");
	printf("1 - Falar com o Suporte Tecnico\n");
	printf("2 - Setor Financeiro / Faturamento\n");
	printf("3 - Cancelamento de Plano\n");
	printf("4 - Outros Assuntos\n");
	printf("---------------------------\n");
	printf("Digite a opcao desejada: ");
	scanf("%d", &opcao);
	printf("\n");// O switch analisa a variavel 'opcao'
	switch (opcao) {
		case 1:
			printf("Encaminhando para o Suporte Tecnico... Aguarde na linha.\n");
			break; // Sai do switch imediatamente
		case 2:
    		printf("Encaminhando para o Financeiro. Tenha em maos seus documentos.\n");
    		break;
		case 3:
    		printf("Setor de Retencao e Cancelamento. Como podemos ajudar?\n");
    		break;
		case 4:
    		printf("Aguarde um momento, estamos localizando um atendente geral.\n");
    		break;
		default:
    		// Executado se NENHUMA das opcoes acima for verdadeira
    		printf("Opcao invalida! Por favor, tente novamente.\n");
    		break;
	} // fim do Switch
	
	return 0;
}
