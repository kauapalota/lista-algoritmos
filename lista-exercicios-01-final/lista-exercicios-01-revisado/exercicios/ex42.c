/*
 * Nome: Kauã Palota
 * Exercício: 42
 * Descrição: Calcula o primeiro dígito verificador de um CPF a partir dos nove primeiros dígitos.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    int digitos[9];
    int soma = 0, resto, verificador;

    printf("Digite os 9 primeiros digitos do CPF, separados por espacos: ");
    for (int i = 0; i < 9; i++) {
        if (scanf("%d", &digitos[i]) != 1 || digitos[i] < 0 || digitos[i] > 9) {
            printf("Entrada invalida.\n");
            return 1;
        }
    }

    for (int i = 0; i < 9; i++) {
        soma += digitos[i] * (10 - i);
    }

    resto = soma % 11;
    verificador = (resto < 2) ? 0 : 11 - resto;

    printf("Primeiro digito verificador: %d\n", verificador);
    return 0;
}
