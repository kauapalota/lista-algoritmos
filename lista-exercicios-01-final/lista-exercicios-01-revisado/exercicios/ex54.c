/*
 * Nome: Kauã Palota
 * Exercício: 54
 * Descrição: Compara duas strings usando strcmp.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char primeira[100], segunda[100];

    printf("Digite a primeira string: ");
    fgets(primeira, sizeof(primeira), stdin);

    printf("Digite a segunda string: ");
    fgets(segunda, sizeof(segunda), stdin);

    primeira[strcspn(primeira, "\n")] = '\0';
    segunda[strcspn(segunda, "\n")] = '\0';

    if (strcmp(primeira, segunda) == 0)
        printf("As strings sao iguais.\n");
    else
        printf("As strings sao diferentes.\n");

    return 0;
}
