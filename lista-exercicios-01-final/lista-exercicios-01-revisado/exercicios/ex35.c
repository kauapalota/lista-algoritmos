/*
 * Nome: Kauã Palota
 * Exercício: 35
 * Descrição: Exibe o tamanho em bytes de tipos básicos e de um ponteiro para int.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    printf("int: %zu bytes\n", sizeof(int));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu byte(s)\n", sizeof(char));
    printf("ponteiro para int: %zu bytes\n", sizeof(int *));

    return 0;
}
