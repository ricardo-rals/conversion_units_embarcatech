#include <stdio.h>

int distancia_main() {
    int escolha;

    printf("Escolha uma conversao:\n");
    printf("1. cm para m\n");
    printf("2. m para km\n");
    printf("3. cm para km\n");
    printf("4. km para m\n");
    printf("5. km para cm\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &escolha);

    printf("Digite o valor para converter: ");
    int valor;
    scanf("%d", &valor);

    switch (escolha) {
        case 1:
            printf("%d cm = %d m\n", valor, valor / 100); // cm para m
            break;
        case 2:
            printf("%d m = %d km\n", valor, valor / 1000); // m para km
            break;
        case 3:
            printf("%d cm = %d km\n", valor, valor / 100000); // cm para km
            break;
        case 4:
            printf("%d km = %d m\n", valor, valor * 1000); // km para m
            break;
        case 5:
            printf("%d km = %d cm\n", valor, valor * 100000); // km para cm
            break;
        default:
            printf("Opcao invalida. Por favor, tente novamente.\n");
    }

    return 0;
}
