/*
 * Nome: Kauã Palota
 * Exercício: 29
 * Descrição: Demonstra escopo de variáveis locais com o mesmo nome.
 * Data: 24/09/2026
 */

#include <stdio.h>

void mostraX(void) {
    int x = 10;
    printf("x dentro da funcao: %d\n", x);
}

int main(void) {
    int x = 5;

    mostraX();
    printf("x dentro do main: %d\n", x);

    /*
    As variáveis possuem escopos diferentes. O x da função mostraX
    existe dentro dela e vale 10. O x do main existe no main e vale 5.
    Um não altera diretamente o outro.
    */

    return 0;
}
