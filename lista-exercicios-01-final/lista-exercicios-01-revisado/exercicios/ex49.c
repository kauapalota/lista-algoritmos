/*
 * Nome: Kauã Palota
 * Exercício: 49
 * Descrição: Converte uma nota de 0 a 100 para um conceito de A a F.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int nota;
    char conceito;

    printf("Digite a nota (0 a 100): ");
    if (scanf("%d", &nota) != 1 || nota < 0 || nota > 100) {
        printf("Nota invalida.\n");
        return 1;
    }

    if (nota >= 90)
        conceito = 'A';
    else if (nota >= 80)
        conceito = 'B';
    else if (nota >= 70)
        conceito = 'C';
    else if (nota >= 60)
        conceito = 'D';
    else
        conceito = 'F';

    printf("Conceito: %c\n", conceito);
    return 0;
}
