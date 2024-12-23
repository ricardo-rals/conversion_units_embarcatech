#include <stdio.h>
#include "../includes/conversao_volume.h"

// Menu para exibir as opções de conversão
void menu() {
    printf("Escolha a conversão desejada:\n");
    printf("1. Litros para Mililitros\n");
    printf("2. Litros para Metros Cúbicos\n");
    printf("3. Mililitros para Litros\n");
    printf("4. Mililitros para Metros Cúbicos\n");
    printf("5. Metros Cúbicos para Litros\n");
    printf("6. Metros Cúbicos para Mililitros\n");
    printf("0. Sair\n");
}

// Funções de conversão com validações
double litros_para_mililitros(double litros) {
    if (litros < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    if (litros > 1e6) {
        printf("Erro: Valor muito grande para conversão.\n");
        return -1;
    }
    return litros * 1000.0;
}

double litros_para_metro_cubico(double litros) {
    if (litros < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    return litros / 1000.0;
}

double mililitros_para_litros(double mililitros) {
    if (mililitros < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    return mililitros / 1000.0;
}

double milililitros_para_metro_cubico(double mililitros) {
    if (mililitros < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    return mililitros / 1000000.0;
}

double metro_cubico_para_litros(double metro_cubico) {
    if (metro_cubico < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    return metro_cubico * 1000.0;
}

double metros_cubicos_para_mililitros(double metro_cubico) {
    if (metro_cubico < 0) {
        printf("Erro: Não é possível converter valores negativos.\n");
        return -1;
    }
    return metro_cubico * 1000000.0;
}

// Função principal para realizar as conversões
void conversao_main() {
    int opcao;
    double valor, resultado;

    do {
        menu();
        printf("\nDigite a opção: ");
        
        // Validação de entrada para a opção
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada inválida! Por favor, escolha um número entre 0 e 6.\n\n");
            while (getchar() != '\n'); // Limpa o buffer
            continue;
        }

        if (opcao < 0 || opcao > 6) {
            printf("\nOpção inválida! Por favor, escolha entre 0 e 6.\n\n");
            continue;
        }

        if (opcao == 0) {
            printf("\nSaindo...\n");
            break;
        }

        do {
            printf("\nDigite o valor a ser convertido (ou 0 para voltar): ");
            
            // Validação de entrada para o valor
            if (scanf("%lf", &valor) != 1) {
                printf("\nEntrada inválida! Por favor, insira um número válido.\n\n");
                while (getchar() != '\n'); // Limpa o buffer
                continue;
            }

            if (valor == 0) {
                printf("\nVoltando ao menu principal...\n\n");
                break;
            }

            if (valor < 0) {
                printf("\nValor inválido! Insira um número positivo.\n\n");
                continue;
            }

            // Processa a conversão com base na opção e adiciona mensagens específicas
            switch (opcao) {
                case 1:
                    resultado = litros_para_mililitros(valor);
                    printf("\nConvertendo %.2f Litros para Mililitros...\n", valor);
                    printf("Resultado: %.2f Litros = %.2f Mililitros\n\n", valor, resultado);
                    break;
                case 2:
                    resultado = litros_para_metro_cubico(valor);
                    printf("\nConvertendo %.2f Litros para Metros Cúbicos...\n", valor);
                    printf("Resultado: %.2f Litros = %.6f Metros Cúbicos\n\n", valor, resultado);
                    break;
                case 3:
                    resultado = mililitros_para_litros(valor);
                    printf("\nConvertendo %.2f Mililitros para Litros...\n", valor);
                    printf("Resultado: %.2f Mililitros = %.2f Litros\n\n", valor, resultado);
                    break;
                case 4:
                    resultado = milililitros_para_metro_cubico(valor);
                    printf("\nConvertendo %.2f Mililitros para Metros Cúbicos...\n", valor);
                    printf("Resultado: %.2f Mililitros = %.6f Metros Cúbicos\n\n", valor, resultado);
                    break;
                case 5:
                    resultado = metro_cubico_para_litros(valor);
                    printf("\nConvertendo %.2f Metros Cúbicos para Litros...\n", valor);
                    printf("Resultado: %.2f Metros Cúbicos = %.2f Litros\n\n", valor, resultado);
                    break;
                case 6:
                    resultado = metros_cubicos_para_mililitros(valor);
                    printf("\nConvertendo %.2f Metros Cúbicos para Mililitros...\n", valor);
                    printf("Resultado: %.2f Metros Cúbicos = %.2f Mililitros\n\n", valor, resultado);
                    break;
            }
        } while (valor != 0); // Continua até o usuário digitar 0 para voltar
    } while (1);
}