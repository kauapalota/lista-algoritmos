/*
 * Nome: Kauã Palota
 * Exercício: 23
 * Descrição: Analisa a saída de pós-incremento e pré-incremento.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int a = 5;

    printf("%d\n", a);
    printf("%d\n", a++);
    printf("%d\n", ++a);

    /*
    Saida:
    5
    5
    7

    Em a++, o valor atual (5) e usado primeiro e depois a e incrementado.
    Assim, a passa a ser 6. Em seguida, ++a incrementa primeiro, levando
    a para 7, e usa esse valor na expressao.
    */

    return 0;
}
