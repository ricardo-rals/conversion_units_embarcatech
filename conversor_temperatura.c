#include <stdio.h>
#include <ctype.h> //Necessária para colocar letra em maiscula

void converterTemperatura(){
    int op, op2;
    float valor, valorMod;
    char Yn;

    while(1){
        printf("Qual unidade de temperatura voce esta usando?\n\n");

        printf("\t 1-Celcius(C)\n");
        printf("\t 2-Fahrenheit(F)\n");
        printf("\t 3-Kelvin(K)\n\n");
        printf("\t 4-Sair da funcao temperatura\n\n");
        printf("Digite sua opcao: ");
        scanf("%d", &op);

        printf("\n");

        if(op == 4)
            return;

        printf("Para qual unidade voce quer transformar?\n\n");
        switch (op)
        {
        case 1:
            //Caso do Celcius
            printf("\t 2-Fahrenheit(F)\n");
            printf("\t 3-Kelvin(K)\n\n");
            printf("\t 4-Sair da funcao temperatura\n\n");
            printf("Digite sua opcao: ");
            scanf("%d", &op2);

            switch (op2)
            {
            case 2:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = valor * 1.8 + 32;

                printf("\n%.2f C --> %.2f F\n", valor, valorMod);
                break;
            case 3:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = valor + 273.15;

                printf("\n%.2f C --> %.2f K\n", valor, valorMod);
            break;
            case 4:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
            }

            break;
        case 2:
            //Caso do Fahrenheit
            printf("\t 1-Celcius(C)\n");
            printf("\t 3-Kelvin(K)\n\n");
            printf("\t 4-Sair da funcao temperatura\n\n");
            printf("Digite sua opcao: ");
            scanf("%d", &op2);

            switch (op2)
            {
            case 1:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = (valor - 32) / 1.8;

                printf("\n%.2f F --> %.2f C\n", valor, valorMod);

                break;
            case 3:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = (valor + 459.67) / 1.8;

                printf("\n%.2f F --> %.2f K\n", valor, valorMod);

            break;
            case 4:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
            }

            break;
        case 3:
            //Caso do Kelvin
            printf("\t 1-Celcius(C)\n");
            printf("\t 2-Fahrenheit(F)\n\n");
            printf("\t 4-Sair da funcao temperatura\n\n");
            printf("Digite sua opcao: ");
            scanf("%d", &op2);

            switch (op2)
            {
            case 1:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = valor - 273.15;

                printf("\n%.2f K --> %.2f C\n", valor, valorMod);

                break;
            case 2:
                printf("Qual o valor?\n");
                scanf("%f", &valor);

                valorMod = valor * 1.8 - 459.67;

                printf("\n%.2f K --> %.2f F\n", valor, valorMod);

            break;
            case 4:
                return;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
            }

            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
        printf("\n");

        printf("Deseja continuar usando a funcao?(S/N)\nR:");
        scanf(" %c", &Yn);
        Yn = toupper(Yn); //Função para colocar letra em maiscula

        while(Yn != 'S'){
            if(Yn == 'N')
                return;
            printf("Resposta invalida. Tente novamente.\nR:");
            scanf(" %c", &Yn);
            Yn = toupper(Yn);
        }

    }
}

int main(){
    converterTemperatura();
}
