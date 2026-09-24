/*
 * Nome: Kauã Palota
 * Exercício: 53
 * Descrição: Verifica se um ano é bissexto.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int ano;

    printf("Digite o ano: ");
    if (scanf("%d", &ano) != 1) return 1;

    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
        printf("Ano bissexto.\n");
    else
        printf("Nao e ano bissexto.\n");

    return 0;
}
