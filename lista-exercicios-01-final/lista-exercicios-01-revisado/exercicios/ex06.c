/*
 * Nome: Kauã Palota
 * Exercício: 06
 * Descrição: Compara a soma de 1 a N usando while e fórmula matemática.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    long long n, soma = 0, i = 1, formula;

    printf("Digite N: ");
    if (scanf("%lld", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    while (i <= n) {
        soma += i;
        i++;
    }

    formula = n * (n + 1) / 2;

    printf("Soma com while: %lld\n", soma);
    printf("Soma pela formula: %lld\n", formula);
    printf("A formula e mais eficiente porque usa uma quantidade constante de operacoes.\n");

    return 0;
}
