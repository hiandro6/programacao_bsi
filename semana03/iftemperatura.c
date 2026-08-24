#include <stdio.h>

int main() {
	int temperatura;
	
	printf("Digite a temperatura atual (em graus Celsius): ");
	scanf("%d", &temperatura);

	if (temperatura >= 35) {
		printf("Alerta: Muito quente! Beba bastante agua. \n");
	}

	else if (temperatura >= 25) {
		printf("Clima quente! Dia bom para ir a praia. \n");
	}

	else if (temperatura >= 5) {
		printf("Clima frio. Não esqueca o casaco. \n");
	}
	
	else {
		printf("Alerta: Muito frio! Fique aquecido. \n");
	}

	return 0;
}
