/*
 * Nome: Kauã Palota
 * Exercício: 44
 * Descrição: Avalia a expressão lógica fornecida no enunciado.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    printf("%d\n", (5 > 3) && (2 == 2) || !(10 < 5));

    /*
    Resultado: 1.
    As duas primeiras comparacoes sao verdadeiras e a negacao de
    (10 < 5) tambem e verdadeira.
    */

    return 0;
}
