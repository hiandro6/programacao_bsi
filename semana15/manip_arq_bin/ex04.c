
#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota;
};

int main(void) {
    FILE *arquivo;

    struct Aluno aluno;

    arquivo = fopen("aluno.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    if (fscanf(arquivo, "%d;%49[^;];%f",
        &aluno.matricula, aluno.nome, &aluno.nota) == 3) {

        printf("Nome: %s\n", aluno.nome);
        printf("Matricula: %d\n", aluno.matricula);
        printf("Nota: %.2f\n", aluno.nota);

    } else {
        printf("Erro ao ler os dados do arquivo!\n");
    }

    fclose(arquivo);

    return 0;
}
