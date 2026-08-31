#include <stdio.h>

int main() {
    int a;
    int b;
    int op;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("MENU\n");
    printf("1 - E bit a bit (&)\n");
    printf("2 - OU bit a bit (|)\n");
    printf("3 - OU exclusivo (^)\n");
    printf("4 - Deslocamento a esquerda (<<)\n");
    printf("5 - Deslocamento a direita (>>)\n");

    printf("\nDigite o codigo da operacao: ");
    scanf("%d", &op);

    switch (op) {

        case 1:
            resultado = a & b;
            printf("%d em decimal, %x em hexadecimal\n", resultado, resultado);
            break;

        case 2:
            resultado = a | b;
            printf("%d em decimal, %x em hexadecimal\n", resultado, resultado);
            break;

        case 3:
            resultado = a ^ b;
            printf("%d em decimal, %x em hexadecimal\n", resultado, resultado);
            break;

        case 4:
            resultado = a << b;
            printf("%d em decimal, %x em hexadecimal\n", resultado, resultado);
            break;

        case 5:
            resultado = a >> b;
            printf("%d em decimal, %x em hexadecimal\n", resultado, resultado);
            break;

        default:
            printf("Operacao invalida\n");
    }

    return 0;
}
