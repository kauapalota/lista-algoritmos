/*
 * Nome: Kauã Palota
 * Exercício: 32
 * Descrição: Troca dois valores usando ponteiros e passagem por referência.
 * Data: 24/09/2026
 */

#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temporario = *a;
    *a = *b;
    *b = temporario;
}

int main(void) {
    int a, b;

    printf("Digite dois numeros: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;

    printf("Antes: a = %d, b = %d\n", a, b);
    trocarValores(&a, &b);
    printf("Depois: a = %d, b = %d\n", a, b);

    return 0;
}
