#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
	int n = 3;
	p = (int *) malloc(n * sizeof(int));

	if (p == NULL) {
		printf("falha ao alocar memoria! \n");
		return 1;
	}

	// usa a memoria alocada
	for (int i = 0; i < n; i++) {
		printf("digite o %d valor: ", i + 1);
		scanf("%d", &p[i]);
		printf("valor na memoria: %d\n", p);
	}

	for (int i = 0; i < n; i++) {
		printf("valor da %d leitura: %d \n", i + 1, p[i]);
		
	}
	
	p = realloc(p, (n + 2) * sizeof(int));
	if (p == NULL) {
		printf("falha ao alocar memoria! \n");
		return 1;
	}

	for (int i = n; i < (n + 2); i++) {
		printf("digite o %d valor: ", i + 1);
		scanf("%d", &p[i]);
		printf("valor na memoria: %d\n", p);
	}

	for (int i = 0; i < (n + 2) ; i++) {
		printf("valor da %d leitura: %d \n", i + 1, p[i]);
		
	}

	free(p);	

	return 0;
}
