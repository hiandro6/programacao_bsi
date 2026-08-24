#include <stdio.h>

int main() {
	int valor1, valor2;

	//leitura de valores
	printf("Digite o primeiro valor: ");
	scanf("%d", &valor1);

	printf("Digite o segundo valor: ");
	scanf("%d", &valor2);

	//resultados
	printf("=====RESULTADOS=====");
	printf("Soma:                  %d + %d = %d\n", valor1, valor2, valor1 + valor2);
	printf("Subtracao:                  %d - %d = %d\n", valor1, valor2, valor1 - valor2);
	printf("Multiplicacao:                  %d * %d = %d\n", valor1, valor2, valor1 * valor2);
	printf("Divisao:                  %d / %d = %d\n", valor1, valor2, valor1 / valor2);
	printf("Modulo:                  %d % %d = %d\n", valor1, valor2, valor1 % valor2);

	return 0;
}
