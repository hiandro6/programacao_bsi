#include <stdio.h>

struct Aluno {
	int matricula;
	char nome[50];
	float nota;
};


int main(void) {
	FILE *arquivo;

	struct Aluno aluno = {
		1001,
		"Carlos",
		8.5
	};

	arquivo = fopen("aluno.txt", "w");

	if (arquivo == NULL) {
		printf("erro ao criar arquivo! \n");
		return 1;
	}

	if (fprintf(arquivo, "%d;%s;%.2f\n", aluno.matricula, aluno.nome, aluno.nota) < 0) {
		printf("erro ao salvar o aluno! \n");
		fclose(arquivo);
		return 1;
	}

	fclose(arquivo);
	
	printf("aluno salvo com sucesso! \n");

	return 0;

}
