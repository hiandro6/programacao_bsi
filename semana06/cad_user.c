#include <stdio.h>
int main(){
	
	int n_usuarios = 0;
	printf("digite o numero de usuarios que deseja cadastrar: ");
	scanf("%d", &n_usuarios);
	int matriz[n_usuarios][4];
	int id, idade, n_dependentes, renda;
	for (int i = 1; i <= n_usuarios; i++) {
		printf("digite o id do %d usuario: ", i);
		scanf("%d", &id);

		printf("digite a idade do %d usuario: ", i);
		scanf("%d", &idade);

		printf("digite o n de dependentes do %d usuario: ", i);
		scanf("%d", &n_dependentes);

		printf("digite a renda do %d usuario: ", i);
		scanf("%d", &renda);
		
		matriz[i][0] = id;
		matriz[i][1] = idade;
		matriz[i][2] = n_dependentes;
		matriz[i][3] = renda;

	}
	
	int consulta = 0;
	printf("digite um id de usuario para consultar: ");
	scanf("%d", &consulta);
	int encontrado = 0;
	for (int i = 0; i < n_usuarios; i++) {
		if (matriz[i][0] == consulta) {
   			printf("ID: %d\n", matriz[i][0]);
   			printf("Idade: %d\n", matriz[i][1]);
    			printf("Dependentes: %d\n", matriz[i][2]);
  			printf("Renda: %d\n\n", matriz[i][3]);
			encontrado = 1;
		}
	}
	if (encontrado == 0) {
		printf("usuario nao cadastrado");
	}


	return 0;

}
