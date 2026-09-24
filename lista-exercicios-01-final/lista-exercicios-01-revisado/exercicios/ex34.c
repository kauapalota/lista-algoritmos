/*
 * Nome: Kauã Palota
 * Exercício: 34
 * Descrição: Calcula a área de um círculo usando uma constante PI.
 * Data: 24/09/2026
 */

#include <stdio.h>

#define PI 3.14159

int main(void) {
    float raio, area;

    printf("Digite o raio: ");
    if (scanf("%f", &raio) != 1 || raio < 0) return 1;

    area = PI * raio * raio;
    printf("Area: %.2f\n", area);

    return 0;
}
