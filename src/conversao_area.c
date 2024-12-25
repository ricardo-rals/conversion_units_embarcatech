#include <stdio.h>

// Função para converter metros quadrados para centímetros quadrados
float metrosParaCentimetros(float metros) {
    return metros * 10000;
}

//  Função para converter centímetros quadrados para metros quadrados
float centimetrosParaMetros(float centimetros) {
    return centimetros / 10000;
}

int area_main() {
    float valor;
    int escolha;

    printf("Escolha a conversão:\n");
    printf("1 - Metros quadrados para centímetros quadrados\n");
    printf("2 - Centímetros quadrados para metros quadrados\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%f", &valor);
        printf("%.2f metros quadrados equivalem a %.2f centímetros quadrados.\n", valor, metrosParaCentimetros(valor));
    } else if (escolha == 2) {
        printf("Digite o valor em centímetros quadrados: ");
        scanf("%f", &valor);
        printf("%.2f centímetros quadrados equivalem a %.2f metros quadrados.\n", valor, centimetrosParaMetros(valor));
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}
