#include <stdio.h>
int main() {
	
	int idade = 0;
	printf("informe sua idade: ");
	scanf("%d", &idade);
       	if (idade <= 0) {
		goto erro_idade;
	}
	printf("sua idade e %d", idade);
	
        return 0;
	
erro_idade: //definicao de rotulo
	printf("erro, a idade nao pode ser negativa");
	return 1; //codigo de erro
}

