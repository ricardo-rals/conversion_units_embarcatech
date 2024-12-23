#include <stdio.h>

#define BITS (1.0 / 8.0)
#define BYTES 1
#define KILOBYTES 1024
#define MEGABYTES (1024.0 * 1024)
#define GIGABYTES (1024.0 * 1024 * 1024)
#define TERABYTES (1024.0 * 1024 * 1024 * 1024)

void converte(int valor, int unidade_origem, int unidade_destino)
{
    printf("Convertendo valor...\n");

    double bases[] = {BITS, BYTES, KILOBYTES, MEGABYTES, GIGABYTES, TERABYTES};

    // Teste para conferir valores
    // for (int i = 0; i < 6; i++)
    // {
    //     printf("%.4f\n", bases[i]);
    // }

    double resultado = valor * bases[unidade_origem - 1] / bases[unidade_destino - 1];
    printf("Resultado da conversao: %.4f\n", resultado);
}

int dados_menu()
{
    int op;
    do
    {
        printf("1 - Bits (b)\n2 - Bytes (B)\n3 - Kilobytes (KB)\n4 - Megabytes (MB)\n5 - Gigabytes (GB)\n6 - Terabytes (TB)\n\n");
        printf("Digite apenas o numero correspondente a opcao: ");
        scanf("%d", &op);
        if (op < 1 || op > 6)
        {
            printf("Por favor, selecione uma das opcoes acima.\n");
        }
    } while (op < 1 || op > 6);
    return op;
}

int dados_main(void)
{
    int valor, unidade_origem, unidade_destino;
    int op = 1;

    while (op == 1)
    {
        printf("CONVERTER DE:\n\n");
        unidade_origem = dados_menu();

        printf("CONVERTER PARA:\n\n");
        unidade_destino = dados_menu();

        printf("Digite o valor a ser convertido:\n\n");
        scanf("%d", &valor);

        converte(valor, unidade_origem, unidade_destino);

        printf("Deseja realizar outra conversao?\n\n");
        printf("1 - Sim\n2 - Nao\n");
        scanf("%d", &op);
    }

    return 0;
}