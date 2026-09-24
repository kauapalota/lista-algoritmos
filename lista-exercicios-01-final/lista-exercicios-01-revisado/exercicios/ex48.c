/*
 * Nome: Kauã Palota
 * Exercício: 48
 * Descrição: Calcula as raízes de uma equação do segundo grau tratando o delta.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c, delta, x1, x2;

    printf("Digite a, b e c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3 || a == 0) {
        printf("Valores invalidos.\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("Delta negativo: nao existem raizes reais.\n");
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("Uma raiz real: %.2f\n", x1);
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    }

    return 0;
}
