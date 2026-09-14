#include <stdio.h>
int main(){
	int matriz[3][3];
	int num = 0;
	int soma = 0;
	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			printf("digite o numero da linha %d coluna %d: ", i, j);
			scanf("%d", &num);
			soma += num;
			matriz[i][j] = num;
		}
	}
	printf("%d", soma);
	return 0;

}
