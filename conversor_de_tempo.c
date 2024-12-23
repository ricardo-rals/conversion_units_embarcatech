#include <stdio.h>

void convertSeconds(double seconds);
void convertMinutes(double minutes);
void convertHours(double hours);

int main() {
    int choice;
    double value;

    printf("=== Conversor de Tempo ===\n");
    printf("Escolha a unidade de entrada:\n");
    printf("1. Segundos\n");
    printf("2. Minutos\n");
    printf("3. Horas\n");
    printf("Digite sua escolha (1/2/3): ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 3) {
        printf("Opção inválida!\n");
        return 1;
    }

    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &value);

    switch (choice) {
        case 1:
            convertSeconds(value);
            break;
        case 2:
            convertMinutes(value);
            break;
        case 3:
            convertHours(value);
            break;
        default:
            printf("Erro inesperado.\n");
    }

    return 0;
}

// Função para converter segundos para minutos e horas
void convertSeconds(double seconds) {
    double minutes = seconds / 60;
    double hours = seconds / 3600;

    printf("\n%.2f segundos equivalem a:\n", seconds);
    printf("- %.2f minutos\n", minutes);
    printf("- %.2f horas\n", hours);
}

// Função para converter minutos para segundos e horas
void convertMinutes(double minutes) {
    double seconds = minutes * 60;
    double hours = minutes / 60;

    printf("\n%.2f minutos equivalem a:\n", minutes);
    printf("- %.2f segundos\n", seconds);
    printf("- %.2f horas\n", hours);
}

// Função para converter horas para segundos e minutos
void convertHours(double hours) {
    double seconds = hours * 3600;
    double minutes = hours * 60;

    printf("\n%.2f horas equivalem a:\n", hours);
    printf("- %.2f segundos\n", seconds);
    printf("- %.2f minutos\n", minutes);
}
