#include <stdio.h>

int main() {

	int n = 0;
	printf("digite um numero inteiro: ");
	scanf("%d", &n);
	
	int soma = 0;
	for (int x = 0; x <= n; x++) {
		if (x % 2 == 0) {
			soma += x;
		}
	}
	
	printf("a soma dos valores pares entre 1 e %d foi %d", n, soma);
	return 0;

}
