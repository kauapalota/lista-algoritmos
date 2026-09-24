/*
 * Nome: Kauã Palota
 * Exercício: 09
 * Descrição: Desenha um quadrado de asteriscos usando uma função.
 * Data: 24/09/2026
 */

#include <stdio.h>

void desenhaQuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int lado;

    printf("Digite o lado: ");
    if (scanf("%d", &lado) != 1 || lado < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    desenhaQuadrado(lado);
    return 0;
}
