/*
 * Nome: Kauã Palota
 * Exercício: 14
 * Descrição: Calcula operações lógicas com duas variáveis booleanas.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int A, B;

    printf("Digite A e B (0 ou 1): ");
    if (scanf("%d %d", &A, &B) != 2 || (A != 0 && A != 1) || (B != 0 && B != 1)) {
        printf("Valores invalidos.\n");
        return 1;
    }

    printf("A && B = %d\n", A && B);
    printf("A || B = %d\n", A || B);
    printf("!A = %d\n", !A);
    printf("A ^ B = %d\n", A ^ B);

    return 0;
}
