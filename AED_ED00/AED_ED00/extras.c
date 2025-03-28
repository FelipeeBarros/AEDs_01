/*
Extra - v0.0. - 16 / 02 / 2025
Author: Felipe Silva Barros
*/

#include <stdio.h>

void extra01()
{
}

void extra02()
{
    void metodo1()
    {
    }

    void metodo2()
    {
    }

    void metodo3()
    {
    }

    void metodo4()
    {
    }

    void metodo5()
    {
    }

    void metodo6()
    {
    }

    void metodo7()
    {
    }

    void metodo8()
    {
    }

    void metodo9()
    {
    }

    void metodo10()
    {
    }
    }

    int main()
    {
        int opcao = 0;
        printf("%s\n", "Extra - Programa = v0.0");
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
            printf("\n%s%d", "Opcao = ", opcao);

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