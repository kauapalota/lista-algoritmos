/*
 * Nome: Kauã Palota
 * Exercício: 39
 * Descrição: Calcula a expressão inteira e demonstra a precedência dos operadores.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int x = 10 + 5 * 2 / 3 - 1;

    /*
    Primeiro: 5 * 2 = 10
    Depois: 10 / 3 = 3, pois a divisão e inteira
    Por fim: 10 + 3 - 1 = 12
    */

    printf("x = %d\n", x);
    return 0;
}
