/*
 * Nome: Kauã Palota
 * Exercício: 26
 * Descrição: Demonstra a importância de nomes significativos em variáveis e funções.
 * Data: 24/09/2026
 */

#include <stdio.h>

/* Exemplo ruim:
int a, b;
a = b * 2;
*/

/* Exemplo melhor, porque os nomes explicam a intenção. */
int calculaDobro(int numero) {
    return numero * 2;
}

int main(void) {
    int numero;
    int dobro;

    printf("Digite um numero: ");
    if (scanf("%d", &numero) != 1) return 1;

    dobro = calculaDobro(numero);
    printf("Dobro: %d\n", dobro);

    return 0;
}
