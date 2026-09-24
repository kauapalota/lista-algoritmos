/*
 * Nome: Kauã Palota
 * Exercício: 16
 * Descrição: Verifica aprovação considerando nota e frequência.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float nota, frequencia;

    printf("Digite a nota: ");
    if (scanf("%f", &nota) != 1) return 1;

    printf("Digite a frequencia (%%): ");
    if (scanf("%f", &frequencia) != 1) return 1;

    if (nota >= 7.0f && frequencia >= 75.0f)
        printf("Aprovado.\n");
    else
        printf("Reprovado.\n");

    return 0;
}
