/*
 * Nome: Kauã Palota
 * Exercício: 04
 * Descrição: Simula uma fila de banco chamando cada senha.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int pessoas;

    printf("Quantas pessoas estao na fila? ");
    if (scanf("%d", &pessoas) != 1 || pessoas < 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    for (int i = 1; i <= pessoas; i++) {
        printf("Senha %d\n", i);
    }

    return 0;
}
