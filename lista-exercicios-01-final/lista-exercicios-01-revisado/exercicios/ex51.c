/*
 * Nome: Kauã Palota
 * Exercício: 51
 * Descrição: Exibe o dia da semana usando switch-case e validação.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int dia;

    printf("Digite um numero de 1 a 7: ");
    if (scanf("%d", &dia) != 1) return 1;

    if (dia < 1 || dia > 7) {
        printf("Numero invalido.\n");
        return 0;
    }

    switch (dia) {
        case 1: printf("Domingo\n"); break;
        case 2: printf("Segunda-feira\n"); break;
        case 3: printf("Terca-feira\n"); break;
        case 4: printf("Quarta-feira\n"); break;
        case 5: printf("Quinta-feira\n"); break;
        case 6: printf("Sexta-feira\n"); break;
        case 7: printf("Sabado\n"); break;
    }

    return 0;
}
