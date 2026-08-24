#include <stdio.h>

int main() {
	int valor1, valor2;

	//leitura de valores
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);

	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);

	
	printf("Menu\n");
	printf("1 - Soma\n");
	printf("2 - Subtracao\n");
	printf("3 - Multiplicacao\n");
	printf("4 - Divisao\n");
	printf("5 - Resto\n");

	int opcao;
	printf("escolha uma opcao: ");
	scanf("%d", &opcao);


	switch (opcao) {
		case 1:
			printf("Você escolheu soma:\n");
			printf("Soma:                  %d + %d = %d\n", valor1, valor2, valor1 + valor2);
			break;
		case 2:
			printf("Você escolheu subtracao:\n");
			printf("Subtracao:                  %d - %d = %d\n", valor1, valor2, valor1 - valor2);
			break;
		case 3:
			printf("Você escolheu multiplicacao:\n");
			printf("Multiplicacao:                  %d * %d = %d\n", valor1, valor2, valor1 * valor2);
			break;
		case 4:
			printf("Você escolheu divisao:\n");
			printf("Divisao:                  %d / %d = %d\n", valor1, valor2, valor1 / valor2);
			break;
		case 5:
			printf("Você escolheu resto:\n");
			printf("Resto:                  %d % %d = %d\n", valor1, valor2, valor1 % valor2);
			break;
		default:
			printf("opção invalida\n");
	}

	return 0;
}
