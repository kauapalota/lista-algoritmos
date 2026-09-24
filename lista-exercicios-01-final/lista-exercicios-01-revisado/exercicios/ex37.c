/*
 * Nome: Kauã Palota
 * Exercício: 37
 * Descrição: Calcula uma raiz da equação do segundo grau pela fórmula de Bhaskara.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x;

    printf("Digite a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0) {
        printf("Valores invalidos.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Nao existe raiz real.\n");
    } else {
        x = (-b + sqrt(delta)) / (2 * a);
        printf("x = %.2f\n", x);
    }

    return 0;
}
