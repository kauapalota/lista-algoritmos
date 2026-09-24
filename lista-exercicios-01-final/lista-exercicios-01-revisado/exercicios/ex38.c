/*
 * Nome: Kauã Palota
 * Exercício: 38
 * Descrição: Reescreve uma decisão if/else usando o operador ternário.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite a idade: ");
    if (scanf("%d", &idade) != 1) return 1;

    idade >= 18 ? printf("Maior de idade\n") : printf("Menor de idade\n");

    return 0;
}
