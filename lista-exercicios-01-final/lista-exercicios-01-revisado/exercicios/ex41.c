/*
 * Nome: Kauã Palota
 * Exercício: 41
 * Descrição: Verifica se um caractere é uma letra minúscula.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    char c;

    printf("Digite um caractere: ");
    if (scanf(" %c", &c) != 1) return 1;

    if (c >= 'a' && c <= 'z')
        printf("E uma letra minuscula.\n");
    else
        printf("Nao e uma letra minuscula.\n");

    return 0;
}
