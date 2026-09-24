/*
 * Nome: Kauã Palota
 * Exercício: 25
 * Descrição: Lê um número e exibe o seu dobro.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int x, y;

    printf("Digite um numero: ");
    scanf("%d", &x);

    y = x * 2;
    printf("O dobro de %d eh %d\n", x, y);

    /*
    Se o usuário digitar 10, a saída será:
    O dobro de 10 eh 20
    */

    return 0;
}
