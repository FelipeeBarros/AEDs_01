/*
Exemplo0201 - v0.0. - 24 / 02 / 2025
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

int main(int argc, char *argv[])
{

    int opcao = 0;

    printf("%s\n", "Exemplo0201 - Programa = v0.0");
    printf("%s\n", "Autor: Felipe Silva Barros");
    printf("\n");

    do
    {

        printf("\n%s\n", "Opcoes:");
        printf("\n%s", "0 - Terminar");
        printf("\n%s", "1 - Method_01");
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
        default:
            printf("\nERRO: Opcao invalida.\n");
            break;
        }
    } while (opcao != 0);

    printf("\n\nApertar ENTER para terminar.");
    getchar();
    return (0);
}