/*
 * Nome: Kauã Palota
 * Exercício: 08
 * Descrição: Jogo de adivinhação de um número de 1 a 100.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int secreto, tentativa;

    srand((unsigned)time(NULL));
    secreto = rand() % 100 + 1;

    do {
        printf("Tente adivinhar (1 a 100): ");
        if (scanf("%d", &tentativa) != 1) {
            printf("Entrada invalida.\n");
            return 1;
        }

        if (tentativa < secreto)
            printf("Maior\n");
        else if (tentativa > secreto)
            printf("Menor\n");
        else
            printf("Acertou!\n");
    } while (tentativa != secreto);

    return 0;
}
