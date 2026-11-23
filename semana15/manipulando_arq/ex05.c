#include <stdio.h>

int main(void) {
	FILE *arquivo;
	
	char nome[100];	

	arquivo = fopen("frases.txt", "w");
	
	if (arquivo == NULL) {
		printf("erro ao abrir o arquivo! \n");
		return 1;
	}
	
	fputs("primeira linha. \n", arquivo);
	fputs("segunda linha. \n", arquivo);
	fputs("terceira linha. \n", arquivo);

	fclose(arquivo);
	
	return 0;
}
