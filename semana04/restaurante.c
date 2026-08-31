#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    int sobremesa;

    float preco;
    float valorProdutos;
    float valorSobremesa;
    float desconto;
    float valorFinal;

    printf("===== MENU =====\n");
    printf("1 - Hamburguer ........ R$18,00\n");
    printf("2 - X-Salada .......... R$22,00\n");
    printf("3 - X-Bacon ........... R$25,00\n");
    printf("4 - Batata Frita ...... R$12,00\n");
    printf("5 - Refrigerante ...... R$ 7,00\n");

    printf("\nDigite o codigo do produto: ");
    scanf("%d", &codigo);

    switch (codigo) {

        case 1:
            preco = 18.00;
            printf("Produto escolhido: Hamburguer\n");
            break;

        case 2:
            preco = 22.00;
            printf("Produto escolhido: X-Salada\n");
            break;

        case 3:
            preco = 25.00;
            printf("Produto escolhido: X-Bacon\n");
            break;

        case 4:
            preco = 12.00;
            printf("Produto escolhido: Batata Frita\n");
            break;

        case 5:
            preco = 7.00;
            printf("Produto escolhido: Refrigerante\n");
            break;

        default:
            printf("Produto invalido\n");
            return 0;
    }

    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    printf("Deseja adicionar uma sobremesa? (1 para sim / 0 para nao): ");
    scanf("%d", &sobremesa);

    valorProdutos = preco * quantidade;

    if (sobremesa == 1) {
        valorSobremesa = 8.00;
    }
    else {
        valorSobremesa = 0.00;
    }

    valorFinal = valorProdutos + valorSobremesa;

    if (valorFinal > 100.00) {
        desconto = valorFinal * 0.10;
    }
    else if (valorFinal >= 50.00 && valorFinal <= 100.00) {
        desconto = valorFinal * 0.05;
    }
    else {
        desconto = 0.00;
    }

    valorFinal = valorFinal - desconto;

    printf("resumo do pedido \n");
    printf("Quantidade: %d\n", quantidade);
    printf("Valor dos produtos: R$ %.2f\n", valorProdutos);
    printf("Valor da sobremesa: R$ %.2f\n", valorSobremesa);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Valor final do pedido: R$ %.2f\n", valorFinal);

    return 0;
}
