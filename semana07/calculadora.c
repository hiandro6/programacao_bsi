#include <stdio.h>

float soma(float, float);
float subtracao(float, float);
float multiplicacao(float, float);
float divisao(float, float);
int menu();

int main() {
	printf("bem vindo a calculadora \n");
	int operacao = menu();
	float num1, num2, resultado;
	
	if (operacao != 0) {

		printf("digite o primeiro valor: ");
		scanf("%f", &num1);

		printf("digite o segundo valor: ");
		scanf("%f", &num2);
	}
	

	switch (operacao) {
	
	case 0: 
		printf("encerrando o programa, muito obrigado");
		return 0;
	
	case 1: 
		resultado = soma(num1, num2);
		printf("%.2f + %.2f = %.2f", num1, num2, resultado);
		break;
	case 2: 
		resultado = subtracao(num1, num2);
		printf("%.2f - %.2f = %.2f", num1, num2, resultado);
		break;
	case 3: 
		resultado = multiplicacao(num1, num2);
		printf("%.2f * %.2f = %.2f", num1, num2, resultado);
		break;
	case 4:
		resultado = divisao(num1, num2);
		printf("%.2f / %.2f = %.2f", num1, num2, resultado);
		break;
	default:
		printf("opcao invalida, tente novamente. \n");
	}
	


return 0;

}

float soma(float valor1, float valor2){
	return valor1 + valor2;
}

float subtracao(float valor1, float valor2){
	return valor1 - valor2;
}

float multiplicacao(float valor1, float valor2){
	return valor1 * valor2;
}

float divisao(float valor1, float valor2){
	return valor1 / valor2;
}

int menu() {
	int i;
	do {
		printf("[1] SOMA \n");
		printf("[2] SUBTRACAO \n");
		printf("[3] MULTIPLICACAO \n");
		printf("[4] DIVISAO \n");
		printf("[0] SAIR \n");
		printf("escolha uma opcao: ");
		scanf("%d", &i);
	} while ((i < 0) || (i > 4));

	return i;
}
