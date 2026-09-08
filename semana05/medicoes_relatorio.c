#include <stdio.h>

int main() {
    int N, i;
    float temperatura;
    float soma = 0.0;
    float maior = 0.0, menor = 0.0;
    int totalValidas = 0;
    int pacientesFebre = 0;
    int primeiraValida = 1; // Flag para identificar a primeira temperatura valida
    
    printf("Monitoramento de Temperatura Corporal\n");
    printf("Digite o numero de medicoes: ");
    scanf("%d", &N);
    
    // Verifica se N e positivo
    if (N <= 0) {
        printf("Numero de medicoes deve ser positivo!\n");
        return 1;
    }
    
    printf("Digite as %d temperaturas (em Celsius):\n", N);
    
    for (i = 1; i <= N; i++) {
        printf("Paciente %d: ", i);
        scanf("%f", &temperatura);
        
        // Verifica se a temperatura e valida
        if (temperatura < 30.0 || temperatura > 45.0) {
            printf("Temperatura invalida! Ignorando.\n");
            continue;
        }
        
        // Se for a primeira temperatura valida, inicializa maior e menor
        if (primeiraValida) {
            maior = temperatura;
            menor = temperatura;
            primeiraValida = 0;
        } else {
            // Atualiza maior temperatura
            if (temperatura > maior) {
                maior = temperatura;
            }
            // Atualiza menor temperatura
            if (temperatura < menor) {
                menor = temperatura;
            }
        }
        
        // Acumula para calcular a media
        soma += temperatura;
        totalValidas++;
        
        // Verifica se tem febre
        if (temperatura >= 37.5) {
            pacientesFebre++;
        }
    }
    
    // Verifica se houve alguma temperatura valida
    if (totalValidas == 0) {
        printf("\nNenhuma medicao valida.\n");
        return 0;
    }
    
    // Calcula e exibe os resultados
    printf("\n=== RELATORIO DE TEMPERATURAS ===\n");
    printf("Media: %.1f\n", soma / totalValidas);
    printf("Maior: %.1f\n", maior);
    printf("Menor: %.1f\n", menor);
    printf("Pacientes com febre: %d\n", pacientesFebre);
    
    return 0;
}
