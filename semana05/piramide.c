#include <stdio.h>

int main() {
    int altura;
    int i, j;
    int opcao;
    
    do {
        printf("Digite a altura da piramide (1 a 20): ");
        scanf("%d", &altura);
        

        if (altura < 1 || altura > 20) {
            printf("Altura invalida!\n");
            return 0; // Encerra o programa
        }
        

        printf("\n");
        for (i = 1; i <= altura; i++) {
     
            for (j = 1; j <= i; j++) {
                printf("*");
            }
            printf("\n");
        }
        
       
        do {
            printf("\nDeseja desenhar novamente? (1-sim, 0-nao): ");
            scanf("%d", &opcao);
            
            if (opcao == 0) {
                printf("Encerrando o programa...\n");
                break; 
            } else if (opcao == 1) {
                break; 
            } else {
                printf("Opcao invalida! Digite 1 ou 0.\n");
                continue;
            }
        } while (1); 
        
    } while (opcao == 1); 
    
    return 0;
}
