/*
 * Nome: Kauã Palota
 * Exercício: 52
 * Descrição: Ordena três números em ordem crescente sem usar arrays.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    printf("Digite tres numeros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) return 1;

    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);
    return 0;
}
