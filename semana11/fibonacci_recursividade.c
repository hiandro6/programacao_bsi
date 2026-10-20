#include <stdio.h>

int fibo(int n) {
	if (n <= 1) {
		return n;
	}
	
	
	int atual = fibo(n-1) + fibo(n - 2);
	return atual;
	
}

int main() {
	int n;
	printf("digite o numero de termos da sequencia de Fibonacci que deseja ver: ");
	scanf("%d", &n);
	printf("sequencia de fibonacci com %d termos: ", n);
	for (int i = 0; i <= n; i++){
		printf(" %d ", fibo(i));
	}
	printf("\n termo numero %d = %d \n", n, fibo(n));
	return 0;
}
