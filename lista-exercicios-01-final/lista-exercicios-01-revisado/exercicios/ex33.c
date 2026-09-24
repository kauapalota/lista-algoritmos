/*
 * Nome: Kauã Palota
 * Exercício: 33
 * Descrição: Calcula a média de quatro notas com duas casas decimais.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3, nota4, media;

    printf("Digite quatro notas: ");
    if (scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4) != 4) {
        printf("Entrada invalida.\n");
        return 1;
    }

    media = (nota1 + nota2 + nota3 + nota4) / 4.0f;
    printf("Media: %.2f\n", media);

    return 0;
}
