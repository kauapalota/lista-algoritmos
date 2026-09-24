/*
 * Nome: Kauã Palota
 * Exercício: 02
 * Descrição: Lê N e imprime os primeiros termos da sequência de Fibonacci.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int n;
    long long a = 1, b = 1, proximo;

    printf("Digite N: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Entrada invalida.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%lld", a);
        if (i < n - 1) printf(" ");
        proximo = a + b;
        a = b;
        b = proximo;
    }
    printf("\n");
    return 0;
}
