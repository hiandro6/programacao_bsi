#include <stdio.h>

int main(void) {
	FILE *arquivo;

	int numero ;

	arquivo = fopen("numero.bin", "rb");

	if (arquivo == NULL) {
		printf("erro ao abrir arquivo! \n");
		return 1;
	}

	if (fread(&numero, sizeof(int), 1, arquivo) == 1) {
		printf("numero recuperado: %d \n", numero);
	} else {
		printf("erro ao ler o arquivo! \n");
	}
	
	fclose(arquivo);
	
	return 0;

}
