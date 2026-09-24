/*
 * Nome: Kauã Palota
 * Exercício: 31
 * Descrição: Lê o nome completo com fgets e exibe uma saudação.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[100];

    printf("Digite seu nome completo: ");
    if (fgets(nome, sizeof(nome), stdin) == NULL) {
        return 1;
    }

    nome[strcspn(nome, "\n")] = '\0';
    printf("Ola, %s!\n", nome);

    return 0;
}
