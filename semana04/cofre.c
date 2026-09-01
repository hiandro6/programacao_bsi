#include <stdio.h>
int main() {
	
	const int senha = 1234;
	int nTentativa = 1;
	int tentativa = 0;
    
        for (int i = 0; i <= 4; i++) {
		
		printf("digite a senha do cofre: ");
		scanf("%d", &tentativa);
		
		if (tentativa == 9999) {
			printf("alerta de invasao, abortando o sistema...\n");
			break;
		}
		else if (tentativa == senha) {
			printf("cofre aberto com sucesso!\n");
			break;
		}
		else if (nTentativa == 3) {
			printf("numero de tentativas excedido!\n");
			break;
		}
		else {
			printf("senha incorreta, tente novamente\n");
			nTentativa += 1;
		}
		
	}

        return 0;

}
