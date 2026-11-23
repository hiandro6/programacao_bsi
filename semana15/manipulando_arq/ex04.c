#include <stdio.h>

int main(void) {
	FILE *arquivo;
	
	char nome[100];	

	arquivo = fopen("nome.txt", "r");
	
	if (arquivo == NULL) {
		printf("erro ao abrir o arquivo! \n");
		return 1;
	}
	
	if (fgets(nome, sizeof(nome), arquivo) != NULL) {
		printf("nome completo: %s \n", nome);
	}

	fclose(arquivo);
	
	return 0;
}
