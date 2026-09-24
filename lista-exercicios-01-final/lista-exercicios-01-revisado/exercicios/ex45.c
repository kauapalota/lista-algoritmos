/*
 * Nome: Kauã Palota
 * Exercício: 45
 * Descrição: Calcula a expressão com pós-incremento e pré-decremento.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    int c = a++ + --b;

    /*
    a++ usa 5 e depois aumenta a para 6.
    --b diminui b de 10 para 9 e usa 9.
    Portanto c = 5 + 9 = 14.
    Valores finais: a = 6, b = 9, c = 14.
    */

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);
    return 0;
}
