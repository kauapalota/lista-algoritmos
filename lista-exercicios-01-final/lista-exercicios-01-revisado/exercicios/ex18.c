/*
 * Nome: Kauã Palota
 * Exercício: 18
 * Descrição: Verifica se um número pertence ao intervalo fechado de 10 a 20.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um numero: ");
    if (scanf("%d", &numero) != 1) return 1;

    if (numero >= 10 && numero <= 20)
        printf("Pertence ao intervalo [10, 20].\n");
    else
        printf("Nao pertence ao intervalo [10, 20].\n");

    return 0;
}
