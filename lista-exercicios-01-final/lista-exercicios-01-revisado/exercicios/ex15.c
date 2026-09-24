/*
 * Nome: Kauã Palota
 * Exercício: 15
 * Descrição: Verifica se um número inteiro é par ou ímpar.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero inteiro: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida. Digite um numero inteiro.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("O numero e par.\n");
    } else {
        printf("O numero e impar.\n");
    }

    return 0;
}
