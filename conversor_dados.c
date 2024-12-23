#include <stdio.h>

void converte(int valor, int unidade_origem, int unidade_destino)
{
    printf("Convertendo valor...");
}

int menu()
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

int main(void)
{
    int valor, unidade_origem, unidade_destino;
    int op = 1;

    while (op == 1)
    {
        printf("CONVERTER DE:\n\n");
        unidade_origem = menu();
        printf("CONVERTER PARA:\n\n");
        unidade_destino = menu();
        printf("Deseja realizar outra conversao?\n\n");
        printf("1 - Sim\n2-Nao");
        scanf("%d", &op);
    }

    converte(valor, unidade_origem, unidade_destino);

    return 0;
}