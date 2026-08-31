#include <stdio.h>

int main() {

	int n = 0;
	printf("digite um numero inteiro: ");
	scanf("%d", &n);
	
	int n1 = 0;
	int n2 = 1;
	int n3 = 0;
	for (int x = 0; x <= n; x++) {
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
		n3 = n1 + n2;
		
	}
	
	return 0;

}
