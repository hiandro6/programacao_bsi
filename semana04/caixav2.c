#include <stdio.h>
int main() {
	
	int nTransacao = 0;
	int valorTotal = 0;
    	int valor = 0;
        while (valor != 9999) {
		
		printf("digite o valor que deseja sacar: ");
		scanf("%d", &valor);
		
		if (valor == 9999) {
			printf("encerrando o sistema...\n");
			break;
		}
		else if (valor <= 0) {
			printf("valor de saque invalido, tente valores positivos\n");
			continue;
		}
		else if (valor % 10 != 0) {
			printf("so trabalhamos com notas de 10, 20 e 50, tente outro valor \n");
			continue;
		}
		
		nTransacao += 1;
		valorTotal += valor;		
	}
	
	printf("o valor total de saque nas %d transacoes foi %d reais", nTransacao, valorTotal);
        return 0;

}
