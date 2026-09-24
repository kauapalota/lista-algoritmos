/*
 * Nome: Kauã Palota
 * Exercício: 07
 * Descrição: Simula as fases de um semáforo em um ciclo.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <unistd.h>

int main(void) {
    while (1) {
        printf("Verde - 30s\n");
        sleep(30);

        printf("Amarelo - 5s\n");
        sleep(5);

        printf("Vermelho - 25s\n");
        sleep(25);
    }
    return 0;
}
