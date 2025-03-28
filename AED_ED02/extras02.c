/*
Extra02 - v0.0. - 24 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>

void extra01()
{
    char letra1;
    char letra2;
    char letra3;

    printf("%s", "Digite o primeiro caractere: ");
    scanf("%c", &letra1);
    getchar();
    printf("%s", "Digite o segundo caractere: ");
    scanf("%c", &letra2);
    getchar();
    printf("%s", "Digite o terceiro caractere: ");
    scanf("%c", &letra3);
    getchar();

    if (letra1 < letra2 && letra1 > letra3 || letra1 > letra2 && letra1 < letra3)
    {
        printf("\n%s", "O primeiro caractere ESTA ENTRE os outros digitados.\n");
    }
    else if (letra1 == letra2 || letra1 == letra3)
    {
        printf("\n%s", "O primeiro caractere EH IGUAL a um dos outros digitados.\n");
    }
    else
    {
        printf("\n%s", "O primeiro caractere NAO ESTA ENTRE os outros digitados.\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

void extra02()
{
    char letra1;
    char letra2;
    char letra3;

    printf("%s", "Digite o primeiro caractere: ");
    scanf("%c", &letra1);
    getchar();
    printf("%s", "Digite o segundo caractere: ");
    scanf("%c", &letra2);
    getchar();
    printf("%s", "Digite o terceiro caractere: ");
    scanf("%c", &letra3);
    getchar();

    char menor = letra2 < letra3 ? letra2 : letra3;
    char maior = letra2 > letra3 ? letra2 : letra3;

    if (letra1 != letra2 && letra2 != letra3)
    {
        if (letra1 < menor || letra1 > maior)
        {
            printf("\n%s", "O primeiro caractere NAO ESTA ENTRE os outros digitados.\n");
        }
    }
    else if (letra1 == letra2 || letra1 == letra3)
    {
        printf("\n%s", "Existem caracteres iguais.\n");
    }

    printf("\n%s\n", "Aperte ENTER para continuar.");
    getchar();
}

int main()
{
    int opcao = 0;
    printf("%s\n", "Extra02 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {
        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - extra_01");
        printf("\n%s", "2 - extra_02");
        printf("\n");
        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        printf("\n%s%d\n", "Opcao = ", opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            extra01();
            break;
        case 2:
            extra02();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    }

    while (opcao != 0);
    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}