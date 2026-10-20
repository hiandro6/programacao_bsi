#include <stdio.h>

int fatorial(int n) {
	if (n <= 1) {
		return 1;
	}
	
	printf("%d X", n);
	return n * fatorial(n - 1);
	
}

int main() {
	int n;
	printf("digite o numero que deseja ver o fatorial: ");
	scanf("%d", &n);
	printf("\n fatorial de %d = %d \n", n, fatorial(n));
	return 0;
}
