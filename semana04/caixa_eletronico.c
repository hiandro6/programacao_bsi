#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor;
    float limite;

    printf("===== CAIXA ELETRONICO =====\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Depositar\n");
    printf("3 - Sacar\n");
    printf("4 - Verificar limite\n");
    printf("5 - Encerrar\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("Saldo atual: R$ %.2f\n", saldo);
            break;

        case 2:
            printf("Digite o valor do deposito: ");
            scanf("%f", &valor);

            if (valor > 0) {
                saldo = saldo + valor;
                printf("Deposito realizado com sucesso!\n");
                printf("Novo saldo: R$ %.2f\n", saldo);
            }
            else {
                printf("Valor de deposito invalido!\n");
            }
            break;

        case 3:
            printf("Digite o valor do saque: ");
            scanf("%f", &valor);

            if (valor > 0) {
                if (valor <= saldo) {
                    saldo = saldo - valor;
                    printf("Saque realizado com sucesso!\n");
                    printf("Novo saldo: R$ %.2f\n", saldo);
                }
                else {
                    printf("Saldo insuficiente!\n");
                }
            }
            else {
                printf("Valor de saque invalido!\n");
            }
            break;

        case 4:
            limite = saldo * 0.30;
            printf("Limite disponivel para saque: R$ %.2f\n", limite);
            break;

        case 5:
            printf("Operacao encerrada.\n");
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
