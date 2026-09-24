/*
 * Nome: Kauã Palota
 * Exercício: 30
 * Descrição: Calcula a divisão real entre dois inteiros usando cast para float.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int a, b;
    float resultado;

    printf("Digite dois numeros inteiros: ");
    if (scanf("%d %d", &a, &b) != 2 || b == 0) {
        printf("Entrada invalida ou divisor igual a zero.\n");
        return 1;
    }

    resultado = (float)a / b;
    printf("Divisao real: %.2f\n", resultado);

    return 0;
}
