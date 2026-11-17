#include <stdio.h>
#include "aluno.h"





typedef enum {
	APROVADO,
	REPROVADO
} Situacao;

typedef struct {
	char nome[100];
	int matricula;
	Situacao situacao;

} Estudante;

typedef struct {
	float nota1;
	float nota2;
	float media;

} Notas;


float calcular_media(float a, float b) {

	return (a + b / 2);
};

int definir_situacao(float media) {
	if (media >= 6) {
		return 1;
	};

	
	return 0;

};


void cadastrar_aluno(char *nome, int matricula, float nota1, float nota2) {
	printf("digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("digite a matricula do aluno: ");
	scanf("%d", &matricula);
	printf("digite a 1 nota do aluno: ");
	scanf("%f", &nota1);
	printf("digite a 2 nota do aluno: ");
	scanf("%f", &nota2);
	float media = calcular_media(nota1, nota2);
	int situacao = definir_situacao(media);
	
}


int main(void)
{

	return 0;
};
