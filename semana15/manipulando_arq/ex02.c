#include <stdio.h>

int main(void) {
	FILE *arquivo;
	
	char nome[60];
	printf("digite o seu nome: ");
	scanf("%s", &nome);
	
	int idade;
	printf("digite a sua idade: ");
	scanf("%d", &idade);

	float nota;
	printf("digite a sua nota: ");
	scanf("%f", &nota);

	arquivo = fopen("aluno.txt", "w");
	
	if (arquivo == NULL) {
		printf("erro ao abrir o arquivo! \n");
		return 1;
	}
	
	
	fprintf(arquivo, "nome: %s \n", nome);
	fprintf(arquivo, "idade: %d \n", idade);
	fprintf(arquivo, "nota: %.2f \n", nota);

	fclose(arquivo);
	printf("Arquivo editado com sucesso! \n");

	
	return 0;
}
