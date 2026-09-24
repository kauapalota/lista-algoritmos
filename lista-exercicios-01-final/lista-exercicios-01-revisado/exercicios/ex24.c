/*
 * Nome: Kauã Palota
 * Exercício: 24
 * Descrição: Reescreve o programa de paridade com comentários descritivos.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    /* Declaração e leitura do número. */
    int n;

    printf("Digite um numero: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    /* Verificação da paridade usando o resto da divisão por 2. */
    if (n % 2 == 0)
        printf("par\n");
    else
        printf("impar\n");

    /* Finalização do programa. */
    return 0;
}
