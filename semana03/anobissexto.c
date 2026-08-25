#include <stdio.h>

int main() {
	int ano;
	printf("digite o ano: ");
	scanf("%d", &ano);

	if ((ano & 3) == 0 && (ano % 100) != 0 || (ano % 400) == 0){
		printf("%d e um ano bissexto", ano);
	
	}
	else {
		printf("%d nao e um ano bissexto", ano);
	}
	
	return 0;
}
