#include <stdio.h>

int main(void) {
	FILE *arquivo;
	
	char nome[50];
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
	
	fscanf(arquivo, "nome: %49s \n idade: %d \n nota: %f", nome, &idade, &nota);
	
	printf("nome: %s \n", nome);
	printf("idade: %d \n", idade);
	printf("nota: %.2f \n", nota);

	fclose(arquivo);
	

	
	return 0;
}
