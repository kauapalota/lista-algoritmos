/*
 * Nome: Kauã Palota
 * Exercício: 36
 * Descrição: Armazena dados de um aluno em variáveis separadas e calcula a média.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    char nome[100];
    int matricula;
    float nota1, nota2, nota3, media;

    printf("Nome: ");
    scanf(" %99[^\n]", nome);

    printf("Matricula: ");
    scanf("%d", &matricula);

    printf("Nota 1, nota 2 e nota 3: ");
    if (scanf("%f %f %f", &nota1, &nota2, &nota3) != 3) return 1;

    media = (nota1 + nota2 + nota3) / 3.0f;

    printf("\nNome: %s\n", nome);
    printf("Matricula: %d\n", matricula);
    printf("Media: %.2f\n", media);

    return 0;
}
