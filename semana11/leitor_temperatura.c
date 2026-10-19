#include <stdio.h>
#include <stdlib.h>

int main() {
	float *p;
	int n;
	printf("quantas leituras serao realizadas? ");
	scanf("%d", &n);
	p = (float *) malloc(n * sizeof(float));

	if (p == NULL) {
		printf("falha ao alocar memoria! \n");
		return 1;
	}

	// usa a memoria alocada
	for (int i = 0; i < n; i++) {
		printf("digite a temperatura da %d leitura: ", i + 1);
		scanf("%f", &p[i]);
		printf("valor na memoria: %d\n", p);
	}

	for (int i = 0; i < n; i++) {
		printf("temperatura da %d leitura: %.2f \n", i + 1, p[i]);
		
	}

	// libera a memoria quando não precisar mais
	free(p);	

	return 0;
}
