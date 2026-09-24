/*
 * Nome: Kauã Palota
 * Exercício: 46
 * Descrição: Converte uma temperatura de Fahrenheit para Celsius.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float fahrenheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%f", &fahrenheit) != 1) return 1;

    celsius = (fahrenheit - 32.0f) * 5.0f / 9.0f;
    printf("Celsius: %.2f\n", celsius);

    return 0;
}
