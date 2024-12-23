#include <stdio.h>
#include "../includes/conversao_volume.h"

void conversao_main();
int dados_main();
int potencia_main();

int main() {
    int opcao;

    do {
        printf("Menu Principal:\n");
        printf("3. Acessar o menu de conversão de unidades de volume (litro, mililitro, metros cúbicos)\n");
        printf("6. Acessar o menu de conversão Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)\n");
        printf("9. Acessar o menu de conversão Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)\n");
        printf("0. Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 3:
                conversao_main();  // Chama a função principal do arquivo de conversão
                break;
            case 6:
                potencia_main();
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