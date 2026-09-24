/*
 * Nome: Kauã Palota
 * Exercício: 40
 * Descrição: Dobra e divide um número por dois usando deslocamento de bits.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    unsigned int numero;

    printf("Digite um numero inteiro nao negativo: ");
    if (scanf("%u", &numero) != 1) return 1;

    printf("Dobro (<< 1): %u\n", numero << 1);
    printf("Divisao por 2 (>> 1): %u\n", numero >> 1);

    return 0;
}
