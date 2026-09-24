/*
 * Nome: Kauã Palota
 * Exercício: 50
 * Descrição: Calcula e classifica o IMC usando decisões encadeadas.
 * Data: 24/09/2026
 */

#include <stdio.h>

int main(void) {
    float peso, altura, imc;

    printf("Digite o peso em kg e a altura em metros: ");
    if (scanf("%f %f", &peso, &altura) != 2 || peso <= 0 || altura <= 0) {
        printf("Valores invalidos.\n");
        return 1;
    }

    imc = peso / (altura * altura);
    printf("IMC: %.2f\n", imc);

    if (imc < 18.5f)
        printf("Abaixo do peso.\n");
    else if (imc < 25.0f)
        printf("Peso normal.\n");
    else if (imc < 30.0f)
        printf("Sobrepeso.\n");
    else
        printf("Obesidade.\n");

    return 0;
}
