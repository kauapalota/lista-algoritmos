/*
 * Nome: Kauã Palota
 * Exercício: 47
 * Descrição: Calcula o novo salário conforme a faixa de aumento.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float salario, percentual, novoSalario;

    printf("Digite o salario: ");
    if (scanf("%f", &salario) != 1 || salario < 0) return 1;

    if (salario < 1000)
        percentual = 0.20f;
    else if (salario <= 2000)
        percentual = 0.10f;
    else
        percentual = 0.05f;

    novoSalario = salario + salario * percentual;
    printf("Novo salario: %.2f\n", novoSalario);

    return 0;
}
