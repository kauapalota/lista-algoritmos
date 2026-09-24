/*
 * Nome: Kauã Palota
 * Exercício: 28
 * Descrição: Calcula área e perímetro de um círculo usando M_PI.
 * Data: 24/09/2026
 */

#define _USE_MATH_DEFINES
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#include <stdio.h>
#include <math.h>

int main(void) {
    float raio;

    printf("Digite o raio: ");
    if (scanf("%f", &raio) != 1 || raio < 0) {
        printf("Raio invalido.\n");
        return 1;
    }

    printf("Area: %.2f\n", (float)(M_PI * raio * raio));
    printf("Perimetro: %.2f\n", (float)(2 * M_PI * raio));

    return 0;
}
