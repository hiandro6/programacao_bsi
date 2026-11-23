#include <stdio.h>

int main(void) {
	FILE *arquivo;
	
	arquivo = fopen("dados.txt", "w");
	
	if (arquivo == NULL) {
		printf("erro ao abrir o arquivo! \n");
		return 1;
	}
	
	char nome[60];
	printf("digite o seu nome: ");
	scanf("%s", &nome);
	fprintf(arquivo, "Ola, %s! \n", nome);
	fprintf(arquivo, "Aprendendo arquivos em C. \n");

	fclose(arquivo);
	printf("Arquivo aberto com sucesso! \n");

	
	return 0;
}
