/*
 * Nome: Kauã Palota
 * Exercício: 43
 * Descrição: Calculadora simples usando switch-case.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    double a, b, resultado;
    char operacao;

    printf("Digite dois numeros e a operacao (+ - * /): ");
    if (scanf("%lf %lf %c", &a, &b, &operacao) != 3) return 1;

    switch (operacao) {
        case '+':
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (b == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Operacao invalida.\n");
    }

    return 0;
}
