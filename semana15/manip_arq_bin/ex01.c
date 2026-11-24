#include <stdio.h>

int main(void) {
	FILE *arquivo;

	int numero = 1234;

	arquivo = fopen("numero.bin", "wb");

	if (arquivo == NULL) {
		printf("erro ao criar arquivo! \n");
		return 1;
	}

	if (fwrite(&numero, sizeof(int), 1, arquivo) != 1) {
		printf("erro ao escrever dados!");
		fclose(arquivo);
		return 1;
	}

	fclose(arquivo);
	
	printf("numero armazenado com sucesso!");

	return 0;

}
