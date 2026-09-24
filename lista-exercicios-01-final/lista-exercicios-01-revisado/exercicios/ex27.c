/*
 * Nome: Kauã Palota
 * Exercício: 27
 * Descrição: Declara, lê e exibe inteiro, double, caractere e string.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int numero;
    double decimal;
    char caractere;
    char string[100];

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    printf("Digite um numero decimal: ");
    scanf("%lf", &decimal);

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("Digite uma string: ");
    scanf("%99s", string);

    printf("\nInteiro: %d\n", numero);
    printf("Decimal: %.2f\n", decimal);
    printf("Caractere: %c\n", caractere);
    printf("String: %s\n", string);

    return 0;
}
