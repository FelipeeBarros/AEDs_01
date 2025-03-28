/*
Exemplo0204 - v0.0. - 24 / 02 / 2025
Author: Felipe Silva Barros
*/

#include "io.h"

void method_01(void)
{
    int x = 0;
    IO_id("Method_01 - Programa - v0.0");

    x = IO_readint("Entrar com um valor inteiro: ");

    if (x == 0)
    {
        IO_printf("%s (%d)\n", "Valor igual a zero", x);
    }
    if (x != 0)
    {
        IO_printf("%s (%d)\n", "Valor diferente de zero ", x);
    }

    IO_pause("Apertar ENTER para continuar");
}

void method_02(void)
{
    int x = 0;
    IO_id("Method_02 - Programa - v0.0");

    x = IO_readint("Entrar com um valor inteiro: ");

    if (x == 0)
    {
        IO_printf("%s (%d)\n", "Valor igual a zero", x);
    }
    else
    {
        IO_printf("%s (%d)\n", "Valor diferente de zero ", x);
    }

    IO_pause("Apertar ENTER para continuar");
}

void method_03(void)
{
    int x = 0;
    IO_id("Method_03 - Programa - v0.0");

    x = IO_readint("Entrar com um valor inteiro: ");

    if (x == 0)
    {
        IO_printf("%s (%d)\n", "Valor igual a zero", x);
    }
    else
    {
        IO_printf("%s (%d)\n", "Valor diferente de zero ", x);
        if (x > 0)
        {
            IO_printf("%s (%d)\n", "Valor maior que zero", x);
        }
        else
        {
            IO_printf("%s (%d)\n", "Valor menor que zero", x);
        }
    }

    IO_pause("Apertar ENTER para continuar");
}

void method_04(void)
{
    double x = 0.0;

    IO_id("Method_04 - Programa - v0.0");

    x = IO_readdouble("Entrar com um valor real: ");
    if (1.0 <= x && x <= 10.0)
    {
        IO_printf("%s (%lf)\n", "Valor dentro do intervalo [1:10] ", x);
    }
    else
    {
        IO_printf("%s (%lf)\n", "Valor fora do intervalo [1:10] ", x);
        if (x < 1.0)
        {
            IO_printf("%s (%lf)\n", "Valor abaixo do intervalo [1:10] ", x);
        }
        else
        {
            IO_printf("%s (%lf)\n", "Valor acima do intervalo [1:10]", x);
        }
    }

    IO_pause("Apertar ENTER para continuar");
}

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0204 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {

        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
        printf("\n%s", "2 - Method_02");
        printf("\n%s", "3 - Method_03");
        printf("\n%s", "4 - Method_04");
        printf("\n");

        printf("\n%s", "Opcao = ");
        scanf("%d", &opcao);
        getchar();
        printf("\n%s%d", "Opcao = ", opcao);

        switch (opcao)
        {
        case 0:
            break;
        case 1:
            method_01();
            break;
        case 2:
            method_02();
            break;
        case 3:
            method_03();
            break;
        case 4:
            method_04();
            break;
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    } while (opcao != 0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}