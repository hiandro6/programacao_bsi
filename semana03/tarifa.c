#include <stdio.h>

int main() {
	int consumo;
	printf("digite o consumo: ");
	scanf("%d", &consumo);

	if (consumo < 0){
		printf("consumo inválido");
	
	}

	else {
		if (consumo <= 100){
			float tarifa = (consumo * 0.5);
			printf("%f e o valor da sua tarifa", tarifa);
	
		}

		else if ((consumo >= 101) && (consumo <= 200)){
			printf("%f e o valor da sua tarifa", (consumo * 0.75));
	
		}

		else if ((consumo > 200) && (consumo <= 500)){
			printf("%f e o valor da sua tarifa", (consumo * 1.20));
	
		}

		else if (consumo > 500){
			printf("%f e o valor da sua tarifa", (consumo * 1.20) + (consumo * 0.15));
	
		}
	}
	
	return 0;
}
