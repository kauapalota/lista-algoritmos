/*
 * Nome: Kauã Palota
 * Exercício: 55
 * Descrição: Menu de operações matemáticas usando switch-case.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int opcao;
    double a, b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha uma opcao: ");
    if (scanf("%d", &opcao) != 1) return 1;

    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) return 1;

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Nao e possivel dividir por zero.\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
        default:
            printf("Opcao invalida.\n");
    }

    return 0;
}
