/*
 * Nome: Kauã Palota
 * Exercício: 56
 * Descrição: Simula um sistema de login com usuário e senha.
 * Data: 24/09/2026
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char usuario[50];
    char senha[50];

    printf("Usuario: ");
    if (scanf("%49s", usuario) != 1) return 1;

    printf("Senha: ");
    if (scanf("%49s", senha) != 1) return 1;

    if (strcmp(usuario, "admin") == 0 && strcmp(senha, "1234") == 0)
        printf("Acesso concedido.\n");
    else
        printf("Acesso negado.\n");

    return 0;
}
