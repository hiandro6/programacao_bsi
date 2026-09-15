#include <stdio.h>

enum StatusPedido {PENDENTE, PROCESSANDO, ENVIADO, ENTREGUE, CANCELADO};

int main(){
	enum StatusPedido StatusAtual = PENDENTE;
	
	printf("informe o status do produto [0 - 4]: ");
	scanf("%d", &StatusAtual);

	switch (StatusAtual) {

	case 0:
		printf("pedido pendente \n");
		break;
	case 1:
		printf("pedido processando \n");
		break;
	case 2:
		printf("pedido enviado \n");
		break;
	case 3:
		printf("pedido entregue \n");
		break;
	case 4:
		printf("pedido cancelado \n");
		break;
		

	}
	
	return 0;
}

