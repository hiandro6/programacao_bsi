#include <stdio.h>

int main() {

	int n = 0;
	printf("digite um numero inteiro: ");
	scanf("%d", &n);
	int fatorial = 1;	

	for (int x = 1; x <= n; x++) {
		printf((x != n) ? ("%d x ") : ("%d = "), x);
		fatorial *= x;	
	}
	
	printf("%d",fatorial);
	return 0;

}
