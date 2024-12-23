#include <stdio.h>

void mostrarMenu();
double converterParaWatts(double valor, int origem);
double converterDeWatts(double valorWatts, int destino);

int main() {
    int origem, destino;
    double valor, valorWatts, resultado;

    mostrarMenu();// Solicita a unidade de origem
    scanf("%d", &origem);

    if (origem < 1 || origem > 4) {
        printf("Opção inválida.\n");
    }

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &valor);

    mostrarMenu(); // Solicita a unidade de destino
    scanf("%d", &destino);

    if (destino < 1 || destino > 4) {
        printf("Opção inválida.\n");
    }

    // Converte para Watts (base comum)
    valorWatts = converterParaWatts(valor, origem);
    if (valorWatts < 0) {
        printf("Erro na conversão para Watts.\n");
        return 1;
    }

    // Converte de Watts para a unidade de destino
    resultado = converterDeWatts(valorWatts, destino);
    if (resultado < 0) {
        printf("Erro na conversão da unidade de destino.\n");
        return 1;
    }

    printf("Resultado da conversão: %.6f\n", resultado);

    return 0;
}

void mostrarMenu() {
    system("cls");
    printf("Conversor de unidades de potência\n");
    printf("Escolha a unidade:\n");
    printf("1 - Watts (W)\n");
    printf("2 - Quilowatts (kW)\n");
    printf("3 - Cavalos-vapor (CV)\n");
    printf("4 - Horse-power (HP)\n");
    printf("Opção: ");
}

double converterParaWatts(double valor, int origem) {
    switch (origem) {
        case 1: // Watts
            return valor;
        case 2: // Quilowatts
            return valor * 1000;
        case 3: // Cavalos-vapor (CV)
            return valor * 735.49875;
        case 4: // Horse-power (HP)
            return valor * 745.699872;
        default:
            return -1; // Erro
    }
}

double converterDeWatts(double valorWatts, int destino) {
    switch (destino) {
        case 1: // Watts
            return valorWatts;
        case 2: // Quilowatts
            return valorWatts / 1000;
        case 3: // Cavalos-vapor (CV)
            return valorWatts / 735.49875;
        case 4: // Horse-power (HP)
            return valorWatts / 745.699872;
        default:
            return -1; // Erro
    }
}
