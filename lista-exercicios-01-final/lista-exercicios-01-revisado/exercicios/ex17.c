/*
 * Nome: Kauã Palota
 * Exercício: 17
 * Descrição: Calcula o salário líquido com desconto de 10% de INSS.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float salarioBruto, desconto, salarioLiquido;

    printf("Digite o salario bruto: ");
    if (scanf("%f", &salarioBruto) != 1 || salarioBruto < 0) {
        printf("Valor invalido.\n");
        return 1;
    }

    desconto = salarioBruto * 0.10f;
    salarioLiquido = salarioBruto - desconto;

    printf("Salario liquido: %.2f\n", salarioLiquido);
    return 0;
}
