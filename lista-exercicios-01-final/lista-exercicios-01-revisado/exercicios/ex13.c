/*
 * Nome: Kauã Palota
 * Exercício: 13
 * Descrição: Verifica se três números estão em ordem crescente ou decrescente.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("Digite tres numeros: ");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (a < b && b < c)
        printf("Ordem crescente.\n");
    else if (a > b && b > c)
        printf("Ordem decrescente.\n");
    else
        printf("Nao estao em ordem estritamente crescente ou decrescente.\n");

    return 0;
}
