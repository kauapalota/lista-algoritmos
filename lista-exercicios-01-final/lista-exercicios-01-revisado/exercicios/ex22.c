/*
 * Nome: Kauã Palota
 * Exercício: 22
 * Descrição: Analisa a divisão por zero e diferencia erro de sintaxe de problema semântico/runtime.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    /*
    O código original possui sintaxe válida: printf, parênteses, aspas,
    ponto e vírgula etc. Portanto, não há um erro de sintaxe evidente.

    O problema é a expressão 10 / 0, que representa divisão por zero.
    Isso não é um erro de sintaxe; é uma operação inválida e deve ser
    evitada. Uma correção simples é testar o divisor antes da divisão.
    */

    int divisor = 0;

    if (divisor == 0) {
        printf("Nao e possivel dividir por zero.\n");
    } else {
        printf("O resultado e %d\n", 10 / divisor);
    }

    return 0;
}
