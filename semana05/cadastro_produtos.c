#include <stdio.h>
#include <string.h>

int main() {
    int opcao;
    char nomeProduto[21]; // 20 caracteres + \0
    int quantidade = 0;
    float preco = 0.0;
    int produtosCadastrados = 0;
    int quantidadeTemp, i;
    float precoTemp, valorTotal;
    
    do {
        // Exibição do menu
        printf("\n===== SUPERMERCADO =====\n");
        printf("1 - Adicionar produto\n");
        printf("2 - Listar produtos\n");
        printf("3 - Calcular valor total do estoque\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        switch(opcao) {
            case 1: // Adicionar produto
                printf("\n--- ADICIONAR PRODUTO ---\n");
                printf("Nome do produto (sem espacos): ");
                scanf("%s", nomeProduto);
                
                printf("Quantidade em estoque: ");
                scanf("%d", &quantidade);
                
                printf("Preco unitario: ");
                scanf("%f", &preco);
                
                // Validações
                if (quantidade <= 0 || preco <= 0) {
                    printf("ERRO: Quantidade e preco devem ser positivos!\n");
                    printf("Produto NAO cadastrado.\n");
                } else {
                    produtosCadastrados++;
                    printf("Produto '%s' cadastrado com sucesso!\n", nomeProduto);
                    printf("Quantidade: %d | Preco: R$ %.2f\n", quantidade, preco);
                }
                break;
                
            case 2: // Listar produtos
                printf("\n--- LISTA DE PRODUTOS ---\n");
                
                // Utilizando for para imprimir linha tracejada
                for (i = 0; i < 40; i++) {
                    printf("-");
                }
                printf("\n");
                
                if (produtosCadastrados == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("Ultimo produto cadastrado:\n");
                    printf("Nome: %s\n", nomeProduto);
                    printf("Quantidade: %d\n", quantidade);
                    printf("Preco: R$ %.2f\n", preco);
                    printf("Total de produtos cadastrados: %d\n", produtosCadastrados);
                }
                
                // Outra linha tracejada com for
                for (i = 0; i < 40; i++) {
                    printf("-");
                }
                printf("\n");
                break;
                
            case 3: // Calcular valor total do estoque
                printf("\n--- VALOR TOTAL DO ESTOQUE ---\n");
                
                if (produtosCadastrados == 0) {
                    printf("Nenhum produto cadastrado.\n");
                } else {
                    printf("Ultimo produto cadastrado:\n");
                    printf("Nome: %s\n", nomeProduto);
                    printf("Quantidade: %d\n", quantidade);
                    printf("Preco unitario: R$ %.2f\n", preco);
                    
                    valorTotal = quantidade * preco;
                    printf("\nValor total do estoque: R$ %.2f\n", valorTotal);
                }
                break;
                
            case 4: // Sair
                printf("\nEncerrando o sistema...\n");
                break;
                
            default: // Opção inválida
                printf("\nOpcao invalida!\n");
                break;
        }
        
    } while (opcao != 4);
    
    return 0;
}
