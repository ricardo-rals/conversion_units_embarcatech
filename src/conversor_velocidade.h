#include <stdio.h>

// Função para converter km/h para m/s
double kmh_para_ms(double kmh) {
    return kmh / 3.6;
}

// Função para converter km/h para mph
double kmh_para_mph(double kmh) {
    return kmh / 1.609344;
}

// Função para converter m/s para km/h
double ms_para_kmh(double ms) {
    return ms * 3.6;
}

// Função para converter m/s para mph
double ms_para_mph(double ms) {
    return ms * 3.6 / 1.609344;
}

// Função para converter mph para km/h
double mph_para_kmh(double mph) {
    return mph * 1.609344;
}

// Função para converter mph para m/s
double mph_para_ms(double mph) {
    return mph * 1.609344 / 3.6;
}

int conversor_main() {
    double velocidade;
    int unidade;

    printf("Digite a velocidade: ");
    scanf("%lf", &velocidade);
    printf("Escolha a unidade (1: km/h, 2: m/s, 3: mph): ");
    scanf("%d", &unidade);

    switch (unidade) {
        case 1: // km/h
            printf("%.2f km/h é igual a %.2f m/s\n", velocidade, kmh_para_ms(velocidade));
            printf("%.2f km/h é igual a %.2f mph\n", velocidade, kmh_para_mph(velocidade));
            break;
        case 2: // m/s
            printf("%.2f m/s é igual a %.2f km/h\n", velocidade, ms_para_kmh(velocidade));
            printf("%.2f m/s é igual a %.2f mph\n", velocidade, ms_para_mph(velocidade));
            break;
        case 3: // mph
            printf("%.2f mph é igual a %.2f km/h\n", velocidade, mph_para_kmh(velocidade));
            printf("%.2f mph é igual a %.2f m/s\n", velocidade, mph_para_ms(velocidade));
            break;
        default:
            printf("Unidade não reconhecida.\n");
    }

    return 0;
}