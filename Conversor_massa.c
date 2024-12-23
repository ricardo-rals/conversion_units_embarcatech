#include <stdio.h>

int main() {
    float valor, resultado;
    int unidadeEntrada, unidadeSaida;

    printf("**********************************************************\n");
    printf("Conversor de Unidades: Gramas, Quilogramas e Toneladas\n");
    printf("**********************************************************\n");

    printf("\nEscolha a unidade de entrada:\n");
    printf("1 - Gramas\n");
    printf("2 - Quilogramas\n");
    printf("3 - Toneladas\n");
    printf("Opção: ");
    scanf("%d", &unidadeEntrada);

    printf("\nInforme o valor: ");
    scanf("%f", &valor);

    printf("\nEscolha a unidade de saída:\n");
    printf("1 - Gramas\n");
    printf("2 - Quilogramas\n");
    printf("3 - Toneladas\n");
    printf("Opção: ");
    scanf("%d", &unidadeSaida);

    switch (unidadeEntrada) {
        case 1: // Gramas
            if (unidadeSaida == 2) {
                resultado = valor / 1000; // Gramas para Quilogramas
                printf("\n%.2f gramas = %.2f quilogramas\n", valor, resultado);
            } else if (unidadeSaida == 3) {
                resultado = valor / 1000000; // Gramas para Toneladas
                printf("\n%.2f gramas = %.2f toneladas\n", valor, resultado);
            } else if (unidadeSaida == 1) {
                printf("\nO valor já está em gramas: %.2f gramas\n", valor);
            } else {
                printf("\nOpção de saída inválida!\n");
            }
            break;

        case 2: // Quilogramas
            if (unidadeSaida == 1) {
                resultado = valor * 1000; // Quilogramas para Gramas
                printf("\n%.2f quilogramas = %.2f gramas\n", valor, resultado);
            } else if (unidadeSaida == 3) {
                resultado = valor / 1000; // Quilogramas para Toneladas
                printf("\n%.2f quilogramas = %.2f toneladas\n", valor, resultado);
            } else if (unidadeSaida == 2) {
                printf("\nO valor já está em quilogramas: %.2f quilogramas\n", valor);
            } else {
                printf("\nOpção de saída inválida!\n");
            }
            break;

        case 3: // Toneladas
            if (unidadeSaida == 1) {
                resultado = valor * 1000000; // Toneladas para Gramas
                printf("\n%.2f toneladas = %.2f gramas\n", valor, resultado);
            } else if (unidadeSaida == 2) {
                resultado = valor * 1000; // Toneladas para Quilogramas
                printf("\n%.2f toneladas = %.2f quilogramas\n", valor, resultado);
            } else if (unidadeSaida == 3) {
                printf("\nO valor já está em toneladas: %.2f toneladas\n", valor);
            } else {
                printf("\nOpção de saída inválida!\n");
            }
            break;

        default:
            printf("\nOpção de entrada inválida!\n");
    }

    return 0;
}
