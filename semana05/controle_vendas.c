#include <stdio.h>

int main() {
    int codigo;
    float valor;
    int totalVendas = 0;
    float totalArrecadado = 0.0;
    
    printf("Sistema de Controle de Vendas - Lanchonete\n");
    printf("Digite o codigo do produto e o valor da venda\n");
    printf("Para encerrar, digite o codigo -1\n\n");
    
    while (1) {
        // Leitura do codigo do produto
        printf("Codigo do produto: ");
        scanf("%d", &codigo);
        
        // Verifica se é o código de parada
        if (codigo == -1) {
            break;
        }
        
        // Leitura do valor da venda
        printf("Valor da venda: ");
        scanf("%f", &valor);
        
        // Validação do valor
        if (valor <= 0) {
            printf("Valor inválido! Venda ignorada.\n\n");
            continue;
        }
        
        // Contabiliza a venda válida
        totalVendas++;
        totalArrecadado += valor;
        printf("Venda registrada com sucesso!\n\n");
    }
    
    // Exibição do resumo final
    printf("\n=== RESUMO FINAL ===\n");
    if (totalVendas == 0) {
        printf("Nenhuma venda registrada.\n");
    } else {
        printf("Total de vendas: %d\n", totalVendas);
        printf("Valor arrecadado: R$ %.2f\n", totalArrecadado);
    }
    
    return 0;
}
