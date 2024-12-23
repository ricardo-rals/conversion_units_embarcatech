#include <stdio.h>
#include "../includes/conversao_volume.h"
#include "../includes/conversor_dados.h"
#include "../includes/conversor_de_potencia.h"
#include "../includes/conversor_temperatura.h"
#include "../includes/conversor_de_tempo.h"
#include "../includes/conversor_velocidade.h"
#include "../includes/conversao_distancia.h"

void conversao_main();
int dados_main();
int potencia_main();
int temperatura_main();
int tempo_main();
int conversor_main();
int distancia_main();

int main() {
    int opcao;

    do {
        printf("Menu Principal:\n");
        printf("1. Acessar o menu de conversão de unidades de comprimento (metro, centímetro, milímetro)\n");
        printf("3. Acessar o menu de conversão de unidades de volume (litro, mililitro, metros cúbicos)\n");
        printf("4. Acessar o menu de conversão de unidade de temperatura (Celsius, Fahrenheit, Kelvin)\n");
        printf("5. Acessar o menu de conversão de unidades de velocidade (km/h, m/s, mph)\n");
        printf("6. Acessar o menu de conversão Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
        printf("8. Acessar o menu de conversão de unidades de tempo (segundos, minutos, horas)\n");
        printf("9. Acessar o menu de conversão Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
        printf("0. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                distancia_main();  // Chama a função principal do arquivo de conversão
                break;
            case 3:
                conversao_main();  // Chama a função principal do arquivo de conversão
                break;
             case 4:
                temperatura_main();
                break;
            case 5:
                conversor_main();
                break;
            case 6:
                potencia_main();
                break;
            case 8:
                tempo_main();
                break;
            case 9:
                dados_main();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 0);

    return 0;
}